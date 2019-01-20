#ifndef struct item
typedef struct item
{
    int cordx;
    int cordy;
    int life;
    int energy;
    int num_key;
    int num_blue;
    int num_red;
    int attack;
    int number;
    int num_shield;
    int num_sword;
    int num_snow;
    int times;
    int win;
    int lose;
    int def;
    int level;
    int moves;
    int judge;
    char name[20] ;


} it;
it player;

#endif

#ifndef struct item
typedef struct monster
{

    int life;
    int attack;
    int times;
    int def;
    char name[20] ;


} mon;
mon girl;
mon bat;
mon skull;
mon boss2;
mon boss3;

#endif



#ifndef struct line
typedef struct  line
{

    int **cordx;
    int **cordy;
    int **number;


} li;

li map;
li map2;
li map3;
li map_store1;

#endif
