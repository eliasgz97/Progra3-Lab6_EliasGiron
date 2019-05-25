#include "Motor.h"
#include "Chasis.h"
#include "Pintura.h"
#include <string>
#ifndef CARRO_H
#define CARRO_H
using std::string;
class Carro
{
    private:
        Motor motor;
        Chasis chasis;
        Pintura pintura;
        string nombre_modelo;
        string numero_modelo;
    public:
        Motor getMotor();
        Chasis getChasis();
        Pintura getPintura();
        string getNombre_modelo();
        string getNumero_modelo();
        void setMotor(Motor);
        void setChasis(Chasis);
        void setPintura(Pintura);
        void setNombre_modelo(string);
        void setNumero_modelo(string);
        string toString();
        string toString2(int);
        Carro();
        Carro(Motor, Chasis, Pintura, string, string);
};
#endif
