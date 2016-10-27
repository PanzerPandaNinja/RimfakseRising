


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
    strip.setPixelColor(0, 100, 0, 0);
    strip.setPixelColor(1, 100, 0, 0);  
    strip.setPixelColor(2, 100, 0, 0);
    //strip.setPixelColor(3, 0, 100, 0);
    //strip.setPixelColor(4, 0, 0, 100);
    //strip.setPixelColor(5, 0, 0, 100);
    //strip.setPixelColor(6, 0, 0, 100);  
    strip.show();
	}
	
	else {
    strip.setPixelColor(0, 0, 0, 100);
    strip.setPixelColor(1, 0, 0, 100);  
    strip.setPixelColor(2, 0, 0, 100);
    //strip.setPixelColor(3, 0, 0, 0);
    //strip.setPixelColor(4, 100, 0, 0);
    //strip.setPixelColor(5, 100, 0, 0);
    //strip.setPixelColor(6, 100, 0, 0);  

    strip.show();
	}
  }//end police_light

void ledOff()
{
    strip.setPixelColor(0, 0, 0, 0);
    strip.setPixelColor(1, 0, 0, 0);  
    strip.setPixelColor(2, 0, 0, 0);
    //strip.setPixelColor(3, 0, 0, 0);
    //strip.setPixelColor(4, 0, 0, 0);
    //strip.setPixelColor(5, 0, 0, 0);
    //strip.setPixelColor(6, 0, 0, 0);  

    strip.show();
  }

void oneNeo(int led, int red, int green, int blue){
  strip.setPixelColor(led, red, green, blue);
  strip.show();
}

void ledBlink()
{
  
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
