

int mouse(int x,int y)
{
    int maptype;

    if( (x>240 && x<440) && (y>170 && y<220) )
    {
        maptype=0;
        game(maptype);
        //printf("\nfuture\n");
    }
    if( (x>240 && x<440) && (y>230 && y<280) )
    {
        load();
        //printf("\nload\n");
    }
    if( (x>240 && x<440) && (y>290 && y<340) )
    {
        //printf("\nGRADE\n");
        past();
    }
}

void mapload(int x,int y)
{
    int maptype;
    if((x>300 && x<400) && (y>130 && y<160) )
    {
        maptype=1;
        game(maptype);
        //printf("\nloadA\n");
    }
    if((x>300 && x<400) && (y>170 && y<200) )
    {
        maptype=2;
        game(maptype);
        //printf("\nloadB\n");
    }
    if((x>300 && x<400) && (y>210 && y<240) )
    {
        maptype=3;
        game(maptype);
        //printf("\nloadC\n");
    }
}

void savemouse(int x,int y,int *maptype)
{
    if((x>300 && x<400) && (y>210 && y<240) )
    {
        *maptype=1;
        //printf("\nloadA\n");
    }
    if((x>300 && x<400) && (y>250 && y<280) )
    {
        *maptype=2;
        //printf("\nloadB\n");
    }
    if((x>300 && x<400) && (y>300 && y<330) )
    {
        *maptype=3;
        //printf("\nloadC\n");
    }
}
