#ifndef MOTOR_H
#define MOTOR_H
#include <string>
using std::string;
class Motor
{
    private:
        string electrico;
        string configuracion;
    public:
            string getConfiguracion();
            string Getelectrico();
            void setConfiguracion(string);
            void setElectrico(string);
            Motor();
            Motor(string, string);
            string toString();   
};
#endif