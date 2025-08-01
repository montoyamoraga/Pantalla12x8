#include <Pantalla12x8.h>

// instance of the library
Pantalla12x8 pantallita;

void setup() {
  Serial.begin(115200);
  // you can also load frames at runtime, without stopping the refresh
  pantallita.iniciar();  
}

void loop() {
  pantallita.mostrar();
}
