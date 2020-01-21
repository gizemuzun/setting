#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QSettings>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //Load
    QSettings settings ("settings.ini",QSettings::IniFormat);
    ui->spinBox->setValue(settings.value("MainWindow/value").toInt());

    qDebug() << "load";
}

MainWindow::~MainWindow()
{

        //Save
        QSettings settings ("settings.ini", QSettings::IniFormat);
        settings.beginGroup("MainWindow");
        settings.setValue("value", ui->spinBox->value());
        settings.endGroup();

        qDebug() << "Saved";
        //qDebug() << "save geldi";
    delete ui;
}



/*
void MainWindow::SaveSettings()
{

}

void MainWindow::LoadSettings()
{

}*/
