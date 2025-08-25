#include "Pantalla12x8.h"

/// constructor
/// @param none
/// @return none
Pantalla12x8::Pantalla12x8() {
  miMatrix = new ArduinoLEDMatrix();
}

/// destructor
/// @param none
/// @return none
Pantalla12x8::~Pantalla12x8() {
  if (miMatrix != nullptr) {
    delete miMatrix;
    miMatrix = nullptr;
  }
  
}

const uint32_t Pantalla12x8::cero[] = {
  0x07005005,
  0x00500500,
  0x50050070
};

const uint32_t Pantalla12x8::uno[] = {
  0x01003005,
  0x00100100,
  0x10010010
};

const uint32_t Pantalla12x8::dos[] = {
  0x07001001,
  0x00700400,
  0x40040070
};

const uint32_t Pantalla12x8::tres[] = {
  0x07001001,
  0x00700100,
  0x10010070
};

const uint32_t Pantalla12x8::cuatro[] = {
  0x05005005,
  0x00700100,
  0x10010010
};

const uint32_t Pantalla12x8::cinco[] = {
  0x07004004,
  0x00700100,
  0x10010070
};

const uint32_t Pantalla12x8::seis[] = {
  0x07004004,
  0x00700500,
  0x50050070
};

const uint32_t Pantalla12x8::siete[] = {
  0x07001007,
  0x00100100,
  0x10010010
};

const uint32_t Pantalla12x8::ocho[] = {
  0x07005005,
  0x00700500,
  0x50050070
};

const uint32_t Pantalla12x8::nueve[] = {
  0x07005007,
  0x00100100,
  0x10010010
};


void Pantalla12x8::iniciar() {
  miMatrix->begin();
}


void Pantalla12x8::mostrar() {

  Pantalla12x8::miMatrix->loadFrame(cero);
  delay(500);
  Pantalla12x8::miMatrix->loadFrame(uno);
  delay(500);
  Pantalla12x8::miMatrix->loadFrame(dos);
  delay(500);
  Pantalla12x8::miMatrix->loadFrame(tres);
  delay(500);
  Pantalla12x8::miMatrix->loadFrame(cuatro);
  delay(500);
  Pantalla12x8::miMatrix->loadFrame(cinco);
  delay(500);
  Pantalla12x8::miMatrix->loadFrame(seis);
  delay(500);
  Pantalla12x8::miMatrix->loadFrame(siete);
  delay(500);
  Pantalla12x8::miMatrix->loadFrame(ocho);
  delay(500);
  Pantalla12x8::miMatrix->loadFrame(nueve);
  delay(500);
}