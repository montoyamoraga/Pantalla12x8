#include "Pantalla12x8.h"

// constructor
Pantalla12x8::Pantalla12x8() {
}

// destructor
Pantalla12x8::~Pantalla12x8() {}

Pantalla12x8::iniciar() {
  Pantalla12x8::matrix.begin();
}



Pantalla12x::mostrar() {
  Pantalla12x8::matrix.loadFrame(Pantalla12x8::cero);
  delay(500);
  Pantalla12x8::matrix.loadFrame(Pantalla12x8::uno);
  delay(500);
  Pantalla12x8::matrix.loadFrame(Pantalla12x8::dos);
  delay(500);
  Pantalla12x8::matrix.loadFrame(Pantalla12x8::tres);
  delay(500);
  Pantalla12x8::matrix.loadFrame(Pantalla12x8::cuatro);
  delay(500);
  Pantalla12x8::matrix.loadFrame(Pantalla12x8::cinco);
  delay(500);
  Pantalla12x8::matrix.loadFrame(Pantalla12x8::seis);
  delay(500);
  Pantalla12x8::matrix.loadFrame(Pantalla12x8::siete);
  delay(500);
  Pantalla12x8::matrix.loadFrame(Pantalla12x8::ocho);
  delay(500);
  Pantalla12x8::matrix.loadFrame(Pantalla12x8::nueve);
  delay(500);
}