#include <iostream>
#include <string>
#include "Carro.h"
#include "Motor.h"
#include "Chasis.h"
#include "Pintura.h"
#include <vector>
using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;
Carro*** inicializar(Carro*** produccion)
{
    produccion = new Carro**[5];
    for (int i = 0; i < 5; i++)
    {
        produccion[i] = new Carro*[4];
    }
    return produccion;
}
void imprimirmatriz(Carro*** produccion)
{
    for(int i = 0; i < 5; i++){
            for(int j = 0; j < 4; j++){
                cout << "[" << produccion[i][j] -> toString2(j) << "]";
            }
            cout << endl;
    }

}
int main()
{
    char resp = 's', resp2 = 's';
    int opcion = 0, contador = 0, columnas = 0;
    string nombre_modelo, numero_modelo, tipo_motor, configuracion, rueda, transmision, color, acabado;
    Pintura pintura2;
    Carro ***produccion = NULL;
    produccion = inicializar(produccion);
    vector <Carro*> carros;
    while (resp == 's' || resp == 'S')
    {
        cout << "1. Agregar un Carro: \n"
                "2. Ver matriz de producción: \n"
                "3. Ver lineas de produccion: \n"
                "4. Ver listados de carros producidos: \n"
                "5. Avanzar ciclo de linea de produccion: \n"
                "Ingrese una opcion: ";
        cin >> opcion;
        switch (opcion)
        {
        case 1:
            if (contador < 5)
            {
                cout << "Ingrese el nombre del modelo: ";
                cin >> nombre_modelo;
                cout << "Ingrese el numero del modelo: ";
                cin >> numero_modelo;
                cout << "Ingrese el tipo de motor: ";
                cin >> tipo_motor;
                cout << "Ingrese configuracion del motor: ";
                cin >> configuracion;
                Motor motor(tipo_motor, configuracion);
                cout << "Ingrese el tipo de rueda: ";
                cin >> rueda;
                cout << "Ingrese el tipo de transmision: ";
                cin >> transmision;
                Chasis chasis(rueda, transmision);
                cout << "Ingrese el color del carro: ";
                cin >> color;
                cout << "Ingrese el tipo de acabado: ";
                cin >> acabado;
                Pintura pintura(color, acabado);
                produccion[contador][0]= new Carro(motor, chasis, pintura, nombre_modelo, numero_modelo);
                carros.push_back(new Carro(motor, chasis, pintura, nombre_modelo, numero_modelo));
                contador++;
            } else 
            {
                cout << "Ha sobrepasado el limite de producciones"<<endl;
            }
            break;
        case 2:
            imprimirmatriz(produccion);
            break;
        case 3:
            for (int i = 0; i < carros.size(); i++)
            {
                cout << carros[i] -> toString()+"\n";
            }
            
            break;
        case 4:
            break;
        case 5:
            for (int i = 0; i < 5; i++)
            {
                for(int j = 0; j <=4; j++)
                {
                    if(j!=4){
                        produccion[i][j] = produccion[i][j+1];
                        produccion[i][0] = new Carro(produccion[i][0]->getNombre_modelo(), produccion[i][0]->getNumero_modelo(), produccion[i][0] -> getMotor(), produccion[i][0]->getChasis(), produccion[i][0]->getPintura());
                    } else {
                        
                    }
                }
            }
            break;
        }
        cout << "Desea regresar[s/n]? " << endl;
        cin >> resp;
    }
}
