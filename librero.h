#ifndef LIBRERO_H
#define LIBRERO_H

#include "mueble.h"

class Librero : public Mueble
{
private:
    int alto;
public:
    Librero(int alto, int mes, int cantidadMaterial, const QString &tipo, const QString &lugar);

    int getAlto() const;
    void setAlto(int newAlto);

    // Mueble interface
public:
    float getPrecio();
};

#endif // LIBRERO_H
