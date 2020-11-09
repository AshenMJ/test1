#include "mainwindow.h"
#include "ui_mainwindow.h"

using namespace std;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    srand(time(NULL));
    int x=rand()%6;
    ui->comboBox->setCurrentIndex(x);

}

MainWindow::~MainWindow(){delete ui;}



