#include <Adafruit_NeoPixel.h>
#ifdef __AVR__
  #include <avr/power.h>
#endif

// Which pin on the Arduino is connected to the NeoPixels?
// On a Trinket or Gemma we suggest changing this to 1

// How many NeoPixels are attached to the Arduino?
#define NUMPIXELS 10
#define W_WIDTH 15
#define W_HEIGHT 10

int delayval = 0;
int i; // Rows
int j; // Columns
int tmp;
int    involtPin[200] = {};

int matrix[][15] = { {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
};

void  involt_write_buffer(int matrix[][15])
{
  tmp = 0;
  for(i = 0; i < W_HEIGHT; i++){
    for(j = 0; j < W_WIDTH; j++){
        matrix[i][j] = involtPin[tmp];
      tmp++;
    }
  }
}

// When we setup the NeoPixel library, we tell it how many pixels, and which pin to use to send signals.
// Note that for older NeoPixel strips you might need to change the third parameter--see the strandtest
// example for more information on possible values.
Adafruit_NeoPixel zero = Adafruit_NeoPixel(NUMPIXELS, 36, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel one = Adafruit_NeoPixel(NUMPIXELS, 35, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel two = Adafruit_NeoPixel(NUMPIXELS, 34, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel three = Adafruit_NeoPixel(NUMPIXELS, 33, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel four = Adafruit_NeoPixel(NUMPIXELS, 32, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel five = Adafruit_NeoPixel(NUMPIXELS, 31, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel six = Adafruit_NeoPixel(NUMPIXELS, 30, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel seven = Adafruit_NeoPixel(NUMPIXELS, 29, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel eight = Adafruit_NeoPixel(NUMPIXELS, 28, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel nine = Adafruit_NeoPixel(NUMPIXELS, 27, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel ten = Adafruit_NeoPixel(NUMPIXELS, 26, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel eleven = Adafruit_NeoPixel(NUMPIXELS, 25, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel twelve = Adafruit_NeoPixel(NUMPIXELS, 24, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel thirteen = Adafruit_NeoPixel(NUMPIXELS, 23, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel fourteen = Adafruit_NeoPixel(NUMPIXELS, 22, NEO_GRB + NEO_KHZ800);


//1 1 1 0 0 0 1 1 1

//1 1 1 
//0 0 0
//1 1 1

//0 1

//i * WITDH + j

//put_pixel(y, x, color);

void  put_pixel(int y, int x, int r, int g, int b)
{
  if(y == 0)
  {
    zero.setPixelColor(x, zero.Color(r, g, b));
    
    delay(delayval);
  }
  else if(y == 1)
  {
    one.setPixelColor(x, one.Color(r, g, b));
    delay(delayval);
  }
  else if(y == 2)
  {
    two.setPixelColor(x, two.Color(r, g, b));
    
    delay(delayval);
  }
  else if(y == 3)
  {
    three.setPixelColor(x, three.Color(r, g, b));
    delay(delayval);
  }
  else if(y == 4)
  {
    four.setPixelColor(x, four.Color(r, g, b));
     
    delay(delayval);
  }
  else if(y == 5)
  {
    five.setPixelColor(x, five.Color(r, g, b));
    
    delay(delayval);
  }
  else if(y == 6)
  {
    six.setPixelColor(x, six.Color(r, g, b));
  
    delay(delayval);
  }
  else if(y == 7)
  {
    seven.setPixelColor(x, seven.Color(r, g, b));
      
    delay(delayval);
  }
  else if(y == 8)
  {
    eight.setPixelColor(x, eight.Color(r, g, b));

    delay(delayval);
  }
  else if(y == 9)
  {
    nine.setPixelColor(x, nine.Color(r, g, b));
   
    delay(delayval);
  }
  else if(y == 10)
  {
    ten.setPixelColor(x, ten.Color(r, g, b));
          
    delay(delayval);
  }
  else if(y == 11)
  {
    eleven.setPixelColor(x, eleven.Color(r, g, b));
    
    delay(delayval);
  }
  else if(y == 12)
  {
    twelve.setPixelColor(x, twelve.Color(r, g, b));
    
    delay(delayval);
  }
  else if(y == 13)
  {
    thirteen.setPixelColor(x, thirteen.Color(r, g, b));
     
    delay(delayval);
  }
  else if(y == 14)
  {
    fourteen.setPixelColor(x, fourteen.Color(r, g, b));
  
    delay(delayval);
  }
}

void  update_window(int matrix[][15])
{
  for(i = 0; i < W_HEIGHT; i++){
    for(j = 0; j < W_WIDTH; j++){
      put_pixel(j, i, matrix[W_HEIGHT - 1 - i][j] * 255, 0,0);
     //       put_pixel(j, i, 244, 66, 67);

    }
  }
  zero.show();
    one.show();
    two.show();
    three.show();
    four.show();
    five.show();
    six.show();
    seven.show();
    eight.show();
    nine.show();
    ten.show();
    eleven.show();
    twelve.show();
    thirteen.show();
    fourteen.show();
}

/*
  involtPin array contains values received from app.
  Each UI element refers to pin number which is index of
  this array. involtString is array for values received
  with "S" pin. You can increase the length of array to
  store more values then arduino total pins. Use them 
  in sketch for not only pin-to-pin communication.
*/
String involtString[40] ={};

/*
  Buffer for received data. If you plan to receive more 
  at once just increase the array length.
*/
char involt[16];

/*
  String for function received from app.
*/
String fname;
/*
  INVOLT BASIC ARDUINO SKETCH
  by Ernest Warzocha 2015
  ------------------------------------------------------
  This file is for serial communication between Arduino 
  Uno and Involt App. It can be used with HC-05 Bluetooth 
  device connected via hardware serial.
*/

void setup() {
 
 //Connection speed must be same as app.
  pinMode(13, OUTPUT);
  digitalWrite(13, LOW);
  zero.begin(); // This initializes the NeoPixel library.
  one.begin(); // This initializes the NeoPixel library.
  two.begin(); // This initializes the NeoPixel library.
  three.begin(); // This initializes the NeoPixel library.
  four.begin(); // This initializes the NeoPixel library.
  five.begin(); // This initializes the NeoPixel library.
  six.begin(); // This initializes the NeoPixel library.
  seven.begin(); // This initializes the NeoPixel library.
  eight.begin(); // This initializes the NeoPixel library.
  nine.begin(); // This initializes the NeoPixel library.
  ten.begin(); // This initializes the NeoPixel library.
  eleven.begin(); // This initializes the NeoPixel library.
  twelve.begin(); // This initializes the NeoPixel library.
  thirteen.begin(); // This initializes the NeoPixel library.
  fourteen.begin(); // This initializes the NeoPixel library.

  for(i = 0; i < 200; i++)
    involtPin[i] = 0;

 Serial.begin(57600);
}

void loop() {
  delay(1);
  involtReceive();
  delay(1);
  //for(i = 0; i <= involtPin[22]; i++)
   // put_pixel(i, 1, 30, 0, 0);
    //for(i; i <= 9; i++)
    //put_pixel(i, 1, 0, 0, 0);
    involt_write_buffer(matrix);
    delay(1);
    update_window(matrix);
    //delay(1);
    //put_piuuel(2, 0, 30, 0, 0);
  fname = "";
}

/*
  INVOLT FUNCTIONS
  ------------------------------------------------------
  You don't have to look below. Especially if you don't
  want to complicate everything. However, you can add 
  your own functions (additional letters for example) 
  when data is received.

  involtReceive
  ------------------------------------------------------ 
  read the data from app and parse the values received 
  into proper array. The read until is used due to
  issues with missing chars when reading direct strings.
  
  involtSend, involtSendString
  ------------------------------------------------------
  send int or string to app. Multiple prints are to
  reduce the sketch size (compared to sprintf()).
*/

void involtReceive(){
  if(Serial.available()>0) {
    Serial.readBytesUntil('\n',involt,sizeof(involt));
    int pin;
    if (involt[0] == 'P'){
      int value;
      sscanf(involt, "P%dV%d", &pin, &value);
      involtPin[pin] = value;
    }
    else if (involt[0] == 'S'){
      char value[sizeof(involt)];
      sscanf(involt, "S%dV%s", &pin, &value);
      involtString[pin] = value;
    }
    else if (involt[0] == 'F'){
      char value[sizeof(involt)];
      sscanf(involt, "F%s", &value);
      fname = value;
    };
    memset(involt,0,sizeof(involt));
  };
};

void involtSend(int pinNumber, int sendValue){
  Serial.print('A'); 
  Serial.print(pinNumber); 
  Serial.print('V'); 
  Serial.print(sendValue); 
  Serial.println('E');
  Serial.flush();
};

void involtSendString(int pinNumber, String sendString){
  Serial.print('A'); 
  Serial.print(pinNumber); 
  Serial.print('V'); 
  Serial.print(sendString); 
  Serial.println('E'); 
  Serial.flush();

};

void involtSendFunction(String functionName){
  Serial.print('F'); 
  Serial.print(functionName); 
  Serial.println('E'); 
  Serial.flush();
};
