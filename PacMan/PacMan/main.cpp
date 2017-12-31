/*Begining of Auto generated code by Atmel studio */
//#include <Arduino.h>
#include <string.h>

/*End of auto generated code by Atmel studio */

//ANIMATED PACMAN GHOST LED

#include "FastLED.h"
//Beginning of Auto generated function prototypes by Atmel Studio
//End of Auto generated function prototypes by Atmel Studio



#define NUM_LEDS 196

#define DATA_PIN 3

CRGB leds[NUM_LEDS];

void setup() {
  delay(2000);
  FastLED.addLeds<WS2811, DATA_PIN, RGB>(leds, NUM_LEDS);
  FastLED.setBrightness(40); //Number 0-255
  FastLED.clear();
}

// zoid ghost always white
unsigned char zoid_always_black[] = {112, 125, 139, 126, 140, 153, 154, 155, 166, 167, 168, 169, 170, 179, 180, 181, 182, 183, 184, 185, 186, 191, 192, 193, 194, 195}; //upr
unsigned char zoid_eyes_white_l[] = {86, 87, 107, 108, 109, 110, 113, 114, 115, 116, 135, 136, 137, 138, 142, 143}; //upr
unsigned char zoid_eyes_white_r[] = {92, 93, 101, 102, 103, 104, 119, 120, 121, 122, 129, 130, 131, 132, 148, 149};	//upr
//looking left
//unsigned char  eyes_pixels_l[] = {17, 20, 21, 24, 37, 38, 39, 40, 41, 47, 48, 49, 94, 102, 103, 106, 119, 120, 121, 122, 123, 129, 130, 131};
//int pupils_pixels_l[] = {15, 16, 22, 23, 92, 93, 104, 105};
unsigned char zoid_pupils_l[] = {109, 110, 113, 114, 103, 104, 119, 120};  //upr
//looking right
//int eyes_pixels_r[] = {38, 39, 40, 46, 47, 48, 49, 50, 63, 66, 67, 75, 120, 121, 122, 128, 129, 130, 131, 132, 145, 148, 149, 152};
//int pupils_pixels_r[] = {64, 65, 76, 77, 146, 147, 153, 154};

unsigned char zoid_pupils_r[] = {107, 108, 115, 116, 101, 102, 121, 122};  //upr
	
//remove pixels around feet
//int void_pixels_1[] = {8, 29, 30, 31, 83, 84, 85, 86, 138, 139, 140, 161};
//int void_pixels_2[] = {7, 31, 55, 56, 57, 112, 113, 114, 138, 162};

unsigned char zoid_void_pixels_1[] = {1, 2, 3, 6, 7, 10, 11, 12, 16, 20, 21, 25};
unsigned char zoid_void_pixels_2[] = {0, 3, 4, 5, 8, 9, 10, 13, 18, 23};

// int zoid_ghost[] = {11, 26, 35, 48, 49, 53, 60, 64, 65, 80, 89, 104, 105, 109, 116, 120, 121, 134, 143, 158};
unsigned char bad_eyes_mouth[] = {43, 46, 47, 50, 51, 54, 58, 59, 62, 63, 66, 67, 102, 103, 106, 107, 116, 117, 120, 121};
	
int eyes_seconds = 2;
int reg_ghost_seconds = 10;

int feet_delay = 120; //delay in ms b/w feet v1 v2
//int eye_loop = (eyes_seconds*1000)/feet_delay; // how many times to look left and right before switching 
int eye_loop = 16;
// int reg_ghost_loop = reg_ghost_seconds/eyes_seconds; 
int reg_ghost_loop = 4;
int zoid_ghost_loop = 50;
int zoid_ghost_blink_loop = 10;

int bad_ghost_loop = 30;
int bad_ghost_blink_loop = 20;

unsigned char pacg_always_black[] = {0, 1, 2, 3, 4, 11, 12, 13, 14, 15, 25, 26, 27, 28, 29, 41, 42, 54, 55, 56, 83, 84, 111, 112, 126, 153, 154, 155, 166, 167, 168, 169, 170, 179, 180, 181, 182, 183, 184, 185, 186, 187, 188, 189, 190, 193, 194, 195}; //upr
unsigned char pacg_ph1_black[] = {16, 17, 37, 38, 39, 40, 43, 44, 45, 46, 47, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 89, 90, 91, 92, 93, 94, 95, 96, 97,
	98, 99, 100, 101, 102, 103, 104, 105, 119, 120, 121, 122, 123, 124, 125, 127, 128, 129, 130, 131, 149, 150, 151, 152, 156, 157}; //upr
