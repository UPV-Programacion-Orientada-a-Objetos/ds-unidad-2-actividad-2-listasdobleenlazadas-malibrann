/**
 * @file TramaBase.cpp
 * @brief Implementación mínima de la clase base abstracta TramaBase.
 * @details Esta clase define la interfaz común que deben implementar todas las
 *          tramas del protocolo PRT-7 (por ejemplo, LOAD y MAP). No contiene
 *          lógica de procesamiento, ya que dicha responsabilidad se delega a
 *          las clases derivadas.
 */

#include "TramaBase.h"

TramaBase::TramaBase() = default;

TramaBase::~TramaBase() = default;
