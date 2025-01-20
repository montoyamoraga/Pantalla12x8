#ifndef PANTALLA_12x8_H
#define PANTALLA_12x8_H

#include <Arduino.h>
#include "Arduino_LED_Matrix.h"

class Pantalla12x8 {

  protected:
    ArduinoLEDMatrix *miMatrix = nullptr;

  public:
    // constructor
    Pantalla12x8();

    // destructor
    ~Pantalla12x8();

    void iniciar();
    void mostrar();

    // numbers, centered
    static const uint32_t cero[3];
    static const uint32_t uno[3];
    static const uint32_t dos[3];
    static const uint32_t tres[3];
    static const uint32_t cuatro[3];
    static const uint32_t cinco[3];
    static const uint32_t seis[3];
    static const uint32_t siete[3];
    static const uint32_t ocho[3];
    static const uint32_t nueve[3];
};

#endif