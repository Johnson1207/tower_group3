#ifndef struct item
typedef struct item{
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


}it;

#endif

#ifndef struct item
typedef struct monster{

    int life;
    int attack;
    int times;
    int def;
    char name[20] ;


}mon;

#endif



#ifndef struct line
typedef struct  line
{

    int **cordx;
    int **cordy;
    int **number;


}li;

#endif
