#include <iostream>
#include <string>
#include <ctime>
#include <thread>
#include <chrono>
#define TIEMPO_DE_ESPERA 4


int main(int argc, char *argv[])
{
    std::string nombre_cliente;
    int PIN_tarjeta;
    int contador = 0;
    int saldo_inicial = 50000; 
    int saldo_resultado;
    int saldo_restante;
    int dinero_a_depositar;
    int dinero_a_retirar;
    int opcion;


    std::cout << "\tBienvenido al Banco Fermin Toro\n" << std::endl;
    std::cout << "\tPor favor Ingrese su numero de PIN. No puedo ser mayor y menor que 4\n" << std::endl;

    //Ciclo While para determinar si el usuario ingresó un numero mayor o menor que 4
    //Si es igual a 4, el bucle se cierra y continua el menu del Cajero Automatico
    while (std::cin >> PIN_tarjeta) {
        contador += 1;


        if (PIN_tarjeta > 4) {
            std::cout << "\tError en el PIN. Por favor vuelvelo a intentar\n" << std::endl;
            break;
            return 0;
        }

        if (PIN_tarjeta < 4) {
            std::cout << "\tError en el PIN. Por favor vuelvelo a intentar\n" << std::endl;
            break;
            return 0;
        }

    }


    /*  
    if (PIN_tarjeta > sizeof(6)) {
        std::cout << "\tError en el PIN. Por favor vuelvelo a intentar\n" << std::endl;
        return 0;

    } else if (PIN_tarjeta < sizeof(4)) {
        std::cout << "\tError en el PIN. Por favor vuelvelo a intentar\n" << std::endl;
        return 0;

    } else {
        std::cout << "\tPIN correcto\n" << std::endl;
    }*/

    std::cout << "\t...Cargando\n" << std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(TIEMPO_DE_ESPERA));
    

    return 0;
}