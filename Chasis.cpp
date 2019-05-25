#include "Chasis.h"
string Chasis::getRueda()
{
    return rueda;
}
string Chasis::getTransmision()
{
    return transmision;
}
void Chasis::setRueda(string rueda)
{
    this -> rueda = rueda;
}
void Chasis::setTransmision(string transmision)
{
    this -> transmision = transmision;
}
string Chasis:: toString()
{
    return rueda + transmision;
}
Chasis::Chasis()
{
}
Chasis::Chasis(string rueda, string transmision)
{
    this -> rueda = rueda;
    this -> transmision = transmision;
}