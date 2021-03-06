/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Tue Apr 15 14:55:24 2014
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
    QPushButton *Button_Contour;
    QGroupBox *groupBox_2;
    QSlider *Slider_Hessian;
    QLabel *label_3;
    QSpinBox *Spin_Hessian;
    QPushButton *Button_SURF;
    QGroupBox *Box_Matching;
    QSlider *Slider_Matching;
    QLabel *label_5;
    QSpinBox *Spin_Matching;
    QPushButton *Button_Matching;
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
    QLabel *label_4;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1030, 700);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        Box_OriginalImage = new QGroupBox(centralWidget);
        Box_OriginalImage->setObjectName(QString::fromUtf8("Box_OriginalImage"));
        Box_OriginalImage->setGeometry(QRect(10, 50, 260, 210));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Box_OriginalImage->sizePolicy().hasHeightForWidth());
        Box_OriginalImage->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamily(QString::fromUtf8("HY\354\213\240\353\252\205\354\241\260"));
        font.setPointSize(14);
        font.setBold(true);
        font.setItalic(false);
        font.setWeight(75);
        font.setStrikeOut(false);
        font.setKerning(true);
        font.setStyleStrategy(QFont::PreferDefault);
        Box_OriginalImage->setFont(font);
        Box_OriginalImage->setStyleSheet(QString::fromUtf8(""));
        Box_OriginalImage->setFlat(false);
        Label_Original = new QLabel(Box_OriginalImage);
        Label_Original->setObjectName(QString::fromUtf8("Label_Original"));
        Label_Original->setGeometry(QRect(5, 5, 250, 200));
        Label_Original->setStyleSheet(QString::fromUtf8("border: 1px solid #000;"));
        Box_Control = new QGroupBox(centralWidget);
        Box_Control->setObjectName(QString::fromUtf8("Box_Control"));
        Box_Control->setGeometry(QRect(825, 10, 200, 621));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Arial"));
        font1.setBold(true);
        font1.setWeight(75);
        Box_Control->setFont(font1);
        Button_Open = new QPushButton(Box_Control);
        Button_Open->setObjectName(QString::fromUtf8("Button_Open"));
        Button_Open->setGeometry(QRect(50, 210, 111, 21));
        groupBox = new QGroupBox(Box_Control);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 240, 181, 150));
        QFont font2;
        font2.setPointSize(8);
        groupBox->setFont(font2);
        Slider_LowFilter = new QSlider(groupBox);
        Slider_LowFilter->setObjectName(QString::fromUtf8("Slider_LowFilter"));
        Slider_LowFilter->setGeometry(QRect(10, 40, 111, 19));
        Slider_LowFilter->setMaximum(500);
        Slider_LowFilter->setValue(100);
        Slider_LowFilter->setOrientation(Qt::Horizontal);
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 20, 71, 16));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Arial"));
        font3.setBold(false);
        font3.setWeight(50);
        label->setFont(font3);
        Spin_LowFilter = new QSpinBox(groupBox);
        Spin_LowFilter->setObjectName(QString::fromUtf8("Spin_LowFilter"));
        Spin_LowFilter->setGeometry(QRect(130, 40, 42, 22));
        Spin_LowFilter->setMaximum(500);
        Spin_LowFilter->setValue(100);
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 70, 71, 16));
        label_2->setFont(font3);
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
        Button_Contour = new QPushButton(groupBox);
        Button_Contour->setObjectName(QString::fromUtf8("Button_Contour"));
        Button_Contour->setGeometry(QRect(40, 120, 111, 21));
        groupBox_2 = new QGroupBox(Box_Control);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 400, 181, 100));
        sizePolicy.setHeightForWidth(groupBox_2->sizePolicy().hasHeightForWidth());
        groupBox_2->setSizePolicy(sizePolicy);
        groupBox_2->setFont(font2);
        Slider_Hessian = new QSlider(groupBox_2);
        Slider_Hessian->setObjectName(QString::fromUtf8("Slider_Hessian"));
        Slider_Hessian->setGeometry(QRect(10, 40, 111, 19));
        Slider_Hessian->setMaximum(2000);
        Slider_Hessian->setPageStep(50);
        Slider_Hessian->setValue(500);
        Slider_Hessian->setOrientation(Qt::Horizontal);
        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 20, 91, 16));
        label_3->setFont(font3);
        Spin_Hessian = new QSpinBox(groupBox_2);
        Spin_Hessian->setObjectName(QString::fromUtf8("Spin_Hessian"));
        Spin_Hessian->setGeometry(QRect(130, 40, 42, 22));
        Spin_Hessian->setMaximum(2000);
        Spin_Hessian->setValue(500);
        Button_SURF = new QPushButton(groupBox_2);
        Button_SURF->setObjectName(QString::fromUtf8("Button_SURF"));
        Button_SURF->setGeometry(QRect(40, 70, 111, 21));
        Box_Matching = new QGroupBox(Box_Control);
        Box_Matching->setObjectName(QString::fromUtf8("Box_Matching"));
        Box_Matching->setEnabled(true);
        Box_Matching->setGeometry(QRect(10, 510, 181, 101));
        Box_Matching->setMinimumSize(QSize(0, 71));
        Box_Matching->setFont(font2);
        Box_Matching->setCheckable(false);
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
        label_5->setGeometry(QRect(10, 20, 121, 16));
        QFont font4;
        font4.setFamily(QString::fromUtf8("Arial"));
        font4.setPointSize(8);
        font4.setBold(false);
        font4.setWeight(50);
        label_5->setFont(font4);
        Spin_Matching = new QSpinBox(Box_Matching);
        Spin_Matching->setObjectName(QString::fromUtf8("Spin_Matching"));
        Spin_Matching->setGeometry(QRect(130, 40, 42, 22));
        Spin_Matching->setMaximum(100);
        Spin_Matching->setValue(30);
        Button_Matching = new QPushButton(Box_Matching);
        Button_Matching->setObjectName(QString::fromUtf8("Button_Matching"));
        Button_Matching->setGeometry(QRect(35, 70, 111, 21));
        Box_Solution = new QGroupBox(Box_Control);
        Box_Solution->setObjectName(QString::fromUtf8("Box_Solution"));
        Box_Solution->setGeometry(QRect(10, 20, 181, 181));
        Box_Solution->setFont(font2);
        Label_Solution = new QLabel(Box_Solution);
        Label_Solution->setObjectName(QString::fromUtf8("Label_Solution"));
        Label_Solution->setGeometry(QRect(10, 20, 160, 130));
        Label_Solution->setStyleSheet(QString::fromUtf8("border: 1px solid #000;"));
        label_6 = new QLabel(Box_Solution);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(10, 160, 71, 16));
        label_6->setFont(font4);
        TextLabel_Solution = new QLabel(Box_Solution);
        TextLabel_Solution->setObjectName(QString::fromUtf8("TextLabel_Solution"));
        TextLabel_Solution->setGeometry(QRect(80, 158, 91, 20));
        TextLabel_Solution->setFont(font4);
        TextLabel_Solution->setAlignment(Qt::AlignCenter);
        Box_ContourImage = new QGroupBox(centralWidget);
        Box_ContourImage->setObjectName(QString::fromUtf8("Box_ContourImage"));
        Box_ContourImage->setGeometry(QRect(285, 50, 260, 210));
        QFont font5;
        font5.setFamily(QString::fromUtf8("HY\354\213\240\353\252\205\354\241\260"));
        font5.setPointSize(14);
        font5.setBold(true);
        font5.setWeight(75);
        Box_ContourImage->setFont(font5);
        Box_ContourImage->setStyleSheet(QString::fromUtf8(""));
        Label_Contour = new QLabel(Box_ContourImage);
        Label_Contour->setObjectName(QString::fromUtf8("Label_Contour"));
        Label_Contour->setGeometry(QRect(5, 5, 251, 200));
        Label_Contour->setStyleSheet(QString::fromUtf8("border: 1px solid #000;"));
        Box_SURFImage = new QGroupBox(centralWidget);
        Box_SURFImage->setObjectName(QString::fromUtf8("Box_SURFImage"));
        Box_SURFImage->setGeometry(QRect(560, 50, 260, 210));
        sizePolicy.setHeightForWidth(Box_SURFImage->sizePolicy().hasHeightForWidth());
        Box_SURFImage->setSizePolicy(sizePolicy);
        Box_SURFImage->setFont(font5);
        Box_SURFImage->setStyleSheet(QString::fromUtf8(""));
        Label_SURF = new QLabel(Box_SURFImage);
        Label_SURF->setObjectName(QString::fromUtf8("Label_SURF"));
        Label_SURF->setGeometry(QRect(5, 5, 250, 200));
        Label_SURF->setStyleSheet(QString::fromUtf8("border: 1px solid #000;"));
        Box_List = new QGroupBox(centralWidget);
        Box_List->setObjectName(QString::fromUtf8("Box_List"));
        Box_List->setGeometry(QRect(10, 320, 810, 310));
        Box_List->setFont(font5);
        Box_List->setAutoFillBackground(false);
        Box_List->setStyleSheet(QString::fromUtf8(""));
        Label_List = new QLabel(Box_List);
        Label_List->setObjectName(QString::fromUtf8("Label_List"));
        Label_List->setGeometry(QRect(5, 5, 800, 300));
        Label_List->setStyleSheet(QString::fromUtf8("border: 1px solid #000;"));
        Label_List->setScaledContents(false);
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(20, 20, 101, 16));
        QFont font6;
        font6.setFamily(QString::fromUtf8("Arial Narrow"));
        font6.setPointSize(13);
        font6.setBold(true);
        font6.setWeight(75);
        label_4->setFont(font6);
        label_7 = new QLabel(centralWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(290, 20, 151, 16));
        label_7->setFont(font6);
        label_8 = new QLabel(centralWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(560, 20, 151, 16));
        label_8->setFont(font6);
        label_9 = new QLabel(centralWidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(10, 290, 171, 16));
        label_9->setFont(font6);
        label_10 = new QLabel(centralWidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(830, 640, 190, 40));
        label_10->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/gs_logo.png")));
        label_10->setScaledContents(true);
        MainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "\354\213\235\354\232\251 \354\225\275\354\236\254 \354\235\270\354\213\235 \355\224\204\353\241\234\352\267\270\353\236\250", 0, QApplication::UnicodeUTF8));
        Box_OriginalImage->setTitle(QString());
        Label_Original->setText(QString());
        Box_Control->setTitle(QApplication::translate("MainWindow", "\354\240\234\354\226\264 \355\214\220\353\204\254", 0, QApplication::UnicodeUTF8));
        Button_Open->setText(QApplication::translate("MainWindow", "\354\235\264\353\257\270\354\247\200 \353\266\210\353\237\254\354\230\244\352\270\260", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("MainWindow", "\354\234\244\352\263\275\354\204\240 \354\266\224\354\266\234", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MainWindow", "\353\202\256\354\235\200 \354\236\204\352\263\204\352\260\222", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MainWindow", "\353\206\222\354\235\200 \354\236\204\352\263\204\352\260\222", 0, QApplication::UnicodeUTF8));
        Button_Contour->setText(QApplication::translate("MainWindow", "\354\234\244\352\263\275\354\204\240 \354\266\224\354\266\234\355\225\230\352\270\260", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "\355\212\271\354\247\225\354\240\220 \354\266\224\354\266\234", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("MainWindow", "\355\227\244\354\213\234\354\225\210 \355\226\211\353\240\254\354\213\235 \352\260\222", 0, QApplication::UnicodeUTF8));
        Button_SURF->setText(QApplication::translate("MainWindow", "\355\212\271\354\247\225\354\240\220 \354\266\224\354\266\234\355\225\230\352\270\260", 0, QApplication::UnicodeUTF8));
        Box_Matching->setTitle(QApplication::translate("MainWindow", "\355\212\271\354\247\225\354\240\220 \355\214\220\353\263\204", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("MainWindow", "\352\261\260\353\246\254\352\260\222", 0, QApplication::UnicodeUTF8));
        Button_Matching->setText(QApplication::translate("MainWindow", "\355\214\220\353\263\204\355\225\230\352\270\260", 0, QApplication::UnicodeUTF8));
        Box_Solution->setTitle(QApplication::translate("MainWindow", "\355\214\220\353\263\204\353\220\234 \354\235\264\353\257\270\354\247\200", 0, QApplication::UnicodeUTF8));
        Label_Solution->setText(QString());
        label_6->setText(QApplication::translate("MainWindow", "\355\214\220\353\263\204\353\220\234 \354\213\235\353\254\274 : ", 0, QApplication::UnicodeUTF8));
        TextLabel_Solution->setText(QApplication::translate("MainWindow", "\354\227\206\354\235\214", 0, QApplication::UnicodeUTF8));
        Box_ContourImage->setTitle(QString());
        Label_Contour->setText(QString());
        Box_SURFImage->setTitle(QString());
        Label_SURF->setText(QString());
        Box_List->setTitle(QString());
        Label_List->setText(QString());
        label_4->setText(QApplication::translate("MainWindow", "\354\233\220\353\263\270 \354\235\264\353\257\270\354\247\200", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("MainWindow", "\354\234\244\352\263\275\354\204\240 \354\266\224\354\266\234 \354\235\264\353\257\270\354\247\200", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("MainWindow", "\355\212\271\354\247\225\354\240\220 \354\266\224\354\266\234 \354\235\264\353\257\270\354\247\200", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("MainWindow", "\353\215\260\354\235\264\355\204\260\353\262\240\354\235\264\354\212\244 \354\235\264\353\257\270\354\247\200", 0, QApplication::UnicodeUTF8));
        label_10->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
