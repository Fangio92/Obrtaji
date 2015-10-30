#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include "diferencijal.h"
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
        int rpm=ui->lineEdit->text().toInt();
        Menjac *m;
        Diferencijal *d;

        if(ui->radioButton_4->isChecked()){
            m=new Menjac(4);
        }
        else if(ui->radioButton_5->isChecked()){
            m=new Menjac(5);
        }

        if(ui->radioButton_13->isChecked()){
            d=new Diferencijal(13);
        }
        else if(ui->radioButton_17->isChecked()){
            d=new Diferencijal(17);
        }


        Tocak *t=new Tocak(felna,sirina,visina);

        //s_brzina=  (  (s_rpm*60) / (odnos*s_diferencijal)   )  *(s_obim*0.00001) ;

        ui->textBrowser->clear();
        for (int i = 1; i <= m->get_gear(); ++i) {


            double brzina = (  (rpm*60)  /  (m->odnos_brzine(i) * d->get_ratio())  *  (t->obim_tocka()*0.00001));
           // std::cout<< m->odnos_brzine(i)<< " - " <<d->get_ratio()  <<std::endl;


            ui->textBrowser->append(QString::number(i)+". "+QString::number(brzina,3,2)+" km/h");

        }



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

