#include "buro.h"

int Buro::getCantidadGavetas() const
{
    return cantidadGavetas;
}

void Buro::setCantidadGavetas(int newCantidadGavetas)
{
    cantidadGavetas = newCantidadGavetas;
}

float Buro::getPrecio()
{
    return 2*cantidadGavetas+getPrecioBase();
}

Buro::Buro(int cantidadGavetas, int mes, int cantidadMaterial, const QString &tipo, const QString &lugar) : Mueble(mes, cantidadMaterial, tipo, lugar),
    cantidadGavetas(cantidadGavetas)
{
    setNombreMueble("Buro");
}
