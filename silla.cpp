#include "silla.h"



int Silla::getCantidadPatas() const
{
    return cantidadPatas;
}

void Silla::setCantidadPatas(int newCantidadPatas)
{
    cantidadPatas = newCantidadPatas;
}

QString Silla::getTipoSilla() const
{
    return tipoSilla;
}

void Silla::setTipoSilla(const QString &newTipoSilla)
{
    tipoSilla = newTipoSilla;
}

bool Silla::getPaleta() const
{
    return Paleta;
}

void Silla::setPaleta(bool newPaleta)
{
    Paleta = newPaleta;
}

float Silla::getPrecio()
{
    return 1.50*getCantidadMaterial()+getPrecioBase();
}

Silla::Silla(int cantidadPatas, const QString &tipoSilla, bool Paleta, int mes, int cantidadMaterial, const QString &tipo, const QString &lugar) : Mueble(mes, cantidadMaterial, tipo, lugar),
    cantidadPatas(cantidadPatas),
    tipoSilla(tipoSilla),
    Paleta(Paleta)
{
    setNombreMueble("Silla");
}
