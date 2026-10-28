#include <iostream>

int main() {
    int rachaActual = 0;
    int rachaMaxima = 0;

    std::cout << "Introduce 6 eventos: 1 = intento fallido, 0 = correcto\n";
    for (int evento = 1; evento <= 6; evento++) {
        int fallo;
        std::cout << "Evento " << evento << ": ";
        std::cin >> fallo;

        if (fallo == 1) {
            rachaActual++;
        } else {
            rachaActual = 0;
        }

        if (rachaActual > rachaMaxima) {
            rachaMaxima = rachaActual;
        }
    }

    std::cout << "Racha maxima: " << rachaMaxima << '\n';
    if (rachaMaxima >= 3) {
        std::cout << "ALERTA: 3 o mas fallos consecutivos\n";
    } else {
        std::cout << "Sin alerta\n";
    }

    return 0;
}

// EN ESTE CODIGO HABIAN DOS ERRORES: EL PRIMERO SE ENCONTRABA EN LA LINEA 13, EN ESA LINEA PONIA QUE DESPUES DE if (fallo == 1) --> rachaActual = 0; Y LUEGO rachaActual++, ESTO HACIA QUE CADA VEZ ENTRABA UN FALLO LA rachaActual SE PONIA EN 0. ESTO HACIA QUE rachaActual NUNCA PASARA DE 1.
// EL SEGUNDO FALLO SE ENCONTRABA EN LA LINEA 25, EL PROBLEMA ERA QUE LA CONDICION QUE PEDIA ERA QUE SI LA ALERTA ERAN 3 O MAS FALLOS, Y EN EL if PONIA SOLAMENTE QUE if (rachaMaxima > 3), ESTO HACE QUE NO CUENTE EL 3, POR LO TANTO SE HA DE PONER if (rachaMaxima >= 3) PARA DECIR QUE HA DE SER IGUAL O MAYOR A 3.