unsigned char pacg_ph1_body[] = {5, 6, 7, 8, 9, 19, 20, 21, 22, 23, 24, 30, 31, 32, 33, 34, 35, 36, 48, 49, 50, 51, 52, 53, 57, 58, 59, 61, 62, 78, 79, 80, 81, 82, 85, 86, 87, 88,
	106, 107, 108, 109, 110, 115, 118, 132, 135, 136, 144, 145, 147, 148, 159, 160, 161, 174, 175, 176, 177}; //upr
unsigned char pacg_ph1_lips[] = {10, 18, 113, 114, 137, 138, 139, 140, 141, 143, 158, 162, 163, 165, 171, 172, 173, 178, 191, 192};  //upr
unsigned char pacg_ph1_mouth[] = {60, 116, 133, 134, 146}; //upr
unsigned char pacg_ph1_eyes[] = {117, 142, 164};  //upr

unsigned char pacg_ph2_black[] = {10, 178}; //upr
unsigned char pacg_ph2_body[] = {16, 17, 18, 37, 38, 39, 40, 45, 46, 47, 63, 64, 119, 120, 129, 130, 131, 146, 149, 150, 151, 152, 156, 157, 158}; //upr
unsigned char pacg_ph2_lips[] =	{43, 44, 127, 128}; //upr

unsigned char pacg_ph3_body[] = {43, 44, 65, 66, 67, 68, 69, 71, 72, 73, 74, 75, 76, 77, 89, 90, 91, 92, 93, 94, 95, 99, 100, 101, 102, 103, 104, 105, 121, 122, 123, 124, 125,
	127, 128, 133, 134}; //upr
unsigned char pacg_ph3_lips[] =	{70, 96, 97, 98}; //upr
unsigned char pacg_ph3_mouth[] = {117, 118}; //upr
	
unsigned char pacg_ph4_black[] = {65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 121, 122, 123, 124, 125};
unsigned char pacg_ph4_eyes[] = {117};
unsigned char pacg_ph4_mouth[] = {133, 134}; 
unsigned char pacg_ph4_lips[] =	{43, 44, 127, 128};
unsigned char pacg_ph4_body[] = {133, 134};
int pac_girl_loop = 20;



