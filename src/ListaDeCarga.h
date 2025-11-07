#ifndef LISTADECARGA_H
#define LISTADECARGA_H

#include <iostream>

/**
 * @struct NodoCarga
 * @brief Nodo de la lista doblemente enlazada para almacenar caracteres.
 */
struct NodoCarga {
    char dato;
    NodoCarga* ant;
    NodoCarga* sig;
    NodoCarga(char d) : dato(d), ant(nullptr), sig(nullptr) {}
};

/**
 * @class ListaDeCarga
 * @brief Lista doblemente enlazada para almacenar los caracteres decodificados.
 */
class ListaDeCarga {
    NodoCarga* cabeza;
    NodoCarga* cola;
public:
    ListaDeCarga();
    ~ListaDeCarga();
    void insertarAlFinal(char dato);
    void imprimirMensaje();
};

#endif
