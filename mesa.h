#ifndef MESA_H
#define MESA_H

#include "mueble.h"

class Mesa : public Mueble
{
private:
    int largo,ancho,alto,cantidadPatas;
public:
    Mesa(int largo, int ancho, int alto, int cantidadPatas, int mes, int cantidadMaterial, const QString &tipo, const QString &lugar);

    int getLargo() const;
    void setLargo(int newLargo);
    int getAncho() const;
    void setAncho(int newAncho);
    int getAlto() const;
    void setAlto(int newAlto);
    int getCantidadPatas() const;
    void setCantidadPatas(int newCantidadPatas);

    // Mueble interface
public:
    float getPrecio();
};

#endif // MESA_H
