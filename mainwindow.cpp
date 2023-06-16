#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    lengthLabel = new QLabel(this);
    lengthLabel->setFont(QFont("Times New Roman",16,QFont::Bold));
    lengthLabel->setGeometry(0, 0, 200, 30);

    widthLabel = new QLabel(this);
    widthLabel->setFont(QFont("Times New Roman",16,QFont::Bold));
    widthLabel->setGeometry(0, 50, 200, 30);

    lengthLabel->setText("Length: " + QString::number(road.getLength()));
    widthLabel->setText("Width: " + QString::number(road.getWidth()));
}

MainWindow::~MainWindow()
{
}
