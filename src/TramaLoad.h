#ifndef TRAMALOAD_H
#define TRAMALOAD_H

#include "TramaBase.h"

/**
 * @class TramaLoad
 * @brief Representa una trama de tipo LOAD (L,X) que contiene un carácter.
 */
class TramaLoad : public TramaBase {
    char dato; ///< Carácter recibido desde el puerto serial.
public:
    TramaLoad(char c);
    void procesar(ListaDeCarga* carga, RotorDeMapeo* rotor) override;
};

#endif
