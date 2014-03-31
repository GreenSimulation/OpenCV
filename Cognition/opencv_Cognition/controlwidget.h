#ifndef CONTROLWIDGET_H
#define CONTROLWIDGET_H

#include <opencv.hpp>


class ControlWidget
{
public:
    ControlWidget();
    ~ControlWidget();
    QPixmap returnImageBuffer(int name);
    void OpenListImage();
    bool OpenImage();
    void OpenSolutionImage();
    void ContourImage();
    void SURFImage();
    void MatchingImage();

    int GetLowFilter();
    int GetHighFilter();
    int FindMax();

    void SetLowFilter(int value);
    void SetHighFilter(int value);
    void SetHessian(int value);
    void SetDistance(int value);

protected:
    IplImage* imagerd;
    IplImage* list_imagerd;
    IplImage* gray_image;
    IplImage* gray_list_image;
    IplImage* contour_image;
    IplImage* surf_image;
    IplImage* matching_image;
    IplImage* solution_image;
    CvMemStorage* m_storage;
    CvMemStorage* m_storage_SURF;
    CvMemStorage* m_storage_Matching;
    CvSeq* image_Keypoints;
    CvSeq* image_Descriptors;

    int contour_Low;
    int contour_High;
    int surf_Hessian;
    int matching_distance;
    int True_Point[10];
    int max_Index;
    int matching_number;

    QPixmap* bufferImage;
    QPixmap* bufferListImage;
    QPixmap* bufferContourImage;
    QPixmap* bufferSurfImage;
    QPixmap* bufferMatchingImage;
    QPixmap* bufferSolutionImage;

    QString openFileName;

    double euclidDistance(float* vec1, float* vec2, int length);
    int nearestNeighbor(float* vec, int laplacian, CvSeq* keypoints, CvSeq* descriptors);
    void findPairs(CvSeq* keypoints1, CvSeq* descriptors1, CvSeq* keypoints2, CvSeq* descriptors2,
                   cv::Vector<int>& ptpairs);
    void JudgePairs(int x, int y);

};

#endif // CONTROLWIDGET_H
