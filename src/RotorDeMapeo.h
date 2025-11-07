#ifndef ROTORDEMAPEO_H
#define ROTORDEMAPEO_H

/**
 * @struct NodoRotor
 * @brief Nodo doblemente enlazado del rotor circular (A-Z).
 */
struct NodoRotor {
    char letra;
    NodoRotor* ant;
    NodoRotor* sig;
    NodoRotor(char l) : letra(l), ant(nullptr), sig(nullptr) {}
};

/**
 * @class RotorDeMapeo
 * @brief Lista circular doblemente enlazada que rota el alfabeto.
 */
class RotorDeMapeo {
    NodoRotor* cabeza;
public:
    RotorDeMapeo();
    ~RotorDeMapeo();
    void rotar(int n);
    char getMapeo(char in);
};

#endif
