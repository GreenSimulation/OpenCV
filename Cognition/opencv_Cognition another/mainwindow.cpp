#include "Header.h"
#include <QFileDialog>
#include <QMessageBox>
#include <QTextCodec>
#include <opencv.hpp>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    this->Init();
}


MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::Init()
{
    control = new ControlWidget;

    this->isStart = true;
    this->isContour = false;
    this->isSURF = false;
    this->isMatching = false;

    control->OpenListImage();
    ui->Label_List->setPixmap(control->returnImageBuffer(LIST));

    ui->Spin_LowFilter->setRange(0, 500);
    ui->Spin_LowFilter->setValue(100);
    ui->Slider_LowFilter->setRange(0, 500);
    ui->Slider_LowFilter->setValue(100);

    ui->Spin_HighFilter->setRange(0, 500);
    ui->Spin_HighFilter->setValue(200);
    ui->Slider_HighFilter->setRange(0, 500);
    ui->Slider_HighFilter->setValue(200);
}


void MainWindow::FindDB(int number)
{
    switch(number)
    {
    case 1:
        ui->TextLabel_Solution->setText(tr("각시붓꽃"));
        break;

    case 2:
        ui->TextLabel_Solution->setText(tr("동의나물"));
        break;

    case 3:
        ui->TextLabel_Solution->setText(tr("두충"));
        break;

    case 4:
        ui->TextLabel_Solution->setText(tr("등대풀"));
        break;

    case 5:
        ui->TextLabel_Solution->setText(tr("배풍등"));
        break;

    case 6:
        ui->TextLabel_Solution->setText(tr("분꽃"));
        break;

    case 7:
        ui->TextLabel_Solution->setText(tr("애기괭이눈"));
        break;

    case 8:
        ui->TextLabel_Solution->setText(tr("어저귀"));
        break;

    case 9:
        ui->TextLabel_Solution->setText(tr("우산나물"));
        break;

    case 10:
        ui->TextLabel_Solution->setText(tr("자주쓴풀"));
        break;

    case 11:
        ui->TextLabel_Solution->setText(tr("활나물"));
        break;

    case 12:
        ui->TextLabel_Solution->setText(tr("황새냉이"));
        break;
    }
}



void MainWindow::on_Button_Open_clicked()
{
    if(control->OpenImage()) {
        ui->Label_Original->setPixmap(control->returnImageBuffer(ORIGINAL));

        this->isStart = false;
    }
}


void MainWindow::on_Button_Contour_clicked()
{
    if(!this->isStart) {
        ui->Label_Contour->setPixmap(control->returnImageBuffer(CONTOUR));

        this->isContour = true;
    }
}


void MainWindow::on_Slider_LowFilter_valueChanged()
{
    ui->Spin_LowFilter->setValue(ui->Slider_LowFilter->value());
    this->control->SetLowFilter(ui->Slider_LowFilter->value());

    if(!this->isStart && this->isContour) {
        this->control->ContourImage();
        ui->Label_Contour->setPixmap(this->control->returnImageBuffer(CONTOUR));
    }
}

void MainWindow::on_Spin_LowFilter_valueChanged()
{
    ui->Slider_LowFilter->setValue(ui->Spin_LowFilter->value());
}


void MainWindow::on_Slider_HighFilter_valueChanged()
{
    ui->Spin_HighFilter->setValue(ui->Slider_HighFilter->value());
    this->control->SetHighFilter(ui->Slider_HighFilter->value());

    if(!this->isStart && this->isContour) {
        this->control->ContourImage();
        ui->Label_Contour->setPixmap(this->control->returnImageBuffer(CONTOUR));
    }
}

void MainWindow::on_Spin_HighFilter_valueChanged()
{
    ui->Slider_HighFilter->setValue(ui->Spin_HighFilter->value());
}


void MainWindow::on_Button_SURF_clicked()
{
    if(!this->isStart) {
        ui->Label_SURF->setPixmap(control->returnImageBuffer(SURF));

        this->isSURF = true;
    }
}

void MainWindow::on_Slider_Hessian_valueChanged()
{
    ui->Spin_Hessian->setValue(ui->Slider_Hessian->value());
    this->control->SetHessian(ui->Slider_Hessian->value());

    if(!this->isStart && this->isSURF) {
        this->control->SURFImage();
        ui->Label_SURF->setPixmap(this->control->returnImageBuffer(SURF));

        if(this->isMatching) {
            control->MatchingImage();
            ui->Label_List->setPixmap(control->returnImageBuffer(MATCHING));
            this->FindDB(control->FindMax());
            this->control->OpenSolutionImage();
            ui->Label_Solution->setPixmap(control->returnImageBuffer(SOLUTION));
        }
    }
}

void MainWindow::on_Spin_Hessian_valueChanged()
{
    ui->Slider_Hessian->setValue(ui->Spin_Hessian->value());
}


void MainWindow::on_Button_Matching_clicked()
{
    if(!this->isStart) {
        control->MatchingImage();
        ui->Label_List->setPixmap(control->returnImageBuffer(MATCHING));
        this->FindDB(control->FindMax());
        this->control->OpenSolutionImage();
        ui->Label_Solution->setPixmap(control->returnImageBuffer(SOLUTION));

        this->isMatching = true;
    }
}


void MainWindow::on_Slider_Matching_valueChanged()
{
    ui->Spin_Matching->setValue(ui->Slider_Matching->value());
    this->control->SetDistance(ui->Slider_Matching->value());

    if(!this->isStart) {
        this->control->MatchingImage();
        ui->Label_List->setPixmap(control->returnImageBuffer(MATCHING));
        this->FindDB(control->FindMax());
        this->control->OpenSolutionImage();
        ui->Label_Solution->setPixmap(control->returnImageBuffer(SOLUTION));
    }
}

void MainWindow::on_Spin_Matching_valueChanged()
{
    ui->Slider_Matching->setValue(ui->Spin_Matching->value());
}
