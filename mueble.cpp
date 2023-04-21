#include "mueble.h"


int Mueble::getMes() const
{
    return mes;
}

void Mueble::setMes(int newMes)
{
    mes = newMes;
}

int Mueble::getCantidadMaterial() const
{
    return cantidadMaterial;
}

void Mueble::setCantidadMaterial(int newCantidadMaterial)
{
    cantidadMaterial = newCantidadMaterial;
}

QString Mueble::getTipo() const
{
    return tipo;
}

void Mueble::setTipo(const QString &newTipo)
{
    tipo = newTipo;
}

QString Mueble::getLugar() const
{
    return lugar;
}

void Mueble::setLugar(const QString &newLugar)
{
    lugar = newLugar;
}

QString Mueble::getNombreMueble() const
{
    return nombreMueble;
}

void Mueble::setNombreMueble(const QString &newNombreMueble)
{
    nombreMueble = newNombreMueble;
}

Mueble::Mueble(int mes, int cantidadMaterial, const QString &tipo, const QString &lugar) : mes(mes),
    cantidadMaterial(cantidadMaterial),
    tipo(tipo),
    lugar(lugar)
{}

int Mueble::getPrecioBase()
{
    if(lugar=="Departamento"){
        return 3;
    }
    else{
        return 2;
    }
}
