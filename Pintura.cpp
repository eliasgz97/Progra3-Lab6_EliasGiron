#include "Pintura.h"
string Pintura:: getColor()
{
    return color;
}
string Pintura:: getAcabado()
{
    return acabado;
}
void Pintura:: setColor(string color)
{
    this -> color = color;
}
void Pintura:: setAcabado(string acabado)
{
    this -> acabado = acabado;
}
string Pintura:: toString()
{
    return color + acabado;
}
Pintura:: Pintura()
{
}
Pintura:: Pintura(string color, string acabado)
{
    this -> color = color;
    this -> acabado = acabado;
}