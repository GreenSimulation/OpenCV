#include "Header.h"
#include <QFileDialog>
#include <QMessageBox>
#include <opencv.hpp>
#include <opencv2/legacy/compat.hpp>
#include <nonfree/nonfree.hpp>


ControlWidget::ControlWidget()
{
    this->contour_Low = 100;
    this->contour_High = 200;
    this->surf_Hessian = 500;
    this->matching_distance = 30;
    this->matching_number = 0;

    this->m_storage = NULL;
    this->m_storage_SURF = NULL;
    this->m_storage_Matching = NULL;

    for(int i = 0; i < 10; ++i)
    {
        this->True_Point[i] = 0;
    }

    this->max_Index = 0;

    cv::initModule_nonfree();
}

ControlWidget::~ControlWidget()
{
    cvReleaseImage(&this->imagerd);
    cvReleaseImage(&this->list_imagerd);
    cvReleaseImage(&this->gray_image);
    cvReleaseImage(&this->gray_list_image);
    cvReleaseImage(&this->contour_image);
    cvReleaseImage(&this->surf_image);
    cvReleaseImage(&this->matching_image);
    cvReleaseImage(&this->solution_image);

    cvReleaseMemStorage(&this->m_storage);
    cvReleaseMemStorage(&this->m_storage_SURF);
    cvReleaseMemStorage(&this->m_storage_Matching);

    cvClearSeq(this->image_Keypoints);
    cvClearSeq(this->image_Descriptors);
}


void ControlWidget::OpenSolutionImage()
{
    QString startPath = QApplication::applicationDirPath();
    QString listFileName = startPath + "/Sample/sample0" + QString::number(this->max_Index) + ".jpg";

    if(!listFileName.isEmpty()) {
        QImage image(listFileName);

        if(image.isNull()) {
            QMessageBox::information(0, QObject::tr("Load Image Failed"),
                                     QObject::tr("Cannot Load List"));

            return;
        }
    }

    if(listFileName.size()) {
        this->solution_image = cvLoadImage(listFileName.toAscii().data());
        QImage imageView = QImage((const unsigned char*)(this->solution_image->imageData),
                                  this->solution_image->width, this->solution_image->height,
                                  QImage::Format_RGB888).rgbSwapped();

        bufferSolutionImage = new QPixmap();
        *bufferSolutionImage = QPixmap::fromImage(imageView);
        *bufferSolutionImage = bufferSolutionImage->scaled(160, 130);
    }
}

void ControlWidget::OpenListImage()
{
    QString startPath = QApplication::applicationDirPath();
    QString listFileName = startPath + "/Sample/list.jpg";

    if(!listFileName.isEmpty()) {
        QImage image(listFileName);

        if(image.isNull()) {
            QMessageBox::information(0, QObject::tr("Load Image Failed"),
                                     QObject::tr("Cannot Load List"));

            return;
        }
    }

    if(listFileName.size()) {
        this->list_imagerd = cvLoadImage(listFileName.toAscii().data());
        this->gray_list_image = cvLoadImage(listFileName.toAscii().data(), CV_LOAD_IMAGE_GRAYSCALE);
        QImage imageView = QImage((const unsigned char*)(this->list_imagerd->imageData),
                                  this->list_imagerd->width, this->list_imagerd->height,
                                  QImage::Format_RGB888).rgbSwapped();

        bufferListImage = new QPixmap();
        *bufferListImage = QPixmap::fromImage(imageView);
        *bufferListImage = bufferListImage->scaled(790, 300);
    }
}


bool ControlWidget::OpenImage()
{
    openFileName = QFileDialog::getOpenFileName(0, QObject::tr("Open File"), QDir::currentPath(),
                                                QObject::tr("Image Files (*.png *.jpg *.jpeg *.bmp)"));

    if(!openFileName.isEmpty()) {
        QImage image(openFileName);

        if(image.isNull()) {
            QMessageBox::information(0, QObject::tr("Load Image Failed"),
                                     QObject::tr("Cannot Load %1.").arg(openFileName));

            return false;
        }
    }

    if(openFileName.size()) {
        imagerd = cvLoadImage(openFileName.toAscii().data());
        this->gray_image = cvLoadImage(openFileName.toAscii().data(),
                                       CV_LOAD_IMAGE_GRAYSCALE);

        QImage imageView = QImage((const unsigned char*)(imagerd->imageData), imagerd->width,
                                  imagerd->height, QImage::Format_RGB888).rgbSwapped();

        this->bufferImage = new QPixmap();
        *bufferImage = QPixmap::fromImage(imageView);
        *bufferImage = bufferImage->scaled(250, 200);

        this->ContourImage();
        this->SURFImage();
    }

    return true;
}


