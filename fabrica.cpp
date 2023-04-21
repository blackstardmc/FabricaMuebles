#include "fabrica.h"

Fabrica::Fabrica()
{
    muebles=new Mueble*[100];
}

float Fabrica::getPromedioMensual()
{
    return contador/12;
}

int Fabrica::mesasMes(int m)
{
    int c=0;
    for (int i = 0; i < contador; i++) {
        if(muebles[i]->getNombreMueble()=="Mesa" && muebles[i]->getMes()==m){
            c++;
        }
    }
    return c;
}

void Fabrica::insertar(Mueble *mueble)
{
    muebles[contador]=mueble;
    contador++;
}

Mueble *Fabrica::getMueble(int i)
{
    return muebles[i];
}

int Fabrica::mesMayorMesas()
{
    int mesMayor=1;
    int mayor=mesasMes(1);
    for (int i = 1; i <=12; i++) {
        if(mayor<mesasMes(i)){
            mayor=mesasMes(i);
            mesMayor=i;
        }
    }
    return mesMayor;
}

int Fabrica::cantidadProductosSemestre(QString a, bool f)
{//Verdadero primer Semestre , False 2do semestre
    int suma=0;
    if(f){
        for (int var = 0; var < contador; var++) {
            if(muebles[var]->getNombreMueble()==a && muebles[var]->getMes()<=6){
                suma++;
            }
        }
    }
    else{

        for (int var = 0; var < contador; var++) {
            if(muebles[var]->getNombreMueble()==a && muebles[var]->getMes()>6 && muebles[var]->getMes()<=12){
                suma++;
            }
        }
    }
    return suma;
}

int Fabrica::cantProductosTipo(QString a)
{
    int c=0;
    for (int i = 0; i < contador; i++) {
        if(muebles[i]->getNombreMueble()==a){
            c++;
        }
    }
    return c;
}

QString Fabrica::productoExcedioPMensual()
{
    int arr[5]{
      cantProductosTipo("Silla"),
      cantProductosTipo("Mesa"),
      cantProductosTipo("Pizarra"),
      cantProductosTipo("Librero"),
      cantProductosTipo("Buro"),
    };

    int p=-1;
    for (int i = 0; i < 5; i++) {
        if(arr[i]>getPromedioMensual()){
            p=i+1;
        }
    }
QString a;
    switch (p) {
    case 1:
        a= "Silla";
        break;
    case 2:
        a= "Mesa";
        break;
    case 3:
        a= "Pizarra";
        break;
    case 4:
        a= "Librero";
        break;
    case 5:
        a= "Buro";
        break;
    case -1:
        a= "No hay ninguno que supere el promedio";
        break;

    }
    return a;
}
