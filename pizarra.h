#ifndef PIZARRA_H
#define PIZARRA_H

#include "mueble.h"

class Pizarra : public Mueble
{
private:
    int largo,ancho;
public:
    Pizarra(int largo, int ancho, int mes, int cantidadMaterial, const QString &tipo, const QString &lugar);

    int getLargo() const;
    void setLargo(int newLargo);
    int getAncho() const;
    void setAncho(int newAncho);

    // Mueble interface
public:
    float getPrecio();
};

#endif // PIZARRA_H
