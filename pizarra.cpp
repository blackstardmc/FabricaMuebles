#include "pizarra.h"



int Pizarra::getLargo() const
{
    return largo;
}

void Pizarra::setLargo(int newLargo)
{
    largo = newLargo;
}

int Pizarra::getAncho() const
{
    return ancho;
}

void Pizarra::setAncho(int newAncho)
{
    ancho = newAncho;
}

float Pizarra::getPrecio()
{
    return ancho*largo*1.75 +getPrecioBase();
}

Pizarra::Pizarra(int largo, int ancho, int mes, int cantidadMaterial, const QString &tipo, const QString &lugar) : Mueble(mes, cantidadMaterial, tipo, lugar),
    largo(largo),
    ancho(ancho)
{
    setNombreMueble("Pizarra");
}
