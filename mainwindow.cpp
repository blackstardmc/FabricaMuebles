#include "buro.h"
#include "librero.h"
#include "mainwindow.h"
#include "mesa.h"
#include "pizarra.h"
#include "silla.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->comboBox->activated(0);
    fabrica.insertar(new Mesa(2,3,7,4,1,23,"Madera","Aula"));
    fabrica.insertar(new Mesa(2,3,7,4,1,23,"Madera","Aula"));
    fabrica.insertar(new Mesa(2,3,7,4,2,23,"Madera","Aula"));
    fabrica.insertar(new Mesa(2,3,7,4,3,23,"Madera","Aula"));
    fabrica.insertar(new Mesa(2,3,7,4,4,23,"Madera","Aula"));
    fabrica.insertar(new Mesa(2,3,7,4,1,23,"Madera","Aula"));
    fabrica.insertar(new Mesa(2,3,7,4,1,23,"Madera","Aula"));
    fabrica.insertar(new Mesa(2,3,7,4,7,23,"Madera","Aula"));
    fabrica.insertar(new Mesa(2,3,7,4,8,23,"Madera","Aula"));
    fabrica.insertar(new Mesa(2,3,7,4,1,23,"Madera","Aula"));
    fabrica.insertar(new Mesa(2,3,7,4,1,23,"Madera","Aula"));
    fabrica.insertar(new Mesa(2,3,7,4,1,23,"Madera","Aula"));
    fabrica.insertar(new Mesa(2,3,7,4,2,23,"Madera","Aula"));
    fabrica.insertar(new Mesa(2,3,7,4,3,23,"Madera","Aula"));
    fabrica.insertar(new Mesa(2,3,7,4,4,23,"Madera","Aula"));
    fabrica.insertar(new Mesa(2,3,7,4,1,23,"Madera","Aula"));
    fabrica.insertar(new Mesa(2,3,7,4,1,23,"Madera","Aula"));
    fabrica.insertar(new Mesa(2,3,7,4,7,23,"Madera","Aula"));
    fabrica.insertar(new Mesa(2,3,7,4,8,23,"Madera","Aula"));
    fabrica.insertar(new Mesa(2,3,7,4,1,23,"Madera","Aula"));
    fabrica.insertar(new Mesa(2,3,7,4,1,23,"Madera","Aula"));
    fabrica.insertar(new Mesa(2,3,7,4,1,23,"Madera","Aula"));
    fabrica.insertar(new Mesa(2,3,7,4,2,23,"Madera","Aula"));
    fabrica.insertar(new Mesa(2,3,7,4,3,23,"Madera","Aula"));
    fabrica.insertar(new Mesa(2,3,7,4,4,23,"Madera","Aula"));
    fabrica.insertar(new Mesa(2,3,7,4,1,23,"Madera","Aula"));
    fabrica.insertar(new Mesa(2,3,7,4,1,23,"Madera","Aula"));
    fabrica.insertar(new Mesa(2,3,7,4,7,23,"Madera","Aula"));
    fabrica.insertar(new Mesa(2,3,7,4,8,23,"Madera","Aula"));
    fabrica.insertar(new Mesa(2,3,7,4,1,23,"Madera","Aula"));
    fabrica.insertar(new Mesa(2,3,7,4,1,23,"Madera","Aula"));
    fabrica.insertar(new Mesa(2,3,7,4,1,23,"Madera","Aula"));
    fabrica.insertar(new Mesa(2,3,7,4,2,23,"Madera","Aula"));
    fabrica.insertar(new Mesa(2,3,7,4,3,23,"Madera","Aula"));
    fabrica.insertar(new Mesa(2,3,7,4,4,23,"Madera","Aula"));
    fabrica.insertar(new Mesa(2,3,7,4,1,23,"Madera","Aula"));
    fabrica.insertar(new Mesa(2,3,7,4,1,23,"Madera","Aula"));
    fabrica.insertar(new Mesa(2,3,7,4,7,23,"Madera","Aula"));
    fabrica.insertar(new Mesa(2,3,7,4,8,23,"Madera","Aula"));
    fabrica.insertar(new Mesa(2,3,7,4,1,23,"Madera","Aula"));




}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_comboBox_activated(int index)
{
    switch (index) {
    case 0:
        ui->paletaCheck->show();
        ui->altoL->hide();
        ui->altoLine->hide();
        ui->anchoLine->hide();
        ui->anchoL->hide();
        ui->cantidadPatasLine->show();
        ui->cantidadPatasL->show();
        ui->largoL->hide();
        ui->largoLine->hide();
        ui->tipoSillaL->setText("Tipo de silla");
        ui->tipoSillaLine->show();
        ui->tipoSillaL->show();


        break;
    case 1:
        ui->paletaCheck->hide();
        ui->altoL->show();
        ui->altoLine->show();
        ui->anchoLine->show();
        ui->anchoL->show();
        ui->cantidadPatasLine->show();
        ui->cantidadPatasL->show();
        ui->largoL->show();
        ui->largoLine->show();

        ui->tipoSillaLine->hide();
        ui->tipoSillaL->hide();
        break;

    case 2:
        ui->paletaCheck->hide();
        ui->altoL->hide();
        ui->altoLine->hide();
        ui->anchoLine->show();
        ui->anchoL->show();
        ui->cantidadPatasLine->hide();
        ui->cantidadPatasL->hide();
        ui->largoL->show();
        ui->largoLine->show();
        ui->tipoSillaLine->hide();
        ui->tipoSillaL->hide();

        break;

    case 3:

        ui->paletaCheck->hide();
        ui->altoL->show();
        ui->altoLine->show();
        ui->anchoLine->hide();
        ui->anchoL->hide();
        ui->cantidadPatasLine->hide();
        ui->cantidadPatasL->hide();
        ui->largoL->hide();
        ui->largoLine->hide();
        ui->tipoSillaLine->hide();
        ui->tipoSillaL->hide();

        break;

    case 4:

        ui->paletaCheck->hide();
        ui->altoL->hide();
        ui->altoLine->hide();
        ui->anchoLine->hide();
        ui->anchoL->hide();
        ui->cantidadPatasLine->hide();
        ui->cantidadPatasL->hide();
        ui->largoL->hide();
        ui->largoLine->hide();
        ui->tipoSillaLine->show();
        ui->tipoSillaL->show();
        ui->tipoSillaL->setText("Cantidad Gavetas");

        break;

    }
}


