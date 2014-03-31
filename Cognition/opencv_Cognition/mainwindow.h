#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "Header.h"

#include <opencv.hpp>


class ControlWidget;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

protected:
    void Init();
    bool isStart;


private slots:
    void on_Button_Open_clicked();

    void on_Slider_LowFilter_valueChanged();
    void on_Spin_LowFilter_valueChanged();
    void on_Slider_HighFilter_valueChanged();
    void on_Spin_HighFilter_valueChanged();

    void on_Slider_Hessian_valueChanged();
    void on_Spin_Hessian_valueChanged();

    void on_Box_Matching_toggled();
    void on_Slider_Matching_valueChanged();
    void on_Spin_Matching_valueChanged();
    
private:
    Ui::MainWindow *ui;
    ControlWidget* control;
};

#endif // MAINWINDOW_H
