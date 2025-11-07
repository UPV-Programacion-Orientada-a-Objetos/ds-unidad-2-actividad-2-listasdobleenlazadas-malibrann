#include "TramaLoad.h"
#include "ListaDeCarga.h"
#include "RotorDeMapeo.h"
#include <iostream>

TramaLoad::TramaLoad(char c) : dato(c) {}

void TramaLoad::procesar(ListaDeCarga* carga, RotorDeMapeo* rotor) {
    char decodificado = rotor->getMapeo(dato);
    carga->insertarAlFinal(decodificado);
    std::cout << "Trama [L," << dato << "] -> decodificado como '" << decodificado << "'\n";
}
