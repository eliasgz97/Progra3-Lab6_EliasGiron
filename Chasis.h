#ifndef CHASIS_H
#define CHASIS_H
#include <string>
using std::string;
class Chasis
{
    private:
        string rueda;
        string transmision;
    public:
        string getRueda();
        string getTransmision();
        string toString();
        void setRueda(string);
        void setTransmision(string);
        Chasis();
        Chasis(string, string);
};
#endif