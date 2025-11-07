#include "RotorDeMapeo.h"
#include <cctype>

RotorDeMapeo::RotorDeMapeo() {
    NodoRotor* prev = nullptr;
    for (char c = 'A'; c <= 'Z'; ++c) {
        NodoRotor* nuevo = new NodoRotor(c);
        if (!cabeza) cabeza = nuevo;
        if (prev) {
            prev->sig = nuevo;
            nuevo->ant = prev;
        }
        prev = nuevo;
    }
    prev->sig = cabeza;
    cabeza->ant = prev;
}

RotorDeMapeo::~RotorDeMapeo() {
    if (!cabeza) return;
    NodoRotor* actual = cabeza->sig;
    while (actual != cabeza) {
        NodoRotor* tmp = actual;
        actual = actual->sig;
        delete tmp;
    }
    delete cabeza;
}

void RotorDeMapeo::rotar(int n) {
    if (!cabeza) return;
    if (n > 0) {
        for (int i = 0; i < n; ++i) cabeza = cabeza->sig;
    } else {
        for (int i = 0; i < -n; ++i) cabeza = cabeza->ant;
    }
}

char RotorDeMapeo::getMapeo(char in) {
    if (!std::isalpha(in)) return in;
    in = std::toupper(in);
    NodoRotor* aux = cabeza;
    for (int i = 0; i < 26; ++i) {
        if (aux->letra == in) {
            return cabeza->letra;
        }
        aux = aux->sig;
    }
    return in;
}
