/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Fri Mar 28 17:02:25 2014
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QPushButton>
#include <QtGui/QSlider>
#include <QtGui/QSpinBox>
#include <QtGui/QStatusBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGroupBox *Box_OriginalImage;
    QLabel *Label_Original;
    QGroupBox *Box_Control;
    QPushButton *Button_Open;
    QGroupBox *groupBox;
    QSlider *Slider_LowFilter;
    QLabel *label;
    QSpinBox *Spin_LowFilter;
    QLabel *label_2;
    QSlider *Slider_HighFilter;
    QSpinBox *Spin_HighFilter;
    QGroupBox *groupBox_2;
    QSlider *Slider_Hessian;
    QLabel *label_3;
    QSpinBox *Spin_Hessian;
    QGroupBox *Box_Matching;
    QSlider *Slider_Matching;
    QLabel *label_5;
    QSpinBox *Spin_Matching;
    QGroupBox *Box_Solution;
    QLabel *Label_Solution;
    QLabel *label_6;
    QLabel *TextLabel_Solution;
    QGroupBox *Box_ContourImage;
    QLabel *Label_Contour;
    QGroupBox *Box_SURFImage;
    QLabel *Label_SURF;
    QGroupBox *Box_List;
    QLabel *Label_List;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1030, 600);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        Box_OriginalImage = new QGroupBox(centralWidget);
        Box_OriginalImage->setObjectName(QString::fromUtf8("Box_OriginalImage"));
        Box_OriginalImage->setGeometry(QRect(10, 10, 270, 230));
        Label_Original = new QLabel(Box_OriginalImage);
        Label_Original->setObjectName(QString::fromUtf8("Label_Original"));
        Label_Original->setGeometry(QRect(10, 20, 250, 200));
        Box_Control = new QGroupBox(centralWidget);
        Box_Control->setObjectName(QString::fromUtf8("Box_Control"));
        Box_Control->setGeometry(QRect(820, 10, 200, 570));
        Button_Open = new QPushButton(Box_Control);
        Button_Open->setObjectName(QString::fromUtf8("Button_Open"));
        Button_Open->setGeometry(QRect(50, 30, 100, 40));
        groupBox = new QGroupBox(Box_Control);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 90, 181, 121));
        Slider_LowFilter = new QSlider(groupBox);
        Slider_LowFilter->setObjectName(QString::fromUtf8("Slider_LowFilter"));
        Slider_LowFilter->setGeometry(QRect(10, 40, 111, 19));
        Slider_LowFilter->setMaximum(500);
        Slider_LowFilter->setValue(100);
        Slider_LowFilter->setOrientation(Qt::Horizontal);
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 20, 56, 12));
        Spin_LowFilter = new QSpinBox(groupBox);
        Spin_LowFilter->setObjectName(QString::fromUtf8("Spin_LowFilter"));
        Spin_LowFilter->setGeometry(QRect(130, 40, 42, 22));
        Spin_LowFilter->setMaximum(500);
        Spin_LowFilter->setValue(100);
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 70, 56, 12));
        Slider_HighFilter = new QSlider(groupBox);
        Slider_HighFilter->setObjectName(QString::fromUtf8("Slider_HighFilter"));
        Slider_HighFilter->setGeometry(QRect(10, 90, 111, 19));
        Slider_HighFilter->setMaximum(500);
        Slider_HighFilter->setValue(200);
        Slider_HighFilter->setOrientation(Qt::Horizontal);
        Spin_HighFilter = new QSpinBox(groupBox);
        Spin_HighFilter->setObjectName(QString::fromUtf8("Spin_HighFilter"));
        Spin_HighFilter->setGeometry(QRect(130, 90, 42, 22));
        Spin_HighFilter->setMaximum(500);
        Spin_HighFilter->setValue(200);
        groupBox_2 = new QGroupBox(Box_Control);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 220, 181, 71));
        Slider_Hessian = new QSlider(groupBox_2);
        Slider_Hessian->setObjectName(QString::fromUtf8("Slider_Hessian"));
        Slider_Hessian->setGeometry(QRect(10, 40, 111, 19));
        Slider_Hessian->setMaximum(2000);
        Slider_Hessian->setPageStep(50);
        Slider_Hessian->setValue(500);
        Slider_Hessian->setOrientation(Qt::Horizontal);
        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 20, 56, 12));
        Spin_Hessian = new QSpinBox(groupBox_2);
        Spin_Hessian->setObjectName(QString::fromUtf8("Spin_Hessian"));
        Spin_Hessian->setGeometry(QRect(130, 40, 42, 22));
        Spin_Hessian->setMaximum(2000);
        Spin_Hessian->setValue(500);
        Box_Matching = new QGroupBox(Box_Control);
        Box_Matching->setObjectName(QString::fromUtf8("Box_Matching"));
        Box_Matching->setGeometry(QRect(10, 300, 181, 71));
        Box_Matching->setCheckable(true);
        Box_Matching->setChecked(false);
        Slider_Matching = new QSlider(Box_Matching);
        Slider_Matching->setObjectName(QString::fromUtf8("Slider_Matching"));
        Slider_Matching->setGeometry(QRect(10, 40, 111, 19));
        Slider_Matching->setMaximum(100);
        Slider_Matching->setPageStep(1);
        Slider_Matching->setValue(30);
        Slider_Matching->setOrientation(Qt::Horizontal);
        label_5 = new QLabel(Box_Matching);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(10, 20, 111, 16));
        Spin_Matching = new QSpinBox(Box_Matching);
        Spin_Matching->setObjectName(QString::fromUtf8("Spin_Matching"));
        Spin_Matching->setGeometry(QRect(130, 40, 42, 22));
        Spin_Matching->setMaximum(100);
        Spin_Matching->setValue(30);
        Box_Solution = new QGroupBox(Box_Control);
        Box_Solution->setObjectName(QString::fromUtf8("Box_Solution"));
        Box_Solution->setGeometry(QRect(10, 380, 181, 181));
        Label_Solution = new QLabel(Box_Solution);
        Label_Solution->setObjectName(QString::fromUtf8("Label_Solution"));
        Label_Solution->setGeometry(QRect(10, 20, 160, 130));
        label_6 = new QLabel(Box_Solution);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(10, 160, 121, 16));
        TextLabel_Solution = new QLabel(Box_Solution);
        TextLabel_Solution->setObjectName(QString::fromUtf8("TextLabel_Solution"));
        TextLabel_Solution->setGeometry(QRect(130, 160, 31, 16));
        Box_ContourImage = new QGroupBox(centralWidget);
        Box_ContourImage->setObjectName(QString::fromUtf8("Box_ContourImage"));
        Box_ContourImage->setGeometry(QRect(280, 10, 270, 230));
        Label_Contour = new QLabel(Box_ContourImage);
        Label_Contour->setObjectName(QString::fromUtf8("Label_Contour"));
        Label_Contour->setGeometry(QRect(10, 20, 250, 200));
        Box_SURFImage = new QGroupBox(centralWidget);
        Box_SURFImage->setObjectName(QString::fromUtf8("Box_SURFImage"));
        Box_SURFImage->setGeometry(QRect(550, 10, 270, 230));
        Label_SURF = new QLabel(Box_SURFImage);
        Label_SURF->setObjectName(QString::fromUtf8("Label_SURF"));
        Label_SURF->setGeometry(QRect(10, 20, 250, 200));
        Box_List = new QGroupBox(centralWidget);
        Box_List->setObjectName(QString::fromUtf8("Box_List"));
        Box_List->setGeometry(QRect(10, 250, 811, 331));
        Label_List = new QLabel(Box_List);
        Label_List->setObjectName(QString::fromUtf8("Label_List"));
        Label_List->setGeometry(QRect(10, 20, 790, 300));
        MainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        Box_OriginalImage->setTitle(QApplication::translate("MainWindow", "Original Image", 0, QApplication::UnicodeUTF8));
        Label_Original->setText(QString());
        Box_Control->setTitle(QApplication::translate("MainWindow", "Control", 0, QApplication::UnicodeUTF8));
        Button_Open->setText(QApplication::translate("MainWindow", "Open Image", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("MainWindow", "Contour", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MainWindow", "Low Filter", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MainWindow", "High Filter", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "SURF", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("MainWindow", "Hessian", 0, QApplication::UnicodeUTF8));
        Box_Matching->setTitle(QApplication::translate("MainWindow", "Matching", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("MainWindow", "Distance Threshold", 0, QApplication::UnicodeUTF8));
        Box_Solution->setTitle(QApplication::translate("MainWindow", "Solution", 0, QApplication::UnicodeUTF8));
        Label_Solution->setText(QString());
        label_6->setText(QApplication::translate("MainWindow", "Matchinged Image :", 0, QApplication::UnicodeUTF8));
        TextLabel_Solution->setText(QApplication::translate("MainWindow", "NULL", 0, QApplication::UnicodeUTF8));
        Box_ContourImage->setTitle(QApplication::translate("MainWindow", "Contour Image", 0, QApplication::UnicodeUTF8));
        Label_Contour->setText(QString());
        Box_SURFImage->setTitle(QApplication::translate("MainWindow", "SURF Image", 0, QApplication::UnicodeUTF8));
        Label_SURF->setText(QString());
        Box_List->setTitle(QApplication::translate("MainWindow", "List", 0, QApplication::UnicodeUTF8));
        Label_List->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
