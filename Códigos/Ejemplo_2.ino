//Este código cambia de color todos los leds progresivamente al mismo tiempo

#include <Adafruit_NeoPixel.h>  //Incluir la librería Adafruit_NeoPixel
#define leds 8                  //Definir la cantidad de luces led a usar
#define intervalo 6             //Definir un intervalo que va indica que tan veloz es el cambio de color

Adafruit_NeoPixel luces = Adafruit_NeoPixel(leds, 3, NEO_GRB + NEO_KHZ800);//Crear el objeto de tipo Adafruit_NeoPixel y pasarle los argumetnos necesarios

byte green = 0;
byte red = 0;    //Declaramos las variables con longitud de 8 bits (0-255) para cada color y les asignamos un valor de 0
byte blue = 0;

void setup() {
  luces.begin();            //Inicializar la comunicación con la tira
  luces.setBrightness(20);  //Indicar el brillo que deben tener todos los leds
}

void loop() {
  /*
    Lo que cada bucle for hace es cambiar ligeramente uno de los colores, asignarlo a todos los leds de la tir, mostrarlo, esperar un tiempo
    determindo y repetir el proceso
  */

  for(red; red < 255; red++){
    for(int led = 0; led < leds; led++)luces.setPixelColor(led, red, green, blue);
    luces.show();
    delay(intervalo);
  }

  for(green; green < 255; green++){
    for(int led = 0; led < leds; led++)luces.setPixelColor(led, red, green, blue);
    luces.show();
    delay(intervalo);
  }

  for(blue; blue < 255; blue++){
    for(int led = 0; led < leds; led++)luces.setPixelColor(led, red, green, blue);
    luces.show();
    delay(intervalo);
  }

  //Apagar los leds progresivamente
  for(red; red > 0; red--){
    for(int led = 0; led < leds; led++)luces.setPixelColor(led, red, green, blue);
    luces.show();
    delay(intervalo);
  }

  for(green; green > 0; green--){
    for(int led = 0; led < leds; led++)luces.setPixelColor(led, red, green, blue);
    luces.show();
    delay(intervalo);
  }

  for(blue; blue > 0; blue--){
    for(int led = 0; led < leds; led++)luces.setPixelColor(led, red, green, blue);
    luces.show();
    delay(intervalo);
  }

  luces.clear();
}
