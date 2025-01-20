#include <Pantalla12x8.h>
// #include "Arduino_LED_Matrix.h"   //Include the LED_Matrix library

// instance of the library
Pantalla12x8 pantallita;



void setup() {
  Serial.begin(115200);
  // you can also load frames at runtime, without stopping the refresh
  pantallita.iniciar();
  // pantallita.miMatrix.loadSequence(LEDMATRIX_ANIMATION_STARTUP);
  
}

void loop() {
  pantallita.mostrar();
}
