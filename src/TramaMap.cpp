#include "TramaMap.h"
#include "RotorDeMapeo.h"
#include <iostream>

TramaMap::TramaMap(int n) : desplazamiento(n) {}

void TramaMap::procesar(ListaDeCarga*, RotorDeMapeo* rotor) {
    rotor->rotar(desplazamiento);
    std::cout << "Trama [M," << desplazamiento << "] -> rotor rotado " << desplazamiento << "\n";
}
