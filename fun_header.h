#include <allegro5/allegro.h>
#include <allegro5/allegro_image.h>
#include <allegro5/allegro_primitives.h>
#include <allegro5/allegro_audio.h>
#include <allegro5/allegro_acodec.h>
#include <allegro5/allegro_ttf.h>
#include <allegro5/allegro_font.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>


#define MOVE 2

#define ROWSIZE 13
#define COLSIZE 13

#define DISPLAY_WIDTH   750
#define DISPLAY_HEIGHT  800

int overlap(int **a,int **b,int k, int l);
void reverse(int **a,int **b,int k,int l);
int **form_matrix(int rows, int cols);
void value(int **map_number,int rows,int cols);
void value2(int **map2_number,int rows,int cols);
void value3(int **map3_number,int rows,int cols);
void value_cord(int **cordx,int **cordy,int rows,int cols);
void swit(int **a,int **b,int**c, int k, int l,
          ALLEGRO_BITMAP* key, ALLEGRO_BITMAP* red, ALLEGRO_BITMAP* stone, ALLEGRO_BITMAP* blue,
          ALLEGRO_BITMAP* monster1, ALLEGRO_BITMAP* fight, ALLEGRO_FONT* pongFont, ALLEGRO_BITMAP* sword,
          ALLEGRO_BITMAP* snow, ALLEGRO_BITMAP* beaten, ALLEGRO_BITMAP* defend, ALLEGRO_BITMAP* stair12,
          ALLEGRO_BITMAP* stair21, ALLEGRO_BITMAP* stair23, ALLEGRO_BITMAP* stair32, ALLEGRO_BITMAP* door,
          ALLEGRO_BITMAP* monster2, ALLEGRO_BITMAP* monster3, ALLEGRO_BITMAP* monster4, ALLEGRO_BITMAP* monster5,
          ALLEGRO_SAMPLE *mbeat,ALLEGRO_SAMPLE *mdoor,ALLEGRO_SAMPLE *mdrug,ALLEGRO_SAMPLE *mkey,ALLEGRO_SAMPLE *mshield,
          ALLEGRO_SAMPLE *msnow,ALLEGRO_SAMPLE *msword, int girl_life, int bat_life, int skull_life, int boss2_life, int boss3_life);
void move_pg(ALLEGRO_KEYBOARD_STATE KBstate, ALLEGRO_BITMAP *pg);
void atta(ALLEGRO_FONT* pongFont, ALLEGRO_KEYBOARD_STATE KBstate, ALLEGRO_SAMPLE *mbeat);
void print(ALLEGRO_FONT* pongFont, ALLEGRO_BITMAP *pg);
