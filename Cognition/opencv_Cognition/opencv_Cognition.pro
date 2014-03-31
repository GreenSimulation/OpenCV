#-------------------------------------------------
#
# Project created by QtCreator 2014-03-26T11:34:57
#
#-------------------------------------------------

QT       += core gui

TARGET = opencv_Cognition
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    controlwidget.cpp

HEADERS  += mainwindow.h \
    controlwidget.h \
    Header.h

FORMS    += mainwindow.ui

LIBS += -LC:\\QtSDK\\opencv_bin\\install\\x86\\mingw\\bin \
              libopencv_nonfree248 \
              libopencv_core248 \
              libopencv_highgui248 \
              libopencv_features2d248 \
              libopencv_imgproc248 \
              libopencv_legacy248 \
              libopencv_ml248 \

INCLUDEPATH += "C:\QtSDK\opencv_bin\install\include\opencv"\
                            "C:\QtSDK\opencv_bin\install\include\opencv2"\
                            "C:\QtSDK\opencv_bin\install\include"