void ControlWidget::ContourImage()
{
    if(this->m_storage == NULL) {
        this->contour_image = cvCreateImage(cvGetSize(this->imagerd), IPL_DEPTH_8U, 1);
        this->m_storage = cvCreateMemStorage(0);
    }
    else {
        this->contour_image = cvCreateImage(cvGetSize(this->imagerd), IPL_DEPTH_8U, 1);
        cvClearMemStorage(this->m_storage);
    }

    CvSeq* contours = 0;

    cvCvtColor(this->imagerd, this->contour_image, CV_BGR2GRAY);
    cvCanny(this->contour_image, this->contour_image, this->contour_Low, this->contour_High);
    cvFindContours(this->contour_image, this->m_storage, &contours, sizeof(CvContour), CV_RETR_TREE);

    cvZero(this->contour_image);

    if(contours) {
        cvDrawContours(this->contour_image, contours, cvScalarAll(255), cvScalarAll(128), 5);

        QImage ContourImage = QImage((const unsigned char*)(this->contour_image->imageData),
                                     this->contour_image->width, this->contour_image->height,
                                     QImage::Format_Indexed8).rgbSwapped();

         this->bufferContourImage = new QPixmap();
        *bufferContourImage = QPixmap::fromImage(ContourImage);
        *bufferContourImage = bufferContourImage->scaled(250, 200);
    }

    cvClearSeq(contours);
    cvZero(this->contour_image);
}


void ControlWidget::SURFImage()
{
    if(this->m_storage_SURF == NULL) {
        this->surf_image = cvCreateImage(cvGetSize(this->imagerd), IPL_DEPTH_8U, 1);
        this->m_storage_SURF = cvCreateMemStorage(0);
    }
    else {
        this->surf_image = cvCreateImage(cvGetSize(this->imagerd), IPL_DEPTH_8U, 1);
        cvClearMemStorage(this->m_storage_SURF);
    }

    CvSURFParams params;
    params = cvSURFParams(this->surf_Hessian, 1);

    cvExtractSURF(this->gray_image, 0, &image_Keypoints, &image_Descriptors, this->m_storage_SURF,
                  params, 0);

    this->surf_image = cvCloneImage(this->imagerd);

    for(int i = 0; i < image_Keypoints->total; ++i)
    {
        CvSURFPoint* point = (CvSURFPoint*)cvGetSeqElem(image_Keypoints, i);
        CvPoint center;
        int radius;

        center.x = cvRound(point->pt.x);
        center.y = cvRound(point->pt.y);
//        radius = cvRound(point->size * 1.2 / 9.0 * 2.0);
//        cvCircle(this->surf_image, center, radius, cvScalar(0, 0, 255), 1, 8, 0);

        cvCircle(this->surf_image, center, 2, cvScalar(0, 0, 255), -1, 0, 0);
    }

    QImage SURF_Image = QImage((const unsigned char*)(this->surf_image->imageData),
                              this->surf_image->width, this->surf_image->height,
                              QImage::Format_RGB888).rgbSwapped();

    this->bufferSurfImage = new QPixmap();
    *bufferSurfImage = QPixmap::fromImage(SURF_Image);
    *bufferSurfImage = bufferSurfImage->scaled(250, 200);

    cvZero(this->surf_image);
}


