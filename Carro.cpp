#include "Carro.h"
#include "Motor.h"
#include "Chasis.h"
#include "Pintura.h"
Motor Carro::getMotor()
{
    return motor;
}
Pintura Carro::getPintura()
{
    return pintura;
}
string Carro::getNombre_modelo()
{
    return nombre_modelo;
}
string Carro::getNumero_modelo()
{
    return numero_modelo;
}
void Carro::setMotor(Motor motor)
{
    this -> motor = motor;
}
void Carro::setChasis(Chasis chasis)
{
    this -> chasis = chasis;
}
void Carro::setPintura(Pintura pintura)
{
    this -> pintura = pintura;
}
void Carro::setNombre_modelo(string nombre_modelo)
{
    this -> nombre_modelo = nombre_modelo;
}
void Carro::setNumero_modelo(string numero_modelo)
{
    this -> numero_modelo = numero_modelo;
}
string Carro:: toString()
{
    return motor.toString() + chasis.toString() + pintura.toString() + nombre_modelo + numero_modelo;
}
string Carro:: toString2(int num)
{
    if(num!=0){
        return "C";
    } else {
        return "P";
    }
}
Carro::Carro()
{
}
Carro::Carro(Motor motor, Chasis chasis, Pintura pintura, string nombre_modelo, string numero_modelo)
{
    this -> motor = motor;
    this -> chasis = chasis;
    this -> pintura = pintura;
    this -> nombre_modelo = nombre_modelo;
    this -> numero_modelo = numero_modelo;
}