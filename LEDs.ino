/*
@Sm0k3Scr33n
MB Gabbard



*/
 
int redPin = 9;
int greenPin = 10;
int bluePin = 11;

int redPin2 =3;
int greenPin2 =5;
int bluePin2=6;
 
//uncomment this line if using a Common Anode LED
#define COMMON_ANODE
 
void setup()
{
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);  
  
  pinMode(redPin2, OUTPUT);
  pinMode(greenPin2, OUTPUT);
  pinMode(bluePin2, OUTPUT);
  
}
 
void loop()
{
  setColor(255,0,0);setColor2(255,0,0);//red
  setColor(255,0,0);setColor2(255,0,0);//red
  delay(200);
  setColor(255,255,255); setColor2(255,255,255);//white
  delay(200);
  setColor(0,0,255);setColor2(0,0,255);//blue
  delay(200);
    setColor(255,0,0);setColor2(255,0,0);
  delay(200);
  setColor(255,255,255); setColor2(255,255,255);
  delay(200);
  setColor(0,0,255);setColor2(0,0,255);
  delay(200);
    setColor(255,0,0);setColor2(255,0,0);
  delay(200);
  setColor(255,255,255); setColor2(255,255,255);
  delay(200);
  setColor(0,0,255);setColor2(0,0,255);
  delay(200);
  
  setColor(255,47,0);setColor2(255,47,0);
  delay(300);
  setColor(0,0,255);setColor2(0,0,255);
  delay(300);
   setColor(255,47,0);setColor2(255,47,0);
  delay(300);
  setColor(0,0,255);setColor2(0,0,255);
  delay(300);
  
  setColor(0,0,255);setColor2(255,47,0);
  delay(300);
  setColor(255,47,0);setColor2(0,0,255);
  delay(300);
   setColor(0,0,255);setColor2(255,47,0);
  delay(300);
  setColor(255,47,0);setColor2(0,0,255);
  delay(300);
 
  setColor(255,47,0);setColor2(255,47,0);
  delay(300);
  setColor(0,0,255);setColor2(0,0,255);
  delay(300);
   setColor(255,47,0);setColor2(255,47,0);
  delay(300);
  setColor(0,0,255);setColor2(0,0,255);
  delay(300);
  
  setColor(0,0,255);setColor2(255,47,0);
  delay(300);
  setColor(255,47,0);setColor2(0,0,255);
  delay(300);
   setColor(0,0,255);setColor2(255,47,0);
  delay(300);
  setColor(255,47,0);setColor2(0,0,255);
  delay(300);
 
 
  setColor(255,47,0);setColor2(255,47,0);
  delay(500);
  setColor(0,0,255);setColor2(0,0,255);
  delay(500);
  int countup =0;
   while(countup<20)
   {
  setColor(255,47,0);setColor2(0,47,255);//start orange-blue
  delay(5);
  
  
 int delays=1;
  int r = 255; int b = 0;int count =0;int g=47;
  int r2=0;int b2=255;int g2=47;//transition orange -blue to blue-orange
  while (count<255 ){
    
  setColor(r, g, b);
  setColor2(r2, g2, b2);
  b++;r=r-1;
  r2++;b2=b2-1;count++;
  delay(delays);    
    } 
    
  setColor2(255,47,0);setColor(0,47,255); 
    delay(250);
     delays=1;
   r = 0;  b = 255; count =0; g=47;
   r2=255; b2=0; g2=47;//transition orange -blue to blue-orange
  while (count<255 ){
    
  setColor(r, g, b);
  setColor2(r2, g2, b2);
  r++;b=b-1;
  b2++;r2=r2-1;count++;
  delay(delays);    
    } 
    
   
  setColor(255,47,0);setColor2(0,47,255);//start orange-blue 
  delay(250);
  countup++;
   }
/*
  
   delays=5;
  r = 0;  b = 255; count =0; g=47;
   r2=255; b2=0; g2=47;
  while (count<255 ){
    
  setColor(r, g, b);
  setColor2(r2, g2, b2);
  b++;r=r-1;
  r2++;b2=b2-1;count++;
  delay(delays);    
    } 
  
*/
int colorcount = 0;
while (colorcount<5){
  int delays=2;
  int r = 255; int b = 0;int count =0;int g=0;
  while (count<255 ){
  setColor(r, g, b);  setColor2(r, g, b);
  g++;r=r-1;delay(delays);count++;
     
    }
    
     r = 0;  b = 0; count =0; g=255;
  while (count<255 ){
  setColor(r, g, b);  setColor2(r, g, b);
  b++;g=g-1;delay(delays);count++;
     
    }
    r = 0; b = 255;count =0; g=0;
 while (count<255 ){
  setColor(r, g, b);  setColor2(r, g, b);
  r++;b=b-1;delay(delays);count++;
     setColor(255, 0, 0);  // red
 
    }    
colorcount++;}
    
}
 
void setColor(int red, int green, int blue)
{
  #ifdef COMMON_ANODE
    red = 255 - red;
    green = 255 - green;
    blue = 255 - blue;
  #endif
  analogWrite(redPin, red);
  analogWrite(greenPin, green);
  analogWrite(bluePin, blue);  
}

void setColor2(int red, int green, int blue)
{
  #ifdef COMMON_ANODE
    red = 255 - red;
    green = 255 - green;
    blue = 255 - blue;
  #endif
  analogWrite(redPin2, red);
  analogWrite(greenPin2, green);
  analogWrite(bluePin2, blue);  
}
