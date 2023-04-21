#include "mesa.h"

int Mesa::getLargo() const
{
    return largo;
}

void Mesa::setLargo(int newLargo)
{
    largo = newLargo;
}

int Mesa::getAncho() const
{
    return ancho;
}

void Mesa::setAncho(int newAncho)
{
    ancho = newAncho;
}

int Mesa::getAlto() const
{
    return alto;
}

void Mesa::setAlto(int newAlto)
{
    alto = newAlto;
}

int Mesa::getCantidadPatas() const
{
    return cantidadPatas;
}

void Mesa::setCantidadPatas(int newCantidadPatas)
{
    cantidadPatas = newCantidadPatas;
}

float Mesa::getPrecio()
{
    return largo*ancho*alto*1.25+getPrecioBase();
}

Mesa::Mesa(int largo, int ancho, int alto, int cantidadPatas, int mes, int cantidadMaterial, const QString &tipo, const QString &lugar) : Mueble(mes, cantidadMaterial, tipo, lugar),
    largo(largo),
    ancho(ancho),
    alto(alto),
    cantidadPatas(cantidadPatas)
{
    setNombreMueble("Mesa");
}
