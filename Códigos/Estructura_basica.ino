#include <Adafruit_NeoPixel.h> //Incluir la librería Adafruit_NeoPixel
#define pin_datos 3            //Definir el pin de datos para la tira led
#define leds 8                 //Definir la cantidad de luces led a usar
#define intervalo 7            //Definir un intervalo que va a ser útil más adelante
#define brillo 30              //Definimos un brillo fijo, recueda que si lo deseas puedes variararlo durante la ejecución de programa

Adafruit_NeoPixel luces = Adafruit_NeoPixel(leds, pin_datos, NEO_GRB + NEO_KHZ800); //Crear el objeto de tipo Adafruit_NeoPixel y pasarle los argumetnos necesarios

void setup() {
  luces.begin();                //Inicializar la comunicación con la tira
  luces.clear();                //Apagar todos los leds
  luces.setBrightness(brillo);  //Indicar el brillo que deben tener todos los leds
}

void loop() {/* Siempre se debe declarar el void loop  */}
