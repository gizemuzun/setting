#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtCore>
#include <QDebug>
#include <QSettings>

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


  //  void on_pushButtonSave_clicked();

    //void on_pushButtonLoad_clicked();


private:
    Ui::MainWindow *ui;
    QSettings *setting;

   // void SaveSettings();
   // void LoadSettings();
};

#endif // MAINWINDOW_H
