#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

#include <iostream>
#include <stdexcept>
#include <exception>



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

    if(ui->radioButton_4->isChecked()== false  && ui->radioButton_5->isChecked()== false ){
        QMessageBox Msgbox;
        Msgbox.setText("Morate izabrati menjac!");
        Msgbox.exec();
        return 0;
    }

    if(ui->radioButton_13->isChecked()== false  && ui->radioButton_17->isChecked()== false ){
        QMessageBox Msgbox;
        Msgbox.setText("Morate izabrati diferencijal!");
        Msgbox.exec();
        return 0;
    }

/*
    if(ui->lineEdit->text().toInt()<0 || ui->lineEdit->text().toInt()>9999 ){
        QMessageBox Msgbox;
        Msgbox.setText("Unesite korektnu vrednost za broj obrtaja motora (0<RPM<9999)!");
        Msgbox.exec();
        return 0;
    }

*/


    return 1;
}

void MainWindow::put_default()
{
    ui->lineEdit->setText("0");
}

