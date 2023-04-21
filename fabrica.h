#ifndef FABRICA_H
#define FABRICA_H

#include "mueble.h"



class Fabrica
{
private:
    Mueble **muebles;
    int contador=0;
public:
    Fabrica();
    float getPromedioMensual();
    int mesasMes(int);
    void insertar(Mueble*);
    Mueble* getMueble(int);
    int mesMayorMesas();
    int cantidadProductosSemestre(QString,bool);
    int cantProductosTipo(QString);
    QString productoExcedioPMensual();
    /*
     *
     * promedioProduccion mensual
mes de mas mesas
que prodducto excedio el promediomensual
listado de productos en un semestre
     */
};

#endif // FABRICA_H
