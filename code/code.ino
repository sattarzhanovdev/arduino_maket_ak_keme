#include <Adafruit_NeoPixel.h>
#include <SoftwareSerial.h>
SoftwareSerial mySerialBT(9,10);

Adafruit_NeoPixel pixels_1 = Adafruit_NeoPixel(60, 6, NEO_GRB + NEO_KHZ800);

long  num;
       
void setup()
{
  Serial.begin(9600);

  pixels_1.begin();

   num = 0;

  mySerialBT.begin(9600);


}


void loop()
{
  num = (mySerialBT.read());
  // Включаем все этажи
  
  if(num == 'v'){
    pixels_1.clear();
    pixels_1.setBrightness(255);
    for(int i = 0; i < 54; i++){
      pixels_1.setPixelColor(i, pixels_1.Color(255,255,255));
      pixels_1.show();  
    }
  }

  // 1 этаж
  
  if(num == 'a'){
    pixels_1.setBrightness(255);
    for(int i = 0; i < 6; i++){
      pixels_1.setPixelColor(i, pixels_1.Color(255,255,255));
      pixels_1.show();  
    }
    for(int i = 6; i < 54; i++){
      pixels_1.setPixelColor(i, pixels_1.Color(0,0,0));
      pixels_1.show();  
    }
  }

      if(num == '1'){
        pixels_1.clear();  
        pixels_1.setPixelColor(1-1, pixels_1.Color(255,255,255));
        pixels_1.show();  
      }

      if(num == '2'){
        pixels_1.clear();  
        pixels_1.setPixelColor(2-1, pixels_1.Color(255,255,255));
        pixels_1.show();  
      }

      if(num == '3'){
        pixels_1.clear();  
        pixels_1.setPixelColor(3-1, pixels_1.Color(255, 255, 255));
        pixels_1.show();  
      }

      if(num == '4'){
        pixels_1.clear();  
        pixels_1.setPixelColor(4-1, pixels_1.Color(255,255,255));
        pixels_1.show();  
      }

      if(num == '5'){
        pixels_1.clear();  
        pixels_1.setPixelColor(5-1, pixels_1.Color(255,255,255));
        pixels_1.show();  
      }

      if(num == '6'){
        pixels_1.clear();  
        pixels_1.setPixelColor(6-1, pixels_1.Color(255,255,255));
        pixels_1.show();  
      }

  if(num == 'b'){
    pixels_1.setBrightness(255);
    for(int i = 0; i < 6; i++){
      pixels_1.setPixelColor(i, pixels_1.Color(0,0,0));
      pixels_1.show();  
    }
    for(int i = 6; i < 12; i++){
      pixels_1.setPixelColor(i, pixels_1.Color(255,255,255));
      pixels_1.show();  
    }
    for(int i = 12; i < 54; i++){
      pixels_1.setPixelColor(i, pixels_1.Color(0,0,0));
      pixels_1.show();  
    }
  }

      if(num == '7'){
        pixels_1.clear();  
        pixels_1.setPixelColor(6, pixels_1.Color(255,255,255));
        pixels_1.show();  
      }

      if(num == '8'){
        pixels_1.clear();  
        pixels_1.setPixelColor(7, pixels_1.Color(255,255,255));
        pixels_1.show();  
      }

      if(num == '9'){
        pixels_1.clear();  
        pixels_1.setPixelColor(8, pixels_1.Color(255,255,255));
        pixels_1.show();  
      }

      if(num == 'q'){
        pixels_1.clear();  
        pixels_1.setPixelColor(9, pixels_1.Color(255,255,255));
        pixels_1.show();  
      }

      if(num == 'w'){
        pixels_1.clear();  
        pixels_1.setPixelColor(10, pixels_1.Color(255,255,255));
        pixels_1.show();  
      }

      if(num == 't'){
        pixels_1.clear();  
        pixels_1.setPixelColor(11, pixels_1.Color(255,255,255));
        pixels_1.show();  
      }

  if(num == 'c'){
    pixels_1.setBrightness(255);
    for(int i = 0; i < 12; i++){
      pixels_1.setPixelColor(i, pixels_1.Color(0,0,0));
      pixels_1.show();  
    }
    for(int i = 12; i < 18; i++){
      pixels_1.setPixelColor(i, pixels_1.Color(255,255,255));
      pixels_1.show();  
    }
    for(int i = 18; i < 54; i++){
      pixels_1.setPixelColor(i, pixels_1.Color(0,0,0));
      pixels_1.show();  
    }
  }

  
      if(num == 'y'){
        pixels_1.clear();  
        pixels_1.setPixelColor(12, pixels_1.Color(255,255,255));
        pixels_1.show();  
      }

      if(num == 'u'){
        pixels_1.clear();  
        pixels_1.setPixelColor(13, pixels_1.Color(255,255,255));
        pixels_1.show();  
      }

      if(num == 'o'){
        pixels_1.clear();  
        pixels_1.setPixelColor(14, pixels_1.Color(255,255,255));
        pixels_1.show();  
      }

      if(num == 'p'){
        pixels_1.clear();  
        pixels_1.setPixelColor(15, pixels_1.Color(255,255,255));
        pixels_1.show();  
      }

      if(num == '['){
        pixels_1.clear();  
        pixels_1.setPixelColor(16, pixels_1.Color(255,255,255));
        pixels_1.show();  
      }

      if(num == ']'){
        pixels_1.clear();  
        pixels_1.setPixelColor(17, pixels_1.Color(255,255,255));
        pixels_1.show();  
      }

  if(num == 'd'){
    pixels_1.setBrightness(255);
    for(int i = 0; i < 18; i++){
      pixels_1.setPixelColor(i, pixels_1.Color(0,0,0));
      pixels_1.show();  
    }
    for(int i = 18; i < 24; i++){
      pixels_1.setPixelColor(i, pixels_1.Color(255,255,255));
      pixels_1.show();  
    }
    for(int i = 24; i < 54; i++){
      pixels_1.setPixelColor(i, pixels_1.Color(0,0,0));
      pixels_1.show();  
    }
  }

  
      if(num == 's'){
        pixels_1.clear();  
        pixels_1.setPixelColor(18, pixels_1.Color(255,255,255));
        pixels_1.show();  
      }

      if(num == 'j'){
        pixels_1.clear();  
        pixels_1.setPixelColor(19, pixels_1.Color(255,255,255));
        pixels_1.show();  
      }

      if(num == 'k'){
        pixels_1.clear();  
        pixels_1.setPixelColor(20, pixels_1.Color(255,255,255));
        pixels_1.show();  
      }

      if(num == 'l'){
        pixels_1.clear();  
        pixels_1.setPixelColor(21, pixels_1.Color(255,255,255));
        pixels_1.show();  
      }

      if(num == ';'){
        pixels_1.clear();  
        pixels_1.setPixelColor(22, pixels_1.Color(255,255,255));
        pixels_1.show();  
      }

      if(num == '"'){
        pixels_1.clear();  
        pixels_1.setPixelColor(23, pixels_1.Color(255,255,255));
        pixels_1.show();  
      }

  if(num == 'e'){
    pixels_1.setBrightness(255);
    for(int i = 0; i < 24; i++){
      pixels_1.setPixelColor(i, pixels_1.Color(0,0,0));
      pixels_1.show();  
    }
    for(int i = 24; i < 30; i++){
      pixels_1.setPixelColor(i, pixels_1.Color(255,255,255));
      pixels_1.show();  
    }
    for(int i = 30; i < 54; i++){
      pixels_1.setPixelColor(i, pixels_1.Color(0,0,0));
      pixels_1.show();  
    }
  }

 
      if(num == 'z'){
        pixels_1.clear();  
        pixels_1.setPixelColor(24, pixels_1.Color(255,255,255));
        pixels_1.show();  
      }

      if(num == 'x'){
        pixels_1.clear();  
        pixels_1.setPixelColor(25, pixels_1.Color(255,255,255));
        pixels_1.show();  
      }

      if(num == 'n'){
        pixels_1.clear();  
        pixels_1.setPixelColor(26, pixels_1.Color(255,255,255));
        pixels_1.show();  
      }

      if(num == 'm'){
        pixels_1.clear();  
        pixels_1.setPixelColor(27, pixels_1.Color(255,255,255));
        pixels_1.show();  
      }

      if(num == ','){
        pixels_1.clear();  
        pixels_1.setPixelColor(28, pixels_1.Color(255,255,255));
        pixels_1.show();  
      }

      if(num == '.'){
        pixels_1.clear();  
        pixels_1.setPixelColor(29, pixels_1.Color(255,255,255));
        pixels_1.show();  
      }

  if(num == 'f'){
    pixels_1.setBrightness(255);
    for(int i = 0; i < 30; i++){
      pixels_1.setPixelColor(i, pixels_1.Color(0,0,0));
      pixels_1.show();  
    }
    for(int i = 30; i < 36; i++){
      pixels_1.setPixelColor(i, pixels_1.Color(255,255,255));
      pixels_1.show();  
    }
    for(int i = 36; i < 54; i++){
      pixels_1.setPixelColor(i, pixels_1.Color(0,0,0));
      pixels_1.show();  
    }
  }
  
      if(num == '/'){
        pixels_1.clear();  
        pixels_1.setPixelColor(30, pixels_1.Color(255,255,255));
        pixels_1.show();  
      }

      if(num == 'Q'){
        pixels_1.clear();  
        pixels_1.setPixelColor(31, pixels_1.Color(255,255,255));
        pixels_1.show();  
      }

      if(num == 'W'){
        pixels_1.clear();  
        pixels_1.setPixelColor(32, pixels_1.Color(255,255,255));
        pixels_1.show();  
      }

      if(num == 'E'){
        pixels_1.clear();  
        pixels_1.setPixelColor(33, pixels_1.Color(255,255,255));
        pixels_1.show(); 
      }

      if(num == 'R'){
        pixels_1.clear();  
        pixels_1.setPixelColor(34, pixels_1.Color(255,255,255));
        pixels_1.show();  
      }

      if(num == 'T'){
        pixels_1.clear();  
        pixels_1.setPixelColor(35, pixels_1.Color(255,255,255));
        pixels_1.show();  
      }

  if(num == 'g'){
    pixels_1.setBrightness(255);
    for(int i = 0; i < 36; i++){
      pixels_1.setPixelColor(i, pixels_1.Color(0,0,0));
      pixels_1.show();  
    }
    for(int i = 36; i < 42; i++){
      pixels_1.setPixelColor(i, pixels_1.Color(255,255,255));
      pixels_1.show();  
    }
    for(int i = 42; i < 54; i++){
      pixels_1.setPixelColor(i, pixels_1.Color(0,0,0));
      pixels_1.show();  
    }
  }

      if(num == 'H'){
        pixels_1.clear();  
        pixels_1.setPixelColor(36, pixels_1.Color(255,255,255));
        pixels_1.show();  
      }

      if(num == 'J'){
        pixels_1.clear();  
        pixels_1.setPixelColor(37, pixels_1.Color(255,255,255));
        pixels_1.show();  
      }

      if(num == 'K'){
        pixels_1.clear();  
        pixels_1.setPixelColor(38, pixels_1.Color(255,255,255));
        pixels_1.show();  
      }

      if(num == 'L'){
        pixels_1.clear();  
        pixels_1.setPixelColor(39, pixels_1.Color(255,255,255));
        pixels_1.show(); 
      }

      if(num == 'Z'){
        pixels_1.clear();  
        pixels_1.setPixelColor(40, pixels_1.Color(255,255,255));
        pixels_1.show();  
      }

      if(num == 'X'){
        pixels_1.clear();  
        pixels_1.setPixelColor(41, pixels_1.Color(255,255,255));
        pixels_1.show();  
      }

  if(num == 'h'){
    pixels_1.setBrightness(255);
    for(int i = 0; i < 42; i++){
      pixels_1.setPixelColor(i, pixels_1.Color(0,0,0));
      pixels_1.show();  
    }
    for(int i = 42; i < 48; i++){
      pixels_1.setPixelColor(i, pixels_1.Color(255,255,255));
      pixels_1.show();  
    }
    for(int i = 48; i < 54; i++){
      pixels_1.setPixelColor(i, pixels_1.Color(0,0,0));
      pixels_1.show();  
    }
  }

      if(num == 'C'){
        pixels_1.clear();  
        pixels_1.setPixelColor(42, pixels_1.Color(255,255,255));
        pixels_1.show();  
      }

      if(num == 'V'){
        pixels_1.clear();  
        pixels_1.setPixelColor(43, pixels_1.Color(255,255,255));
        pixels_1.show();  
      }

      if(num == 'B'){
        pixels_1.clear();  
        pixels_1.setPixelColor(44, pixels_1.Color(255,255,255));
        pixels_1.show();  
      }

      if(num == 'N'){
        pixels_1.clear();  
        pixels_1.setPixelColor(45, pixels_1.Color(255,255,255));
        pixels_1.show(); 
      }

      if(num == 'M'){
        pixels_1.clear();  
        pixels_1.setPixelColor(46, pixels_1.Color(255,255,255));
        pixels_1.show();  
      }

      if(num == '?'){
        pixels_1.clear();  
        pixels_1.setPixelColor(47, pixels_1.Color(255,255,255));
        pixels_1.show();  
      }

  if(num == 'i'){
    pixels_1.setBrightness(255);
    for(int i = 0; i < 48; i++){
      pixels_1.setPixelColor(i, pixels_1.Color(0,0,0));
      pixels_1.show();  
    }
    for(int i = 48; i < 54; i++){
      pixels_1.setPixelColor(i, pixels_1.Color(255,255,255));
      pixels_1.show();  
    }
  }

      if(num == '!'){
        pixels_1.clear();  
        pixels_1.setPixelColor(48, pixels_1.Color(255,255,255));
        pixels_1.show();  
      }

      if(num == '@'){
        pixels_1.clear();  
        pixels_1.setPixelColor(49, pixels_1.Color(255,255,255));
        pixels_1.show();  
      }

      if(num == '#'){
        pixels_1.clear();  
        pixels_1.setPixelColor(50, pixels_1.Color(255,255,255));
        pixels_1.show();  
      }

      if(num == '$'){
        pixels_1.clear();  
        pixels_1.setPixelColor(51, pixels_1.Color(255,255,255));
        pixels_1.show(); 
      }

      if(num == '%'){
        pixels_1.clear();  
        pixels_1.setPixelColor(52, pixels_1.Color(255,255,255));
        pixels_1.show();  
      }

      if(num == '^'){
        pixels_1.clear();  
        pixels_1.setPixelColor(53, pixels_1.Color(255,255,255));
        pixels_1.show();  
      }

      
  if(num == 'D'){

      pixels_1.setBrightness(50);
    
      for(int i = 0; i < 50; i++){
        int randomNum = random(0, 30);

        for(int i = 0; i < 30 / randomNum; i++){
          pixels_1.setPixelColor(randomNum * 2, pixels_1.Color(0,0,0));
          pixels_1.show();
          pixels_1.setPixelColor(i, pixels_1.Color(255,255,255));
          pixels_1.show();
          pixels_1.setPixelColor(randomNum +   2, pixels_1.Color(0,0,0));
          pixels_1.show();
          pixels_1.setPixelColor(randomNum + 3, pixels_1.Color(255,255,255));
          pixels_1.show();
        }
       

        
        delay(1000);

         

      }
    }

}
