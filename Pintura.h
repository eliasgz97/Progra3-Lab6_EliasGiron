#ifndef PINTURA_H
#define PINTURA_H
#include <string>
using std::string;
class Pintura
{
    private: 
        string color;
        string acabado;
    public: 
        string getColor();
        string getAcabado();
        string toString();
        void setColor(string);
        void setAcabado(string);
        Pintura();
        Pintura(string, string);
};
#endif