#include <iostream>
#include <string>
#include <ctime>
#include <thread>
#include <chrono>
#define TIEMPO_DE_ESPERA 3


int main(int argc, char *argv[])
{
    std::string nombre_cliente;
    int PIN_tarjeta;
    int saldo_inicial = 50000; 
    int saldo_resultado;
    int saldo_restante;
    int dinero_a_depositar;
    int dinero_a_retirar;
    int opcion;


    std::cout << "\tBienvenido al Banco Fermin Toro\n" << std::endl;
    std::cout << "\tPor favor Ingrese su numero de PIN\n" << std::endl;

    std::cin >> PIN_tarjeta;
 
    std::cout << "\t...Cargando\n" << std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(TIEMPO_DE_ESPERA));
    
    std::cout << "\tTiene un saldo de: " << saldo_inicial << std::endl;
    std::cout << "\tQue desea hacer?\n" << std::endl;
    std::cout << "\t1. Ingresar dinero en cuenta\n" << std::endl;
    std::cout << "\t2. Retirar dinero de la cuenta\n" << std::endl;
    std::cout << "\t3. Salir\n" << std::endl;
    std::cout << "\tOpcion: \n" << std::endl;
    std::cin >> opcion;

    switch (opcion) {
        case 1: std::cout << "\tCuanto dinero desea Ingresar en la cuenta?\n" << std::endl;
                std::cin >> dinero_a_depositar;
                saldo_resultado = saldo_inicial + dinero_a_depositar;
                std::this_thread::sleep_for(std::chrono::seconds(TIEMPO_DE_ESPERA));
                std::cout << "\tSaldo resultado es: " << saldo_resultado << std::endl;
                break;

        case 2: std::cout << "\tCuando dinero desea retirar de la cuenta?\n" << std::endl;
                std::cin >> dinero_a_retirar;

                if (dinero_a_retirar > 50000) {
                    saldo_restante = saldo_inicial - dinero_a_retirar;
                    std::this_thread::sleep_for(std::chrono::seconds(TIEMPO_DE_ESPERA));
                    std::cout << "\tSu saldo es igual a 0. Gracias por venir!\n" << std::endl;
                    break;
                }

                if (dinero_a_retirar == 0) {
                    std::cout << "\tPor favor ingrese un monto que no sea igual a 0\n" << std::endl;
                    std::this_thread::sleep_for(std::chrono::seconds(TIEMPO_DE_ESPERA));
                    break;
                }

                saldo_restante = saldo_inicial - dinero_a_retirar;
                std::this_thread::sleep_for(std::chrono::seconds(TIEMPO_DE_ESPERA));

                std::cout << "\tLe queda en su cuenta: " << saldo_restante << std::endl;
                return 0;


        case 3: std::cout << "\tGracias por venir!\n" << std::endl;
                break;
    }

    return 0;
}