void MainWindow::on_pushButton_2_clicked()
{
    QString b;
    ui->labelPromedioM->setText(b.setNum(fabrica.getPromedioMensual()));
}


void MainWindow::on_pushButton_3_clicked()
{
    QString b;
    ui->mesLabel->setText(b.setNum(fabrica.mesMayorMesas()));
}



void MainWindow::on_pushButton_4_clicked()
{
    ui->excedioPromedio->setText(fabrica.productoExcedioPMensual());
}


void MainWindow::on_pushButton_5_clicked()
{
    QString a="";
    QString b;
    a+="Mesa "+b.setNum(fabrica.cantidadProductosSemestre("Mesa",ui->semestreCheck->isChecked()))+"\n";
    a+="Silla "+b.setNum(fabrica.cantidadProductosSemestre("Silla",ui->semestreCheck->isChecked()))+"\n";
    a+="Pizarra "+b.setNum(fabrica.cantidadProductosSemestre("Pizarra",ui->semestreCheck->isChecked()))+"\n";
    a+="Buro "+b.setNum(fabrica.cantidadProductosSemestre("Buro",ui->semestreCheck->isChecked()))+"\n";
    a+="Librero "+b.setNum(fabrica.cantidadProductosSemestre("Librero",ui->semestreCheck->isChecked()));

    ui->listado->setText(a);
}


void MainWindow::on_pushButton_clicked()
{
    switch (ui->comboBox->currentIndex()) {
    case 0:
        fabrica.insertar(new Silla(ui->cantidadPatasLine->text().toInt(),
                                   ui->tipoSillaLine->text(),
                                   ui->paletaCheck->isChecked(),
                                   ui->comboMes->currentIndex(),
                                   ui->cantidadMaterialLine->text().toInt(),
                                   ui->comboMaterial->currentText(),
                                   ui->comboLugar->currentText()
                                  ));
        break;
    case 1:
        fabrica.insertar(new Mesa(ui->largoLine->text().toInt(),
                                  ui->anchoLine->text().toInt(),
                                  ui->altoLine->text().toInt(),
                                  ui->cantidadPatasLine->text().toInt(),
                                   ui->comboMes->currentIndex(),
                                   ui->cantidadMaterialLine->text().toInt(),
                                   ui->comboMaterial->currentText(),
                                   ui->comboLugar->currentText()
                                  ));
        break;
    case 2:
        fabrica.insertar(new Pizarra(ui->largoLine->text().toInt(),
                                  ui->anchoLine->text().toInt(),
                                   ui->comboMes->currentIndex(),
                                   ui->cantidadMaterialLine->text().toInt(),
                                   ui->comboMaterial->currentText(),
                                   ui->comboLugar->currentText()
                                  ));
        break;

    case 3:
        fabrica.insertar(new Librero(ui->altoLine->text().toInt(),
                                    ui->comboMes->currentIndex(),
                                   ui->cantidadMaterialLine->text().toInt(),
                                   ui->comboMaterial->currentText(),
                                   ui->comboLugar->currentText()
                                  ));
        break;
    case 4:
        fabrica.insertar(new Buro(ui->tipoSillaLine->text().toInt(),
                                    ui->comboMes->currentIndex(),
                                   ui->cantidadMaterialLine->text().toInt(),
                                   ui->comboMaterial->currentText(),
                                   ui->comboLugar->currentText()
                                  ));
        break;



    }
}

