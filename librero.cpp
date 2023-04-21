#include "librero.h"

int Librero::getAlto() const
{
    return alto;
}

void Librero::setAlto(int newAlto)
{
    alto = newAlto;
}

float Librero::getPrecio()
{
    return alto*1.5+getPrecioBase();
}

Librero::Librero(int alto, int mes, int cantidadMaterial, const QString &tipo, const QString &lugar) : Mueble(mes, cantidadMaterial, tipo, lugar),
    alto(alto)
{
    setNombreMueble("Librero");
}