void loop() {
	int i,j,k;
	
	FastLED.clear();
	
    for(int k = 0; k < reg_ghost_loop; k++){

        for(j = 0; j < eye_loop; j++){				// looking left

            //fill body
            fill_solid(leds, NUM_LEDS, CRGB::Red);
			
			//set white pixels
			for (int i = 0; i < sizeof(zoid_always_black); i++){
				leds[zoid_always_black[i]] = CRGB::Black;
			}       
            //set white pixels eyes 
            for (int i = 0; i < sizeof(zoid_eyes_white_l); i++){
                leds[zoid_eyes_white_l[i]] = CRGB::White;	// left eye
				leds[zoid_eyes_white_r[i]] = CRGB::White;	// right eye
            }
            
            //set pupil
            for (int i = 0; i < sizeof(zoid_pupils_l); i++){
                leds[zoid_pupils_l[i]] = CRGB::DarkBlue;
            }
            //remove around feet (v1)
            for (int i = 0; i < sizeof(zoid_void_pixels_1); i++){
                leds[zoid_void_pixels_1[i]] = CRGB::Black;
            }
            FastLED.show();
        
            delay(feet_delay);

			//fill body
			fill_solid(leds, NUM_LEDS, CRGB::Red);
			            
			//set white pixels
			for (int i = 0; i < sizeof(zoid_always_black); i++){
				leds[zoid_always_black[i]] = CRGB::Black;
			}
			//set white pixels eyes
			for (int i = 0; i < sizeof(zoid_eyes_white_l); i++){
				leds[zoid_eyes_white_l[i]] = CRGB::White;	// left eye
				leds[zoid_eyes_white_r[i]] = CRGB::White;	// right eye
			}
			            
			//set pupil
			for (int i = 0; i < sizeof(zoid_pupils_l); i++){
				leds[zoid_pupils_l[i]] = CRGB::DarkBlue;
			}           
          
            //remove around feet (v2)
            for (int i = 0; i < sizeof(zoid_void_pixels_2); i++){
                leds[zoid_void_pixels_2[i]] = CRGB::Black;
            }
        
            FastLED.show();
        
            delay(feet_delay);

        }

        for(j = 0; j < eye_loop; j++){			// looking right
        
			//fill body
			fill_solid(leds, NUM_LEDS, CRGB::Red);
		
			//set white pixels
			for (int i = 0; i < sizeof(zoid_always_black); i++){
				leds[zoid_always_black[i]] = CRGB::Black;
			}
			//set white pixels eyes
			for (int i = 0; i < sizeof(zoid_eyes_white_l); i++){
				leds[zoid_eyes_white_l[i]] = CRGB::White;	// left eye
				leds[zoid_eyes_white_r[i]] = CRGB::White;	// right eye
			}
		
			//set pupil
			for (int i = 0; i < sizeof(zoid_pupils_r); i++){
				leds[zoid_pupils_r[i]] = CRGB::DarkBlue;
			}
			//remove around feet (v1)
			for (int i = 0; i < sizeof(zoid_void_pixels_1); i++){
				leds[zoid_void_pixels_1[i]] = CRGB::Black;
			}
			FastLED.show();
		
			delay(feet_delay);

			//fill body
			fill_solid(leds, NUM_LEDS, CRGB::Red);
		
			//set white pixels
			for (int i = 0; i < sizeof(zoid_always_black); i++){
				leds[zoid_always_black[i]] = CRGB::Black;
			}
			//set white pixels eyes
			for (int i = 0; i < sizeof(zoid_eyes_white_l); i++){
				leds[zoid_eyes_white_l[i]] = CRGB::White;	// left eye
				leds[zoid_eyes_white_r[i]] = CRGB::White;	// right eye
			}
		
			//set pupil
			for (int i = 0; i < sizeof(zoid_pupils_r); i++){
				leds[zoid_pupils_r[i]] = CRGB::DarkBlue;
			}
		
			//remove around feet (v2)
			for (int i = 0; i < sizeof(zoid_void_pixels_2); i++){
				leds[zoid_void_pixels_2[i]] = CRGB::Black;
			}
		
			FastLED.show();
		
			delay(feet_delay);
   
		}
    }
	
	
	// bad
	for(int k = 0; k < bad_ghost_loop; k++){

		//fill body
		fill_solid(leds, NUM_LEDS, CRGB::DarkBlue);
			
		//set white pixels
		for (int i = 0; i < sizeof(zoid_always_black); i++){
			leds[zoid_always_black[i]] = CRGB::Black;
		}
		//set eyes and mouth
		for (int i = 0; i < sizeof(bad_eyes_mouth); i++){
			leds[bad_eyes_mouth[i]] = CRGB::Yellow;	// 
		}

		//remove around feet (v1)
		for (int i = 0; i < sizeof(zoid_void_pixels_1); i++){
			leds[zoid_void_pixels_1[i]] = CRGB::Black;
		}
		FastLED.show();
			
		delay(feet_delay);

		//fill body
		fill_solid(leds, NUM_LEDS, CRGB::DarkBlue);
		
		//set white pixels
		for (int i = 0; i < sizeof(zoid_always_black); i++){
			leds[zoid_always_black[i]] = CRGB::Black;
		}
		//set eyes and mouth
		for (int i = 0; i < sizeof(bad_eyes_mouth); i++){
			leds[bad_eyes_mouth[i]] = CRGB::Yellow;	//
		}
		
		//remove around feet (v2)
		for (int i = 0; i < sizeof(zoid_void_pixels_2); i++){
			leds[zoid_void_pixels_2[i]] = CRGB::Black;
		}
			
		FastLED.show();
			
		delay(feet_delay);

	}
	
	// bad blink
	for(int k = 0; k < bad_ghost_blink_loop; k++){

		//fill body
		fill_solid(leds, NUM_LEDS, CRGB::DarkBlue);
		
		//set white pixels
		for (int i = 0; i < sizeof(zoid_always_black); i++){
			leds[zoid_always_black[i]] = CRGB::Black;
		}
		//set eyes and mouth
		for (int i = 0; i < sizeof(bad_eyes_mouth); i++){
			leds[bad_eyes_mouth[i]] = CRGB::Yellow;	//
		}

		//remove around feet (v1)
		for (int i = 0; i < sizeof(zoid_void_pixels_1); i++){
			leds[zoid_void_pixels_1[i]] = CRGB::Black;
		}
		FastLED.show();
		
		delay(feet_delay);

		//fill body
		fill_solid(leds, NUM_LEDS, CRGB::Yellow);
		
		//set white pixels
		for (int i = 0; i < sizeof(zoid_always_black); i++){
			leds[zoid_always_black[i]] = CRGB::Black;
		}
		//set eyes and mouth
		for (int i = 0; i < sizeof(bad_eyes_mouth); i++){
			leds[bad_eyes_mouth[i]] = CRGB::Red;	//
		}
		
		//remove around feet (v2)
		for (int i = 0; i < sizeof(zoid_void_pixels_2); i++){
			leds[zoid_void_pixels_2[i]] = CRGB::Black;
		}
		
		FastLED.show();
		
		delay(feet_delay);

	}


	
	// pac girl
	for (k = 0; k < pac_girl_loop; k++){
		FastLED.clear();
		
		for (i  = 0; i < sizeof(pacg_always_black); i ++) {
			leds[pacg_always_black[i]] = CRGB::Black;
		}
		for (i  = 0; i < sizeof(pacg_ph1_black); i ++) {
			leds[pacg_ph1_black[i]] = CRGB::Black;
		}
		for (i  = 0; i < sizeof(pacg_ph1_body); i ++) {
			leds[pacg_ph1_body[i]] = CRGB::Yellow;
		}
		for (i  = 0; i < sizeof(pacg_ph1_lips); i ++) {
			leds[pacg_ph1_lips[i]] = CRGB::Red;
		}
		for (i  = 0; i < sizeof(pacg_ph1_mouth); i ++) {
			leds[pacg_ph1_mouth[i]] = CRGB::Magenta;
		}
		for (i  = 0; i < sizeof(pacg_ph1_eyes); i ++) {
			leds[pacg_ph1_eyes[i]] = CRGB::Blue;
		}		
		FastLED.show();
		delay(200);
		
		
		for (i  = 0; i < sizeof(pacg_ph2_black); i ++) {
			leds[pacg_ph2_black[i]] = CRGB::Black;
		}
		for (i  = 0; i < sizeof(pacg_ph2_body); i ++) {
			leds[pacg_ph2_body[i]] = CRGB::Yellow;
		}
		for (i  = 0; i < sizeof(pacg_ph2_lips); i ++) {
			leds[pacg_ph2_lips[i]] = CRGB::Red;
		}		
		FastLED.show();
		delay(200);
	
	
		for (i  = 0; i < sizeof(pacg_ph3_body); i ++) {
			leds[pacg_ph3_body[i]] = CRGB::Yellow;
		}
		for (i  = 0; i < sizeof(pacg_ph3_lips); i ++) {
			leds[pacg_ph3_lips[i]] = CRGB::Red;
		}
		for (i  = 0; i < sizeof(pacg_ph3_mouth); i ++) {
			leds[pacg_ph3_mouth[i]] = CRGB::Magenta;
		}
		FastLED.show();
		delay(200);
	
		
		for (i  = 0; i < sizeof(pacg_ph4_black); i ++) {
			leds[pacg_ph4_black[i]] = CRGB::Black;
		}
		for (i  = 0; i < sizeof(pacg_ph4_body); i ++) {
			leds[pacg_ph4_body[i]] = CRGB::Yellow;
		}
		for (i  = 0; i < sizeof(pacg_ph4_lips); i ++) {
			leds[pacg_ph4_lips[i]] = CRGB::Red;
		}
		for (i  = 0; i < sizeof(pacg_ph4_mouth); i ++) {
			leds[pacg_ph4_mouth[i]] = CRGB::Magenta;
		}
		for (i  = 0; i < sizeof(pacg_ph4_eyes); i ++) {
			leds[pacg_ph4_eyes[i]] = CRGB::Blue;
		}
		FastLED.show();
		delay(200);
	}
	
	
	

}

