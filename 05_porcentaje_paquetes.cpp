#include <iostream>

int main() {
    int total, sospechosos;
    std::cout << "Introduce total de paquetes y paquetes sospechosos: ";
    std::cin >> total >> sospechosos;

    if (total <= 0) {
        std::cout << "Error: El total de paquetes debe ser mayor que 0.\n";
        return 1;
    }

    double porcentaje = (double)sospechosos / total * 100;
    std::cout << "Porcentaje sospechoso: " << porcentaje << "%\n";

    if (porcentaje >= 20) {
        std::cout << "ALERTA: trafico sospechoso\n";
    }
    else {
        std::cout << "Trafico normal\n";
    }

    return 0;
}

// EN ESTE CODIGO HABIAN DOS PROBLEMAS: EL MAS IMPORTANTE ERA EN LA LINEA 13 YA QUE NINGUNA DE LAS VARIABLES ESTABA EN FORMATO double, ESTABAN EN INT, LO QUE HACIA QUE LA SOLUCION DADA ERA INCORRECTA
// EL SEGUNDO ERROR NO ES TAN IMPORTANTE PERO ASEGURA DE QUE EL PROGRAMA PUEDA SEGUIR FUNCIONADO. EN EL CASO QUE EL USUARIO PUSIERA QUE total = 0, ESO HARIA QUE NO SE PUDIERA HACER LA DIVISION, POR LO TANTO HE PUESTO UN FRAGMENTO DE CODIGO QUE ALERTA QUE NO SE PUEDE PONER total=0