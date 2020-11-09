#include "mainwindow.h"
#include "ui_mainwindow.h"

using namespace std;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
 ui->setupUi(this);
 {
 srand(time(NULL));

        int los[6]={};

                bool ok;
                int il=0;
                do
                {
                    int liczba = rand()%6;
                    ok=true;

                    for (int i = 0; i < il; i++)
                    {
                        if (liczba == los[i]) ok = false;
                    }

                    if (ok)
                    {
                        los[il] = liczba;
                        switch(liczba){
                        case 0:
                            ui->comboBox->addItem("dodawanie");
                            break;
                        case 1:
                            ui->comboBox->addItem("odejmowanie");
                            break;
                        case 2:
                            ui->comboBox->addItem("mnozenie");
                            break;
                        case 3:
                            ui->comboBox->addItem("dzielenie");
                            break;
                        case 4:
                            ui->comboBox->addItem("potegowanie");
                            break;
                        case 5:
                            ui->comboBox->addItem("pierwiastkowanie");
                            break;
                        }
                        il++;

                    }
                } while (il!=6);
    }


}

MainWindow::~MainWindow(){delete ui;}



