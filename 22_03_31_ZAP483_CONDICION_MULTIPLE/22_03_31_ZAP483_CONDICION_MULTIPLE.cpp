// 22_03_31_ZAP483_CONDICION_MULTIPLE.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// FORTINO RUBEN ARIAS LORDMENDEZ
using namespace std;
#include <iostream>

int main()
{
    int dato1;
    int dato2;
    int resultado;
    int   opcion;
    std::cout << "que opcion quieres realizar \n0suma. \n1resta. \n2multiplicacion. \n3division";
    std::cout<<"Para escoger solo ingresa el numero de la opcion y presiona enter\n";
    std::cin >> opcion;

    //sintaxis de switch case.
    switch (opcion)
    {
        case  0:
            cout << "ingrese dos numeros" <<endl;
            cin >> dato1;
            cin >> dato2;
            resultado = dato1 + dato2;
            cout << "el resultado de la suma es:" << resultado << endl;
        break;
        case 1:
            cout << "ingrese dos numeros" << endl;
            cin >> dato1;
            cin >> dato2;
            resultado = dato1 - dato2;
            cout << "el resultado de la resta es:" << resultado << endl;
        break;
        case 2:
            cout << "ingrese dos numeros" << endl;
            cin >> dato1;
            cin >> dato2;
            resultado = dato1 * dato2;
            cout << "el resultado de la multiplicacion es:" << resultado << endl;
            break;
        case 3:
            cout << "ingrese dos numeros" << endl;
            cin >> dato1;
            cin >> dato2;
            resultado = dato1 / dato2;
            cout << "el resultado de la division es:" << resultado << endl;
            break;
        default:
            std::cout << "ingresaste algo que no tengo contemplado... \n";
    }



}
