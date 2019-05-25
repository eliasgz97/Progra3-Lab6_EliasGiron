#include "Motor.h"
string Motor::getConfiguracion()
{
    return configuracion;
}
string Motor::Getelectrico()
{
    return electrico;
}
void Motor::setConfiguracion(string configuracion)
{
    this -> configuracion = configuracion;
}
void Motor::setElectrico(string electrico)
{
    this -> electrico = electrico;
}
string Motor:: toString()
{
    return configuracion + electrico;
}
Motor::Motor()
{
}
Motor::Motor(string configuracion, string electrico)
{
    this -> electrico = electrico;
    this -> configuracion = configuracion;
}
