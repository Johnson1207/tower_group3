#include "fun_header.h"
#include "struct.h"


int **create_matrix2(int row, int cols)
{
// input rows and cols
// output a pointer to 2D mat[rows][cols]

    int **mat = (int **) malloc(sizeof(int *)*row);
    int i=0,j=0;
    for(i=0; i<row; i++)
        // Allocate array, store pointer
        mat[i] = (int *) malloc(sizeof(int)*cols);

    for(i=0; i<row; i++)
    {
        for(j=0; j<cols; j++)
        {
            mat[i][j]=0;
        }
    }
    return mat;
}

void print_mat(int **mat,int rows, int cols)
{

    int i=0,j=0;
    for(i=0; i<rows; i++)
    {
        for(j=0; j<cols; j++)
        {
            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void inpmap(int **map,int play,int num)
{
    int *fkey;
    int i,j;

    if(play==1)
    {
        if(num==0)
        {
            fkey=fopen("./map/play1/map.txt","w");
        }
        if(num==1)
        {
            fkey=fopen("./map/play1/map1.txt","w");
        }
        if(num==2)
        {
            fkey=fopen("./map/play1/map2.txt","w");
        }
        if(num==3)
        {
            fkey=fopen("./map/play1/map3.txt","w");
        }
    }
    if(play==2)
    {
        if(num==0)
        {
            fkey=fopen("./map/play2/map.txt","w");
        }
        if(num==1)
        {
            fkey=fopen("./map/play2/map1.txt","w");
        }
        if(num==2)
        {
            fkey=fopen("./map/play2/map2.txt","w");
        }
        if(num==3)
        {
            fkey=fopen("./map/play2/map3.txt","w");
        }
    }
    if(play==3)
    {
        if(num==0)
        {
            fkey=fopen("./map/play3/map.txt","w");
        }
        if(num==1)
        {
            fkey=fopen("./map/play3/map1.txt","w");
        }
        if(num==2)
        {
            fkey=fopen("./map/play3/map2.txt","w");
        }
        if(num==3)
        {
            fkey=fopen("./map/play3/map3.txt","w");
        }
    }
    for(i=0; i<13; i++)
    {
        for(j=0; j<13; j++)
        {
            fprintf(fkey,"%d ",map[i][j]);
        }
        fprintf(fkey,"\n");
    }
    fclose(fkey);

}

void getmap(int **map,int play,int num)
{
    int *fkey;
    int i,j;

    if(play==0)
    {
        if(num==0)
        {
            fkey=fopen("./map/org/map.txt","r");
        }
        if(num==1)
        {
            fkey=fopen("./map/org/map1.txt","r");
        }
        if(num==2)
        {
            fkey=fopen("./map/org/map2.txt","r");
        }
        if(num==3)
        {
            fkey=fopen("./map/org/map3.txt","r");
        }
    }
    if(play==1)
    {
        if(num==0)
        {
            fkey=fopen("./map/play1/map.txt","r");
        }
        if(num==1)
        {
            fkey=fopen("./map/play1/map1.txt","r");
        }
        if(num==2)
        {
            fkey=fopen("./map/play1/map2.txt","r");
        }
        if(num==3)
        {
            fkey=fopen("./map/play1/map3.txt","r");
        }
    }
    if(play==2)
    {
        if(num==0)
        {
            fkey=fopen("./map/play2/map.txt","r");
        }
        if(num==1)
        {
            fkey=fopen("./map/play2/map1.txt","r");
        }
        if(num==2)
        {
            fkey=fopen("./map/play2/map2.txt","r");
        }
        if(num==3)
        {
            fkey=fopen("./map/play2/map3.txt","r");
        }
    }
    if(play==3)
    {
        if(num==0)
        {
            fkey=fopen("./map/play3/map.txt","r");
        }
        if(num==1)
        {
            fkey=fopen("./map/play3/map1.txt","r");
        }
        if(num==2)
        {
            fkey=fopen("./map/play3/map2.txt","r");
        }
        if(num==3)
        {
            fkey=fopen("./map/play3/map3.txt","r");
        }
    }
    for(i=0; i<13; i++)
    {
        for(j=0; j<13; j++)
        {
            fscanf(fkey,"%d ",&map[i][j]);
        }
    }

    fclose(fkey);

}

void getsta(int *pla[],int play)
{
    int *fkey;
    int i,j;

    if(play==0)
    {
        fkey=fopen("./map/org/stat.txt","r");
    }
    if(play==1)
    {
        fkey=fopen("./map/play1/stat1.txt","r");
    }
    if(play==2)
    {
        fkey=fopen("./map/play2/stat2.txt","r");
    }
    if(play==3)
    {
        fkey=fopen("./map/play3/stat3.txt","r");
    }

    for(i=0; i<13; i++)
    {
        fscanf(fkey,"%d",&pla[i]);
    }
    fclose(fkey);

    return player;
}

void inpsta(it player,int play)
{
    int *fkey;
    int i,j;

    if(play==1)
    {
        fkey=fopen("./map/play1/stat1.txt","w");
    }
    if(play==2)
    {
        fkey=fopen("./map/play2/stat2.txt","w");
    }
    if(play==3)
    {
        fkey=fopen("./map/play3/stat3.txt","w");
    }
    fprintf(fkey,"%d\n",player.cordx);
    fprintf(fkey,"%d\n",player.cordy);
    fprintf(fkey,"%d\n",player.life);
    fprintf(fkey,"%d\n",player.num_key);
    fprintf(fkey,"%d\n",player.attack);
    fprintf(fkey,"%d\n",player.number);
    fprintf(fkey,"%d\n",player.times);
    fprintf(fkey,"%d\n",player.win);
    fprintf(fkey,"%d\n",player.lose);
    fprintf(fkey,"%d\n",player.def);
    fprintf(fkey,"%d\n",player.level);
    fprintf(fkey,"%d\n",player.moves);
    fprintf(fkey,"%d\n",player.judge);
    //fprintf(fkey,"%d\n",player.name);

    fclose(fkey);

}


