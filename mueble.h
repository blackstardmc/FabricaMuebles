#ifndef MUEBLE_H
#define MUEBLE_H

#include <QString>



class Mueble
{
private:

    int mes,cantidadMaterial;
    QString tipo,lugar,nombreMueble;

public:
    Mueble(int mes, int cantidadMaterial, const QString &tipo, const QString &lugar);
    virtual float getPrecio()=0;
    int getPrecioBase();

    int getMes() const;
    void setMes(int newMes);
    int getCantidadMaterial() const;
    void setCantidadMaterial(int newCantidadMaterial);
    QString getTipo() const;
    void setTipo(const QString &newTipo);
    QString getLugar() const;
    void setLugar(const QString &newLugar);
    QString getNombreMueble() const;
    void setNombreMueble(const QString &newNombreMueble);
};

#endif // MUEBLE_H
