#include "mainwindow.h"
#include "ui_mainwindow.h"



MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    put_default();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    close();
}

void MainWindow::on_pushButton_2_clicked()
{
    if (check()){
        int felna=ui->listFelna->currentItem()->text().toInt();
        int sirina=ui->listSirina->currentItem()->text().toInt();
        int visina=ui->listVisina->currentItem()->text().toInt();
        Menjac *m;

        if(ui->radioButton_4->isChecked()){
             m=new Menjac(4);
        }
        else if(ui->radioButton_5->isChecked()){
             m=new Menjac(5);
        }

        Tocak *t=new Tocak(felna,sirina,visina);




    }

}

int MainWindow::check()
{
    return 1;
}

void MainWindow::put_default()
{
    ui->radioButton_5->setChecked(true);
    ui->lineEdit->setText("3000");
    ui->radioButton_17->setChecked(true);
    ui->listSirina->item(1)->setSelected(true);
    ui->listVisina->item(8)->setSelected(true);
}

