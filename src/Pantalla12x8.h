#ifndef PANTALLA_12x8_H
#define PANTALLA_12x8_H

#include <Arduino.h>
#include "Arduino_LED_Matrix.h"

class Pantalla12x8 {
  public:
    // constructor
    Pantalla12x8();

    // destructor
    ~Pantalla12x8();

    ArduinoLEDMatrix matrix;

    void iniciar();
    void mostrar();


    // numbers, centered
    static uint32_t cero[8][12];
    static uint32_t uno[8][12];
    static uint32_t dos[8][12];
    static uint32_t tres[8][12];
    static uint32_t cuatro[8][12];
    static uint32_t cinco[8][12];
    static uint32_t seis[8][12];
    static uint32_t siete[8][12];
    static uint32_t ocho[8][12];
    static uint32_t nueve[8][12];

};

#endif