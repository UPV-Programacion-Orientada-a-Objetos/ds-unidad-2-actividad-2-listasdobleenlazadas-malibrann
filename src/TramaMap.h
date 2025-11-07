#ifndef TRAMAMAP_H
#define TRAMAMAP_H

#include "TramaBase.h"

/**
 * @class TramaMap
 * @brief Representa una trama de tipo MAP (M,N) que rota el rotor de mapeo.
 */
class TramaMap : public TramaBase {
    int desplazamiento; ///< Valor entero de rotación.
public:
    TramaMap(int n);
    void procesar(ListaDeCarga* carga, RotorDeMapeo* rotor) override;
};

#endif
