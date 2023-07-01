#include <iostream>
#include <string>


int main()
{
    std::string nombre_estudiante;
    int cedula_estudiante;
    int notas_estudiante[5] = {};
    int promedio;
    int notas_estudiante_total = 0;
    int contador = 1;

    while (contador <= 35) {

        std::cout << "\tHola, Cual es tu nombre?\n" << std::endl;
        std::cin >> nombre_estudiante;

        std::cout << "\tCual es tu Cedula?\n" << std::endl;
        std::cin >> cedula_estudiante;

        std::cout << "\tEscribe tus notas\n" << std::endl;
        for (int i = 0; i <= 4; i++) {
            std::cin >> notas_estudiante[i];
        }

        std::cout << "\tTus notas son: \n" << std::endl;
        for (int i = 0; i <= 4; i++) {
            std::cout << notas_estudiante[i] << " ";
        }

        std::cout << "\n" << std::endl;

        for (int i = 0; i <= 4; i++) {
            notas_estudiante_total += notas_estudiante[i];
        }

        promedio = notas_estudiante_total / 5;

        std::cout << "\tEl promedio de tus notas es: \n" << promedio << std::endl;
        
        //vaciamos el arreglo con las notas
        for (int i = 0; i <= 4; i++) {
            notas_estudiante[i] = 0;
        }

        std::cout << "\n" << std::endl;
        notas_estudiante_total = 0;
        promedio = 0;
        contador++;
    }


    return 0;
}
