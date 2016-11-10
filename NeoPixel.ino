
void police_light(){
  if (lysteller > 200) {
    lysteller = 0;
    if (changecolor)
    changecolor = 0;
    else{
    changecolor = 1;
  }
    }
    else{
    lysteller ++;
    }
	if (changecolor) {
    strip.setPixelColor(0, 120, 0, 0);
    strip.setPixelColor(1, 0, 0, 120);  
    strip.setPixelColor(2, 0, 0, 120);
    strip.show();
	}
	
	else {
    strip.setPixelColor(0, 0, 0, 120);
    strip.setPixelColor(1, 120, 0, 0);  
    strip.setPixelColor(2, 120, 0, 0);
    strip.show();
	}
  }//end police_light

void ledOff()
{
    strip.setPixelColor(0, 0, 0, 0);
    strip.setPixelColor(1, 0, 0, 0);  
    strip.setPixelColor(2, 0, 0, 0); 
    strip.show();
  }

void oneNeo(int led, int red, int green, int blue){
  strip.setPixelColor(led, red, green, blue);
  strip.show();
}

void ledGreen()
{
    strip.setPixelColor(0, 0, 120, 0);
    strip.setPixelColor(1, 0, 120, 0);  
    strip.setPixelColor(2, 0, 120, 0);
    strip.show();
}


void ledRed()
{
    strip.setPixelColor(0, 120, 0, 0);
    strip.setPixelColor(1, 120, 0, 0);  
    strip.setPixelColor(2, 120, 0, 0);
    strip.show();
}
 /*
  *     
    strip.setPixelColor(0, 0, 0, 0);
    strip.setPixelColor(1, 0, 0, 0);  
    strip.setPixelColor(2, 0, 0, 0);
    strip.setPixelColor(3, 0, 0, 0);
    strip.setPixelColor(4, 0, 0, 0);
    strip.setPixelColor(5, 0, 0, 0);
    strip.setPixelColor(6, 0, 0, 0);  
    strip.setPixelColor(7, 0, 0, 0);
    strip.setPixelColor(8, 0, 0, 0);
    strip.setPixelColor(9, 0, 0, 0);
  *  
  */
