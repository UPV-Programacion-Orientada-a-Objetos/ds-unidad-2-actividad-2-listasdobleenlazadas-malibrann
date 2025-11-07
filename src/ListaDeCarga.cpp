#include "ListaDeCarga.h"

ListaDeCarga::ListaDeCarga() : cabeza(nullptr), cola(nullptr) {}

ListaDeCarga::~ListaDeCarga() {
    NodoCarga* aux = cabeza;
    while (aux) {
        NodoCarga* tmp = aux;
        aux = aux->sig;
        delete tmp;
    }
}

void ListaDeCarga::insertarAlFinal(char dato) {
    NodoCarga* nuevo = new NodoCarga(dato);
    if (!cabeza) {
        cabeza = cola = nuevo;
    } else {
        cola->sig = nuevo;
        nuevo->ant = cola;
        cola = nuevo;
    }
}

void ListaDeCarga::imprimirMensaje() {
    NodoCarga* aux = cabeza;
    std::cout << "\nMENSAJE ENSAMBLADO: ";
    while (aux) {
        std::cout << aux->dato;
        aux = aux->sig;
    }
    std::cout << "\n";
}
