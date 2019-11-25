#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void SetupDemo(QCustomPlot *customPlot);


private slots:
    /*void on_pushButton_clicked();

    void on_customPlot_customContextMenuRequested(const QPoint &pos);
    */
    void realtimeDataSlot();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
