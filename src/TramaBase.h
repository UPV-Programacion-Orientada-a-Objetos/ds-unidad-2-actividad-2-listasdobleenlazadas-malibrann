#ifndef TRAMABASE_H
#define TRAMABASE_H

class ListaDeCarga;
class RotorDeMapeo;

/**
 * @class TramaBase
 * @brief Clase base abstracta para todas las tramas del protocolo PRT-7.
 */
class TramaBase {
public:
    /**
     * @brief Procesa la trama según su tipo.
     * @param carga Lista de carga donde se insertan los datos.
     * @param rotor Rotor de mapeo que define el mapeo actual.
     */
    virtual void procesar(ListaDeCarga* carga, RotorDeMapeo* rotor) = 0;

    /// Destructor virtual obligatorio para evitar fugas al borrar polimórficamente.
    virtual ~TramaBase() {}
};

#endif
