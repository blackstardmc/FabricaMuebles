#ifndef BURO_H
#define BURO_H

#include "mueble.h"

class Buro : public Mueble
{
private:
    int cantidadGavetas;
public:
    Buro(int cantidadGavetas, int mes, int cantidadMaterial, const QString &tipo, const QString &lugar);

    int getCantidadGavetas() const;
    void setCantidadGavetas(int newCantidadGavetas);

    // Mueble interface
public:
    float getPrecio();
};

#endif // BURO_H
