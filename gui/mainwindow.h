#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "mydialog.h"
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_actionNew_Window_triggered();

    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
    MyDialog *mdialog;
};

#endif // MAINWINDOW_H