void ControlWidget::MatchingImage()
{
    if(this->m_storage_Matching == NULL) {
        this->matching_image = cvCreateImage(cvGetSize(this->list_imagerd), IPL_DEPTH_8U, 1);
        this->m_storage_Matching = cvCreateMemStorage(0);
    }
    else {
        this->matching_image = cvCreateImage(cvGetSize(this->list_imagerd), IPL_DEPTH_8U, 1);
        cvClearMemStorage(this->m_storage_Matching);
    }

    for(int i = 0; i < 10; ++i)
    {
        this->True_Point[i] = 0;
    }

    CvSeq* keypoints2;
    CvSeq* descriptors2;

    CvSURFParams params;
    params = cvSURFParams(this->surf_Hessian, 1);

    cvExtractSURF(this->gray_list_image, 0, &keypoints2, &descriptors2, this->m_storage_Matching,
                  params);

    cv::Vector<int> ptpairs;

    this->findPairs(this->image_Keypoints, this->image_Descriptors, keypoints2, descriptors2,
                    ptpairs);

    this->matching_image = cvCloneImage(this->list_imagerd);

    for(int i = 0; i < (int)ptpairs.size(); i += 2)
    {
        CvSURFPoint* pt1 = (CvSURFPoint*)cvGetSeqElem(this->image_Keypoints, ptpairs[i]);
        CvSURFPoint* pt2 = (CvSURFPoint*)cvGetSeqElem(keypoints2, ptpairs[i + 1]);

        CvPoint center;
        int radius;

        center.x = cvRound(pt2->pt.x);
        center.y = cvRound(pt2->pt.y);
//        radius = cvRound(pt2->size * 1.2 / 9.0 * 2.0);
//        cvCircle(this->matching_image, center, radius, cvScalar(0, 0, 255), 1, 8, 0);
        cvCircle(this->matching_image, center, 2, cvScalar(0, 0, 255), -1, 0, 0);

        this->JudgePairs(center.x, center.y);
    }

    QImage Matching_Image = QImage((const unsigned char*)(this->matching_image->imageData),
                              this->matching_image->width, this->matching_image->height,
                              QImage::Format_RGB888).rgbSwapped();

    this->bufferMatchingImage = new QPixmap();
    *bufferMatchingImage = QPixmap::fromImage(Matching_Image);
    *bufferMatchingImage = bufferMatchingImage->scaled(790, 300);

    cvZero(this->matching_image);
    cvClearSeq(keypoints2);
    cvClearSeq(descriptors2);
}

double ControlWidget::euclidDistance(float *vec1, float *vec2, int length)
{
    double sum = 0.0;

    for(int i = 0; i < length; ++i)
    {
        sum += (vec1[i] - vec2[i]) * (vec1[i] - vec2[i]);
    }

    return sqrt(sum);
}

int ControlWidget::nearestNeighbor(float *vec, int laplacian, CvSeq *keypoints, CvSeq *descriptors)
{
    int neighbor = -1;
    double minDist = 1e6;

    for(int i = 0; i < descriptors->total; ++i)
    {
        CvSURFPoint* pt = (CvSURFPoint*)cvGetSeqElem(keypoints, i);

        if(laplacian != pt->laplacian) continue;

        float* v = (float*)cvGetSeqElem(descriptors, i);
        double d = this->euclidDistance(vec, v, DIM_VECTOR);

        if(d < minDist) {
            minDist = d;
            neighbor = i;
        }
    }

    if(minDist < this->matching_distance * 0.01) {
        return neighbor;
    }

    return -1;
}


void ControlWidget::findPairs(CvSeq *keypoints1, CvSeq *descriptors1,
                              CvSeq *keypoints2, CvSeq *descriptors2, cv::Vector<int>& ptpairs)
{
    ptpairs.clear();

    for(int i = 0; i <  descriptors1->total; ++i)
    {
        CvSURFPoint* pt1 = (CvSURFPoint*)cvGetSeqElem(keypoints1, i);

        float* desc1 = (float*)cvGetSeqElem(descriptors1, i);

        int nn = this->nearestNeighbor(desc1, pt1->laplacian, keypoints2, descriptors2);

        if(nn >= 0) {
            ptpairs.push_back(i);
            ptpairs.push_back(nn);
        }
    }
}


void ControlWidget::JudgePairs(int x, int y)
{
    for(int i = 0; i < 5; ++i)
    {
        if((x > 173 * i) && (x < 173 * (i + 1))) {
            if(y < 122) this->True_Point[i]++;
            else this->True_Point[i + 5]++;
        }
    }
}


int ControlWidget::FindMax()
{
    int max = 0;

    for(int i = 0; i < 10; ++i)
    {
        if(max < this->True_Point[i]) {
            max = True_Point[i];
            this->max_Index = i;
        }
    }

    return this->max_Index + 1;
}


QPixmap ControlWidget::returnImageBuffer(int name)
{
    switch(name)
    {
    case LIST:
        return *bufferListImage;

    case ORIGINAL:
        return *bufferImage;

    case CONTOUR:
        return *bufferContourImage;

    case SURF:
        return *bufferSurfImage;

    case MATCHING:
        return *bufferMatchingImage;

    case SOLUTION:
        return *bufferSolutionImage;
    }
}


int ControlWidget::GetLowFilter()
{
    return this->contour_Low;
}

int ControlWidget::GetHighFilter()
{
    return this->contour_High;
}

void ControlWidget::SetLowFilter(int value)
{
    this->contour_Low = value;
}

void ControlWidget::SetHighFilter(int value)
{
    this->contour_High = value;
}

void ControlWidget::SetHessian(int value)
{
    this->surf_Hessian = value;
}

void ControlWidget::SetDistance(int value)
{
    this->matching_distance = value;
}
