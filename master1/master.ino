#include <Wire.h>

String inputString = "";         // a string to hold incoming data
boolean stringComplete = false;  // whether the string is complete
String commandString = "";
String buttonString="";

char c;

boolean isConnected = false;

void setup()
{
  Wire.begin();  // haberleşme master olarak başlatıldı
  Serial.begin(9600);
}

void loop()
{
  panelBul();
  if(stringComplete)
  {
   stringComplete = false;
   
   if(commandString.equals("LED1"))
  {
    if(buttonString.equals("a"))
      {
        Wire.beginTransmission(1);// Slave 1' veri gönderiliyor
        Wire.write("a");  // string veri gönderiliyor
        Wire.endTransmission(); 
      }
      
    else if(buttonString.equals("b"))
      {
        Wire.beginTransmission(1);// Slave 1' veri gönderiliyor
        Wire.write("b");  // string veri gönderiliyor
        Wire.endTransmission(); 
      }
    else if(buttonString.equals("1"))
      {
        Wire.beginTransmission(1);// Slave 1' veri gönderiliyor
        Wire.write("1");  // string veri gönderiliyor
        Wire.endTransmission();
      }
    else if(buttonString.equals("2"))
      {
        Wire.beginTransmission(1);// Slave 1' veri gönderiliyor
        Wire.write("2");  // string veri gönderiliyor
        Wire.endTransmission();
      }
    else if(buttonString.equals("3"))
      {
        Wire.beginTransmission(1);// Slave 1' veri gönderiliyor
        Wire.write("3");  // string veri gönderiliyor
        Wire.endTransmission();
      }
    else if(buttonString.equals("4"))
      {
        Wire.beginTransmission(1);// Slave 1' veri gönderiliyor
        Wire.write("4");  // string veri gönderiliyor
        Wire.endTransmission();
      }
    else if(buttonString.equals("5"))
      {
        Wire.beginTransmission(1);// Slave 1' veri gönderiliyor
        Wire.write("5");  // string veri gönderiliyor
        Wire.endTransmission();
      }
     else if(buttonString.equals("6"))
      {
        Wire.beginTransmission(1);// Slave 1' veri gönderiliyor
        Wire.write("6");  // string veri gönderiliyor
        Wire.endTransmission();
      }
     else if(buttonString.equals("7"))
      {
        Wire.beginTransmission(1);// Slave 1' veri gönderiliyor
        Wire.write("7");  // string veri gönderiliyor
        Wire.endTransmission();
      }  
     else if(buttonString.equals("8"))
      {
        Wire.beginTransmission(1);// Slave 1' veri gönderiliyor
        Wire.write("8");  // string veri gönderiliyor
        Wire.endTransmission();
      }
     else if(buttonString.equals("9"))
      {
        Wire.beginTransmission(1);// Slave 1' veri gönderiliyor
        Wire.write("9");  // string veri gönderiliyor
        Wire.endTransmission();
      }
     else if(buttonString.equals("c"))
      {
        Wire.beginTransmission(1);// Slave 1' veri gönderiliyor
        Wire.write("c");  // string veri gönderiliyor
        Wire.endTransmission();
      }
     else if(buttonString.equals("d"))
      {
        Wire.beginTransmission(1);// Slave 1' veri gönderiliyor
        Wire.write("d");  // string veri gönderiliyor
        Wire.endTransmission();
      }
      else if(buttonString.equals("0"))
      {
        Wire.beginTransmission(1);// Slave 1' veri gönderiliyor
        Wire.write("0");  // string veri gönderiliyor
        Wire.endTransmission();
      } 
   }
/////////////////////////////////////////////////
if(commandString.equals("LED2"))
  {
    if(buttonString.equals("a"))
      {
        Wire.beginTransmission(2);// Slave 1' veri gönderiliyor
        Wire.write("a");  // string veri gönderiliyor
        Wire.endTransmission(); 
      }
      
    else if(buttonString.equals("b"))
      {
        Wire.beginTransmission(2);// Slave 2' veri gönderiliyor
        Wire.write("b");  // string veri gönderiliyor
        Wire.endTransmission(); 
      }
    else if(buttonString.equals("1"))
      {
        Wire.beginTransmission(2);// Slave 2' veri gönderiliyor
        Wire.write("1");  // string veri gönderiliyor
        Wire.endTransmission();
      }
    else if(buttonString.equals("2"))
      {
        Wire.beginTransmission(2);// Slave 2' veri gönderiliyor
        Wire.write("2");  // string veri gönderiliyor
        Wire.endTransmission();
      }
    else if(buttonString.equals("3"))
      {
        Wire.beginTransmission(2);// Slave 2' veri gönderiliyor
        Wire.write("3");  // string veri gönderiliyor
        Wire.endTransmission();
      }
    else if(buttonString.equals("4"))
      {
        Wire.beginTransmission(2);// Slave 2' veri gönderiliyor
        Wire.write("4");  // string veri gönderiliyor
        Wire.endTransmission();
      }
    else if(buttonString.equals("5"))
      {
        Wire.beginTransmission(2);// Slave 2' veri gönderiliyor
        Wire.write("5");  // string veri gönderiliyor
        Wire.endTransmission();
      }
     else if(buttonString.equals("6"))
      {
        Wire.beginTransmission(2);// Slave 2' veri gönderiliyor
        Wire.write("6");  // string veri gönderiliyor
        Wire.endTransmission();
      }
     else if(buttonString.equals("7"))
      {
        Wire.beginTransmission(2);// Slave 2' veri gönderiliyor
        Wire.write("7");  // string veri gönderiliyor
        Wire.endTransmission();
      }  
     else if(buttonString.equals("8"))
      {
        Wire.beginTransmission(2);// Slave 2' veri gönderiliyor
        Wire.write("8");  // string veri gönderiliyor
        Wire.endTransmission();
      }
     else if(buttonString.equals("9"))
      {
        Wire.beginTransmission(2);// Slave 2' veri gönderiliyor
        Wire.write("9");  // string veri gönderiliyor
        Wire.endTransmission();
      }
     else if(buttonString.equals("c"))
      {
        Wire.beginTransmission(2);// Slave 2' veri gönderiliyor
        Wire.write("c");  // string veri gönderiliyor
        Wire.endTransmission();
      }
     else if(buttonString.equals("d"))
      {
        Wire.beginTransmission(2);// Slave 2' veri gönderiliyor
        Wire.write("d");  // string veri gönderiliyor
        Wire.endTransmission();
      }
      else if(buttonString.equals("0"))
      {
        Wire.beginTransmission(2);// Slave 2' veri gönderiliyor
        Wire.write("0");  // string veri gönderiliyor
        Wire.endTransmission();
      } 
   }
///////////////////////////////////////
if(commandString.equals("LED3"))
  {
    if(buttonString.equals("a"))
      {
        Wire.beginTransmission(3);// Slave 3' veri gönderiliyor
        Wire.write("a");  // string veri gönderiliyor
        Wire.endTransmission(); 
      }
      
    else if(buttonString.equals("b"))
      {
        Wire.beginTransmission(3);// Slave 3' veri gönderiliyor
        Wire.write("b");  // string veri gönderiliyor
        Wire.endTransmission(); 
      }
    else if(buttonString.equals("1"))
      {
        Wire.beginTransmission(3);// Slave 3' veri gönderiliyor
        Wire.write("1");  // string veri gönderiliyor
        Wire.endTransmission();
      }
    else if(buttonString.equals("2"))
      {
        Wire.beginTransmission(3);// Slave 3' veri gönderiliyor
        Wire.write("2");  // string veri gönderiliyor
        Wire.endTransmission();
      }
    else if(buttonString.equals("3"))
      {
        Wire.beginTransmission(3);// Slave 3' veri gönderiliyor
        Wire.write("3");  // string veri gönderiliyor
        Wire.endTransmission();
      }
    else if(buttonString.equals("4"))
      {
        Wire.beginTransmission(3);// Slave 3' veri gönderiliyor
        Wire.write("4");  // string veri gönderiliyor
        Wire.endTransmission();
      }
    else if(buttonString.equals("5"))
      {
        Wire.beginTransmission(3);// Slave 3' veri gönderiliyor
        Wire.write("5");  // string veri gönderiliyor
        Wire.endTransmission();
      }
     else if(buttonString.equals("6"))
      {
        Wire.beginTransmission(3);// Slave 3' veri gönderiliyor
        Wire.write("6");  // string veri gönderiliyor
        Wire.endTransmission();
      }
     else if(buttonString.equals("7"))
      {
        Wire.beginTransmission(3);// Slave 3' veri gönderiliyor
        Wire.write("7");  // string veri gönderiliyor
        Wire.endTransmission();
      }  
     else if(buttonString.equals("8"))
      {
        Wire.beginTransmission(3);// Slave 3' veri gönderiliyor
        Wire.write("8");  // string veri gönderiliyor
        Wire.endTransmission();
      }
     else if(buttonString.equals("9"))
      {
        Wire.beginTransmission(3);// Slave 3' veri gönderiliyor
        Wire.write("9");  // string veri gönderiliyor
        Wire.endTransmission();
      }
     else if(buttonString.equals("c"))
      {
        Wire.beginTransmission(3);// Slave 3' veri gönderiliyor
        Wire.write("c");  // string veri gönderiliyor
        Wire.endTransmission();
      }
     else if(buttonString.equals("d"))
      {
        Wire.beginTransmission(3);// Slave 3' veri gönderiliyor
        Wire.write("d");  // string veri gönderiliyor
        Wire.endTransmission();
      }
      else if(buttonString.equals("0"))
      {
        Wire.beginTransmission(3);// Slave 3' veri gönderiliyor
        Wire.write("0");  // string veri gönderiliyor
        Wire.endTransmission();
      } 
   }
////////////////////////////////////////////
if(commandString.equals("LED4"))
  {
    if(buttonString.equals("a"))
      {
        Wire.beginTransmission(4);// Slave 4' veri gönderiliyor
        Wire.write("a");  // string veri gönderiliyor
        Wire.endTransmission(); 
      }
      
    else if(buttonString.equals("b"))
      {
        Wire.beginTransmission(4);// Slave 4' veri gönderiliyor
        Wire.write("b");  // string veri gönderiliyor
        Wire.endTransmission(); 
      }
    else if(buttonString.equals("1"))
      {
        Wire.beginTransmission(4);// Slave 4' veri gönderiliyor
        Wire.write("1");  // string veri gönderiliyor
        Wire.endTransmission();
      }
    else if(buttonString.equals("2"))
      {
        Wire.beginTransmission(4);// Slave 4' veri gönderiliyor
        Wire.write("2");  // string veri gönderiliyor
        Wire.endTransmission();
      }
    else if(buttonString.equals("3"))
      {
        Wire.beginTransmission(4);// Slave 4' veri gönderiliyor
        Wire.write("3");  // string veri gönderiliyor
        Wire.endTransmission();
      }
    else if(buttonString.equals("4"))
      {
        Wire.beginTransmission(4);// Slave 4' veri gönderiliyor
        Wire.write("4");  // string veri gönderiliyor
        Wire.endTransmission();
      }
    else if(buttonString.equals("5"))
      {
        Wire.beginTransmission(4);// Slave 4' veri gönderiliyor
        Wire.write("5");  // string veri gönderiliyor
        Wire.endTransmission();
      }
     else if(buttonString.equals("6"))
      {
        Wire.beginTransmission(4);// Slave 4' veri gönderiliyor
        Wire.write("6");  // string veri gönderiliyor
        Wire.endTransmission();
      }
     else if(buttonString.equals("7"))
      {
        Wire.beginTransmission(4);// Slave 4' veri gönderiliyor
        Wire.write("7");  // string veri gönderiliyor
        Wire.endTransmission();
      }  
     else if(buttonString.equals("8"))
      {
        Wire.beginTransmission(4);// Slave 4' veri gönderiliyor
        Wire.write("8");  // string veri gönderiliyor
        Wire.endTransmission();
      }
     else if(buttonString.equals("9"))
      {
        Wire.beginTransmission(4);// Slave 4' veri gönderiliyor
        Wire.write("9");  // string veri gönderiliyor
        Wire.endTransmission();
      }
     else if(buttonString.equals("c"))
      {
        Wire.beginTransmission(4);// Slave 4' veri gönderiliyor
        Wire.write("c");  // string veri gönderiliyor
        Wire.endTransmission();
      }
     else if(buttonString.equals("d"))
      {
        Wire.beginTransmission(4);// Slave 4' veri gönderiliyor
        Wire.write("d");  // string veri gönderiliyor
        Wire.endTransmission();
      }
      else if(buttonString.equals("0"))
      {
        Wire.beginTransmission(4);// Slave 4' veri gönderiliyor
        Wire.write("0");  // string veri gönderiliyor
        Wire.endTransmission();
      } 
   }
  inputString = ""; 
}

}


void panelBul()
{
  if(inputString.length()>0)
  {
     commandString = inputString.substring(0,4); //LedPanel Bul
     buttonString =inputString.substring(5,6);   //Button name Bul
  }
}


void serialEvent() {
  while (Serial.available()>0) {
    // get the new byte:
    char inChar= (char)Serial.read();
    // add it to the inputString:
    inputString += inChar;
    // if the incoming character is a newline, set a flag
    // so the main loop can do something about it:
    if (inChar== '\n') {
      stringComplete = true;
    }
  }
}
