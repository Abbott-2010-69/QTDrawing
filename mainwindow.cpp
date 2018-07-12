#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::paintEvent(QPaintEvent *e)
{
    QPainter painter(this);// this creates a handle to the Qpainter class must include QtCore and QtGui for this to work

    painter.drawLine(200,200,100,100); // draw a line from initial x,y point to another x,y point use the absolute co-ordinate system
}
