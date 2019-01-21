#include "struct.h"
#include "fun_header.h"

int mouse(it player,int x,int y)
{
    int maptype;
    ary grade[8];
    char nam[20];
    int num=10;
    strcpy(nam,"kelly");

    if( (x>240 && x<440) && (y>190 && y<240) )
    {
        maptype=0;
        game(maptype);
        //printf("\nfuture\n");
    }
    if( (x>240 && x<440) && (y>255 && y<315) )
    {
        load();
        //printf("\nload\n");
    }
    if( (x>240 && x<440) && (y>330 && y<380) )
    {
        //printf("\nGRADE\n");
        past(grade,nam,num);
    }
}

void mapload(int x,int y)
{
    int maptype;
    if((x>300 && x<400) && (y>150 && y<180) )
    {
        maptype=1;
        game(maptype);
        //printf("\nloadA\n");
    }
    if((x>300 && x<400) && (y>190 && y<220) )
    {
        maptype=2;
        game(maptype);
        //printf("\nloadB\n");
    }
    if((x>300 && x<400) && (y>240 && y<270) )
    {
        maptype=3;
        game(maptype);
        //printf("\nloadC\n");
    }
}

void savemouse(int x,int y,int *maptype)
{
    if((x>300 && x<400) && (y>145 && y<175) )
    {
        *maptype=1;
        //printf("\nloadA\n");
    }
    if((x>300 && x<400) && (y>190 && y<220) )
    {
        *maptype=2;
        //printf("\nloadB\n");
    }
    if((x>300 && x<400) && (y>240 && y<270) )
    {
        *maptype=3;
        //printf("\nloadC\n");
    }
}
