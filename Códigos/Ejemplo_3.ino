//Este código cambia colores en direcciones contrarias infinitamente

#include <Adafruit_NeoPixel.h>  //Incluir la librería Adafruit_NeoPixel
#define leds 8                  //Definir la cantidad de luces led a usar
#define retardo 80              //Definir un intervalo que va indica cuanto tiempo hay entre encender un led y el que le sigue
#define brillo 15               //Definimos un brillo fijo

Adafruit_NeoPixel luces = Adafruit_NeoPixel(leds, 3, NEO_GRB + NEO_KHZ800); //Crear el objeto de tipo Adafruit_NeoPixel y pasarle los argumetnos necesarios

void setup() {
  luces.begin();                //Inicializar la comunicación con la tira
  luces.setBrightness(brillo);  //Indicar el brillo que deben tener todos los leds
}

void loop() {
  
  //Prueba este código por ti mismo para ver lo qu hace
  
  for (int i=0;i<leds;i++){ 
     luces.setPixelColor(i, 255, 0, 0); // ROJO DE IDA
     luces.show();
     delay(retardo);
   }
  for (int i = leds - 1;i >= 0; i--){ 
     luces.setPixelColor(i, 0, 255, 0); // VERDE DE REGRESO
     luces.show();
     delay(retardo);
   }
  for (int i=0;i<leds;i++){ 
     luces.setPixelColor(i, 0, 0, 255); // AZUL DE IDA
     luces.show();
     delay(retardo);
   }
   for (int i = leds - 1;i >= 0; i--){ 
     luces.setPixelColor(i, 255, 0, 0); // ROJO DE REGRESO
     luces.show();
     delay(retardo);
   }
   for (int i=0;i<leds;i++){ 
     luces.setPixelColor(i, 0, 255, 0); // VERDE DE IDA
     luces.show();
     delay(retardo);
   }
   for (int i = leds - 1;i >= 0; i--){ 
     luces.setPixelColor(i, 0, 0, 255); // AZUL DE REGRESO
     luces.show();
     delay(retardo);
   }
}
