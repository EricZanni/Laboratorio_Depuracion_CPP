#include <iostream>

int main() {
    const int PIN_CORRECTO = 2468;
    int pinIngresado;

    std::cout << "Introduce el PIN: ";
    std::cin >> pinIngresado;

    if (pinIngresado == PIN_CORRECTO) {
        std::cout << "Acceso permitido\n";
    }
    else {
        std::cout << "Acceso denegado\n";
    }

    return 0;
}

// EL ERROR EN ESTE CODIGO ERA QUE AL HACER EL if USABA = PARA INDICAR QUE pinIngresado ERA IGUAL A PIN_CORRECTO, ES SIMBOLO SE USA PARA DEFINIR UNA VARIABLE,  EL QUE SE HA DE USAR EN ESTE CASO ES ==