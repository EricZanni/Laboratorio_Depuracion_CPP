#include <iostream>

int main() {
    int alertas = 3;
    std::cout << "Alertas registradas: " << alertas << '\n';

    if (alertas >= 3) {
        std::cout << "Estado: ATENCION\n";
    }

    return 0;
}

// EN LA LINEA NUMERO 5 Y LA 11 NO ESTBAN PUESTOS LOS ;