//Este código cambia el color de los leds individualmente

#include <Adafruit_NeoPixel.h>  //Incluir la librería Adafruit_NeoPixel
#define leds 8                  //Definir la cantidad de luces led a usar
#define retardo 100             //Definir un intervalo que va indica cuanto tiempo hay entre encender un led y el que le sigue
#define brillo 10               //Definimos un brillo fijo

Adafruit_NeoPixel luces = Adafruit_NeoPixel(leds, 3, NEO_GRB + NEO_KHZ800); //Crear el objeto de tipo Adafruit_NeoPixel y pasarle los argumetnos necesarios
byte green = 0;
byte red = 0;    //Declaramos las variables con longitud de 8 bits (0-255) para cada color y les asignamos un valor de 0
byte blue = 0;

void setup() {
  luces.begin();                //Inicializar la comunicación con la tira
  luces.setBrightness(brillo);  //Indicar el brillo que deben tener todos los leds
}

void loop() {

//Lo que hace cada bucle es asignar el color a un led y hacer que lo muestre, después hace lo mismo con el siguiente led y repite el proceso
  
  for (int i=0;i<leds;i++){ 
     luces.setPixelColor(i,255,255,255); //Este bucle enciende cada led en color BLANCO
     luces.show();
     delay(retardo);
   }
   
  for (int i=0;i<leds;i++){ 
     luces.setPixelColor(i,255,0,0);     //Este bucle enciende cada led en color ROJO
     luces.show();
     delay(retardo);
   }
  for (int i=0;i<leds;i++){ 
     luces.setPixelColor(i,0,255,0);     //Este bucle enciende cada led en color VERDE
     luces.show();
     delay(retardo);
   }
  for (int i=0;i<leds;i++){ 
     luces.setPixelColor(i,0,0,255);     //Este bucle enciende cada led en color AZUL
     luces.show();
     delay(retardo);
   }
}
