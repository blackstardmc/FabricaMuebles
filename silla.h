#ifndef SILLA_H
#define SILLA_H

#include "mueble.h"

class Silla : public Mueble
{
private:

    int cantidadPatas;
    QString tipoSilla;
    bool Paleta;

public:
    Silla(int cantidadPatas, const QString &tipoSilla, bool Paleta, int mes, int cantidadMaterial, const QString &tipo, const QString &lugar);

    int getCantidadPatas() const;
    void setCantidadPatas(int newCantidadPatas);
    QString getTipoSilla() const;
    void setTipoSilla(const QString &newTipoSilla);
    bool getPaleta() const;
    void setPaleta(bool newPaleta);

    // Mueble interface
public:
    float getPrecio();
};

#endif // SILLA_H
