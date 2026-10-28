#include <iostream>

int main() {
    int puerto;
    std::cout << "Puerto solicitado: ";
    std::cin >> puerto;

    if (puerto >= 1000 && puerto <= 2000) {
        std::cout << "Puerto dentro del rango permitido\n";
    } else {
        std::cout << "Puerto fuera del rango permitido\n";
    }

    return 0;
}

// EL ERROR EN ESTE CODIGO ERA QUE EN EL IF SE USABA ||, ESTE OPERADOR HACE QUE SE CUMPLA UNA DE LAS DOS OPCIONES, NO LAS DOS OPCIONES A LA VEZ QUE ES LO QUE BUSCA ESTE CODIGO. 
// PARA SOLUCIONARLO HE CAMBIADO EL OPERADOR || POR &&, ESTE OBLIGA QUE SE CUMPLAN LAS DOS CONDICIONES A LA VEZ