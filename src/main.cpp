#include "TramaBase.h"
#include "TramaLoad.h"
#include "TramaMap.h"
#include "ListaDeCarga.h"
#include "RotorDeMapeo.h"
#include <iostream>
#include <cstring>
#include <cstdlib>

int main() {
    std::cout << "Iniciando Decodificador PRT-7 (simulacion de flujo serial)...\n";

    ListaDeCarga lista;
    RotorDeMapeo rotor;

    const char* entradas[] = {
        "L,H","L,O","L,L","M,2","L,A","L, ","L,W","M,-2","L,O","L,R","L,L","L,D"
    };
    const int total = sizeof(entradas)/sizeof(entradas[0]);

    for (int i = 0; i < total; ++i) {
        char buffer[10];
        std::strcpy(buffer, entradas[i]);
        char* tipo = std::strtok(buffer, ",");
        char* valor = std::strtok(nullptr, ",");

        TramaBase* trama = nullptr;

        if (tipo && valor) {
            if (tipo[0] == 'L') {
                trama = new TramaLoad(valor[0]);
            } else if (tipo[0] == 'M') {
                int n = std::atoi(valor);
                trama = new TramaMap(n);
            }
        }

        if (trama) {
            trama->procesar(&lista, &rotor);
            delete trama;
        }
    }

    lista.imprimirMensaje();
    std::cout << "\nSistema finalizado. Liberando memoria...\n";
    return 0;
}
