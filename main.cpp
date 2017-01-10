#include <allegro.h> 
#include <cstdlib>
#include <time.h>


int ball_x = 320;
int ball_y = 240;

int ball_tempX = 320;
int ball_tempY = 240;

int p1_x = 20;
int p1_y = 210;

int p1_tempX = 20;
int p1_tempY = 210;

int p2_x = 620;
int p2_y = 210;

int p2_tempX = 620;
int p2_tempY = 210;

time_t secs;  //The seconds on the system clock will be stored here
              //this will be used as the seed for srand()
              
int dir;      //This will keep track of the circles direction
              //1 = up and left, 2 = down and left, 3 = up and right, 4 = down and right
