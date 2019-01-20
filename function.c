
#include "fun_header.h"
#include "struct.h"


int overlap(int **a,int **b,int k, int l)
{



    if (
        (((a[k][l]-27)<= player.cordx) &&((a[k][l]+27)>= player.cordx) ) &&
        (((b[k][l]-30)<= player.cordy) &&((b[k][l]+27)>= player.cordy) )


    )
        return 1;
    else
        return 0;

}


void reverse(int **a,int **b,int k,int l)
{



    if(player.cordx>=a[k][l]+25)
    {
        player.cordx=a[k][l]+28;
    }
    else if (player.cordx<=a[k][l]-25)
    {
        player.cordx=a[k][l]-28;
    }


    if(player.cordy>=b[k][l]+25)
    {
        player.cordy=b[k][l]+28;
    }
    else if (player.cordy<=b[k][l]-28)
    {
        player.cordy=b[k][l]-40;
    }
}


int **form_matrix(int rows, int cols)
{
    int **mat = (int **) malloc(sizeof(int *)*rows);
    int i=0,j=0;
    for(i=0; i<rows; i++)
        mat[i] = (int *) malloc(sizeof(int)*cols);

    for(i=0; i<rows; i++)
    {
        for(j=0; j<cols; j++)
        {
            mat[i][j]=0;
        }
    }
    return mat;
}
void value(int **map_number,int rows,int cols)
{
    int k,i,j;
    int a[13][13]= {1,1,1,1,1,1,1,1,1,1,1,1,1,
                    1,4,14,0,0,0,3,1,4,5,0,3,1,
                    1,1,1,0,1,1,1,1,1,0,0,0,1,
                    1,0,0,0,0,0,0,0,1,0,0,0,1,
                    1,0,1,1,9,1,1,0,1,14,0,14,1,
                    1,0,1,4,7,7,1,0,1,7,0,7,1,
                    1,0,1,1,1,1,1,0,1,1,0,1,1,
                    1,0,0,0,0,0,0,0,9,0,0,0,1,
                    1,1,1,9,1,1,0,1,1,1,1,0,1,
                    1,2,6,14,3,1,0,1,2,7,7,7,1,
                    1,2,7,7,3,1,0,1,14,7,7,7,1,
                    1,10,7,7,3,1,0,1,4,14,8,2,1,
                    1,1,1,1,1,1,0,1,1,1,1,1,1
                   };

    for(i=0; i<ROWSIZE; i++)
    {
        for(j=0; j<COLSIZE; j++)
        {
            k=a[i][j];
            map_number[i][j]=k;
            printf("%d",map_number[i][j]);
        }
        printf("\n");
    }
}
void value2(int **map2_number,int rows,int cols)
{
    int k,i,j;
    int a[13][13]= {1,1,1,1,1,1,1,1,1,1,1,1,1,
                    1,14,0,0,1,7,4,7,1,0,0,15,1,
                    1,0,1,2,1,7,7,7,1,3,1,0,1,
                    1,0,1,2,1,1,9,1,1,3,1,0,1,
                    1,0,1,2,1,8,16,8,1,3,1,0,1,
                    1,0,1,2,1,8,8,8,1,3,1,0,1,
                    1,7,1,4,1,1,9,1,1,7,1,0,1,
                    1,0,1,3,1,7,6,7,1,2,1,0,1,
                    1,0,1,3,1,7,7,7,1,2,1,0,1,
                    1,0,1,3,1,1,14,1,1,2,1,0,1,
                    1,0,1,3,1,0,0,0,1,2,1,0,1,
                    1,11,1,0,0,0,0,0,0,0,1,12,1,
                    1,1,1,1,1,1,1,1,1,1,1,1,1
                   };

    for(i=0; i<ROWSIZE; i++)
    {
        for(j=0; j<COLSIZE; j++)
        {
            k=a[i][j];
            map2_number[i][j]=k;
            printf("%d",map2_number[i][j]);
        }
        printf("\n");
    }
}

void value3(int **map3_number,int rows,int cols)
{
    int k,i,j;
    int a[13][13]= {1,1,1,1,1,1,1,1,1,1,1,1,1,
                    1,8,1,6,0,17,0,6,1,7,7,7,1,
                    1,7,1,2,0,0,0,3,1,7,6,7,1,
                    1,2,1,3,0,0,0,2,1,7,7,7,1,
                    1,7,1,7,0,0,0,7,1,1,1,9,1,
                    1,7,1,1,1,9,1,1,1,0,9,0,1,
                    1,0,14,0,0,0,0,0,0,0,1,0,1,
                    1,7,1,1,9,1,1,1,1,1,1,0,1,
                    1,7,15,1,0,1,7,0,0,0,0,15,1,
                    1,1,1,1,0,1,0,1,0,1,1,1,1,
                    1,4,2,1,0,1,0,1,0,0,0,0,1,
                    1,2,2,9,0,0,0,1,0,1,1,13,1,
                    1,1,1,1,1,1,1,1,1,1,1,1,1
                   };
    for(i=0; i<ROWSIZE; i++)
    {
        for(j=0; j<COLSIZE; j++)
        {
            k=a[i][j];
            map3_number[i][j]=k;
            printf("%d",map3_number[i][j]);
        }
        printf("\n");
    }
}


void value_cord(int **cordx,int **cordy,int rows,int cols)
{
    int i,j;


    for(i=0; i<rows; i++)
    {
        for(j=0; j<cols; j++)
        {

            cordx[i][j]=50*j+10;
            cordy[i][j]=50*i+10;
            printf("%d,%d\t",cordx[i][j],cordy[i][j]);
        }
        printf("\n");
    }

}



void swit(int **a,int **b,int**c, int k, int l,
          ALLEGRO_BITMAP* key, ALLEGRO_BITMAP* red, ALLEGRO_BITMAP* stone, ALLEGRO_BITMAP* blue,
          ALLEGRO_BITMAP* monster1, ALLEGRO_BITMAP* fight, ALLEGRO_FONT* pongFont, ALLEGRO_BITMAP* sword,
          ALLEGRO_BITMAP* snow, ALLEGRO_BITMAP* beaten, ALLEGRO_BITMAP* defend, ALLEGRO_BITMAP* stair12,
          ALLEGRO_BITMAP* stair21, ALLEGRO_BITMAP* stair23, ALLEGRO_BITMAP* stair32, ALLEGRO_BITMAP* door,
          ALLEGRO_BITMAP* monster2, ALLEGRO_BITMAP* monster3, ALLEGRO_BITMAP* monster4, ALLEGRO_BITMAP* monster5)
{
    switch(a[k][l])
    {
    case 1:
        al_draw_bitmap(stone, b[k][l], c[k][l], 0);
        if(overlap(b, c, k, l))
        {

            reverse(b, c, k, l);

        }
        break;

    case 2:
        al_draw_bitmap(red, b[k][l], c[k][l], 0);
        if(overlap(b, c, k, l))
        {
            player.num_red += 1;
            player.life += 30;

            a[k][l] = 0;
        }
        break;

    case 3:
        al_draw_bitmap(blue, b[k][l], c[k][l],0);
        if(overlap(b, c, k, l))
        {
            player.num_blue += 1;
            player.life += 50;

            a[k][l] = 0;
        }

        break;

    case 4:
        al_draw_bitmap(key, b[k][l], c[k][l], 0);
        if(overlap(b, c, k, l))
        {
            player.num_key = player.num_key+1;
            a[k][l] = 0;
        }
        break;

    case 5:
        al_draw_bitmap(monster1, b[k][l], c[k][l], 0);
        if(overlap(b, c, k, l))
        {
            player.times = 1;
            player.cordx = b[k][l];
            player.cordy = c[k][l];
            al_draw_bitmap(fight, 60, 70, 0);
            if((player.life>0)&&(girl.life>0))
            {
                if(girl.times == 1) //girl has been attacked 1 time
                {
                    // al_draw_textf(pongFont, al_map_rgb(255, 0, 0), 480,160, -1,"girl attack");
                    al_draw_bitmap(beaten,90,150,0);
                    if(player.def > girl.attack)
                    {
                        player.life = player.life;
                    }
                    else
                    {
                        player.life = player.life - (girl.attack - player.def);
                    }
                    girl.times = 0;
                }
                al_draw_textf( pongFont, al_map_rgb(255, 0, 0), 460,150, -1, " %d", girl.life);
                al_draw_textf( pongFont, al_map_rgb(255, 255, 0), 460, 200, -1, " %d", girl.attack);
                al_draw_textf( pongFont, al_map_rgb(255, 0, 0), 260,150, -1, " %d", player.life);
                al_draw_textf( pongFont, al_map_rgb(255, 255, 0), 260, 200, -1, " %d", player.attack);
                al_draw_textf( pongFont, al_map_rgb(0, 0, 255), 460,250,-1, " %d",girl.def);
                al_draw_textf( pongFont, al_map_rgb(0, 0, 255), 260, 250, -1, " %d", player.def);

            }
            if(player.life <= 0)
            {
                player.lose += 1;
                //a[k][l] = 0;

            }
            if(girl.life <= 0)
            {
                //player.win += 1;
                a[k][l] = 0;
            }
        }

        break;

    case 6:
        al_draw_bitmap(sword, b[k][l], c[k][l], 0);
        if(overlap(b, c, k, l))
        {
            player.num_sword += 1;
            player.attack += 10;

            a[k][l] = 0;
        }
        break;

    case 7:
        al_draw_bitmap(snow, b[k][l], c[k][l], 0);
        if(overlap(b, c, k, l))
        {

            player.num_snow += 1;
            player.attack += 20;

            a[k][l] = 0;
        }
        break;

    case 8:
        al_draw_bitmap(defend, b[k][l], c[k][l], 0);
        if(overlap(b, c, k, l))
        {
            player.num_shield += 1;
            player.def += 10;

            a[k][l] = 0;
        }
        break;

    case 9:
        al_draw_bitmap(door, b[k][l], c[k][l], 0);
        if(overlap(b, c, k, l))
        {
            if(player.num_key > 0)
            {
                player.num_key -= 1;
                a[k][l] = 0;
            }
            else
            {
                reverse(b, c, k, l);
            }
        }
        break;

    case 10:
        al_draw_bitmap(stair12, b[k][l], c[k][l], 0);
        if(overlap(b, c, k, l))
        {
            player.level = 2;
            for(k=0; k<ROWSIZE; k++)
            {
                for(l=0; l<COLSIZE; l++)
                {
                    map_store1.number[k][l] = map.number[k][l];//store map1

                    map.number[k][l] = map2.number[k][l];
                    map2.number[k][l] = map.number[k][l];//store map2
                    // printf("%d",map_store1.number[k][l]);
                }//printf("\n");
            }
            player.cordy -= 40;
        }
        break;

    case 11:
        al_draw_bitmap(stair21,b[k][l], c[k][l], 0);
        if(overlap(b, c, k, l))
        {
            player.level = 1;
            for(k=0; k<ROWSIZE; k++)
            {
                for(l=0; l<COLSIZE; l++)
                {
                    map2.number[k][l] = map.number[k][l];//store map2

                    map.number[k][l] = map_store1.number[k][l];

                }
                printf("\n");

            }
            player.cordy -= 40;
        }
        break;

    case 12:
        al_draw_bitmap(stair23, b[k][l], c[k][l], 0);
        if(overlap(b, c, k, l))
        {
            player.level = 3;
            for(k=0; k<ROWSIZE; k++)
            {
                for(l=0; l<COLSIZE; l++)
                {
                    map2.number[k][l] = map.number[k][l];//store map2
                    map.number[k][l] = map3.number[k][l];
                    map3.number[k][l] = map.number[k][l];//store map3
                }

            }
            player.cordy -= 40;
        }
        break;

    case 13:
        al_draw_bitmap(stair32, b[k][l], c[k][l], 0);
        if(overlap(b, c, k, l))
        {
            player.level=2;
            for(k=0; k<ROWSIZE; k++)
            {
                for(l=0; l<COLSIZE; l++)
                {
                    map3.number[k][l] = map.number[k][l];//store map3

                    map.number[k][l] = map2.number[k][l];
                    // printf("%d",map_store2.number[k][l]);
                }//printf("\n");

            }
        }
        break;

    case 14:
        al_draw_bitmap(monster2, b[k][l], c[k][l], 0);
        if(overlap(b, c, k, l))
        {
            player.times = 2;
            player.cordx = b[k][l];
            player.cordy = c[k][l];
            al_draw_bitmap(fight, 60, 70, 0);
            if((player.life>0)&&(bat.life>0))
            {
                if(bat.times == 1) //girl has been attacked 1 time
                {
                    // al_draw_textf(pongFont, al_map_rgb(255, 0, 0), 480,160, -1,"girl attack");
                    al_draw_bitmap(beaten,90,150,0);
                    if(player.def > bat.attack)
                    {
                        player.life = player.life;
                    }
                    else
                    {
                        player.life = player.life - (bat.attack - player.def);
                    }
                    bat.times = 0;
                }
                al_draw_textf( pongFont, al_map_rgb(255, 0, 0), 460,150, -1, " %d", bat.life);
                al_draw_textf( pongFont, al_map_rgb(255, 255, 0), 460, 200, -1, " %d", bat.attack);
                al_draw_textf( pongFont, al_map_rgb(255, 0, 0), 260,150, -1, " %d", player.life);
                al_draw_textf( pongFont, al_map_rgb(255, 255, 0), 260, 200, -1, " %d", player.attack);
                al_draw_textf( pongFont, al_map_rgb(0, 0, 255), 460,250,-1, " %d",bat.def);
                al_draw_textf( pongFont, al_map_rgb(0, 0, 255), 260, 250, -1, " %d", player.def);

            }
            if(player.life <= 0)
            {
                player.lose += 1;
                //a[k][l] = 0;

            }
            if(bat.life <= 0)
            {
                //player.win += 1;
                bat.life = 50;
                a[k][l] = 0;
            }
        }

        break;

    case 15:
        al_draw_bitmap(monster3, b[k][l], c[k][l], 0);
        if(overlap(b, c, k, l))
        {
            player.times = 3;
            player.cordx = b[k][l];
            player.cordy = c[k][l];
            al_draw_bitmap(fight, 60, 70, 0);
            if((player.life>0)&&(skull.life>0))
            {
                if(skull.times == 1) //girl has been attacked 1 time
                {
                    // al_draw_textf(pongFont, al_map_rgb(255, 0, 0), 480,160, -1,"girl attack");
                    al_draw_bitmap(beaten,90,150,0);
                    if(player.def > skull.attack)
                    {
                        player.life = player.life;
                    }
                    else
                    {
                        player.life = player.life - (skull.attack - player.def);
                    }
                    skull.times = 0;
                }
                al_draw_textf( pongFont, al_map_rgb(255, 0, 0), 460,150, -1, " %d", skull.life);
                al_draw_textf( pongFont, al_map_rgb(255, 255, 0), 460, 200, -1, " %d", skull.attack);
                al_draw_textf( pongFont, al_map_rgb(255, 0, 0), 260,150, -1, " %d", player.life);
                al_draw_textf( pongFont, al_map_rgb(255, 255, 0), 260, 200, -1, " %d", player.attack);
                al_draw_textf( pongFont, al_map_rgb(0, 0, 255), 460,250,-1, " %d",skull.def);
                al_draw_textf( pongFont, al_map_rgb(0, 0, 255), 260, 250, -1, " %d", player.def);

            }
            if(player.life <= 0)
            {
                player.lose += 1;
                //a[k][l] = 0;

            }
            if(skull.life <= 0)
            {
                //player.win += 1;
                skull.life = 100;
                a[k][l] = 0;
            }
        }

        break;

    case 16:
        al_draw_bitmap(monster4, b[k][l], c[k][l], 0);
        if(overlap(b, c, k, l))
        {
            player.times = 4;
            player.cordx = b[k][l];
            player.cordy = c[k][l];
            al_draw_bitmap(fight, 60, 70, 0);
            if((player.life>0)&&(boss2.life>0))
            {
                if(boss2.times == 1) //girl has been attacked 1 time
                {
                    // al_draw_textf(pongFont, al_map_rgb(255, 0, 0), 480,160, -1,"girl attack");
                    al_draw_bitmap(beaten,90,150,0);
                    if(player.def > boss2.attack)
                    {
                        player.life = player.life;
                    }
                    else
                    {
                        player.life = player.life - (boss2.attack - player.def);
                    }
                    boss2.times = 0;
                }
                al_draw_textf( pongFont, al_map_rgb(255, 0, 0), 460,150, -1, " %d", boss2.life);
                al_draw_textf( pongFont, al_map_rgb(255, 255, 0), 460, 200, -1, " %d", boss2.attack);
                al_draw_textf( pongFont, al_map_rgb(255, 0, 0), 260,150, -1, " %d", player.life);
                al_draw_textf( pongFont, al_map_rgb(255, 255, 0), 260, 200, -1, " %d", player.attack);
                al_draw_textf( pongFont, al_map_rgb(0, 0, 255), 460,250,-1, " %d",boss2.def);
                al_draw_textf( pongFont, al_map_rgb(0, 0, 255), 260, 250, -1, " %d", player.def);

            }
            if(player.life <= 0)
            {
                player.lose += 1;
                //a[k][l] = 0;

            }
            if(boss2.life <= 0)
            {
                //player.win += 1;
                boss2.life = 200;
                a[k][l] = 0;
            }
        }

        break;

    case 17:
        al_draw_bitmap(monster5, b[k][l], c[k][l], 0);
        if(overlap(b, c, k, l))
        {
            player.times = 5;
            player.cordx = b[k][l];
            player.cordy = c[k][l];
            al_draw_bitmap(fight, 60, 70, 0);
            if((player.life>0)&&(boss3.life>0))
            {
                if(boss3.times == 1) //girl has been attacked 1 time
                {
                    // al_draw_textf(pongFont, al_map_rgb(255, 0, 0), 480,160, -1,"girl attack");
                    al_draw_bitmap(beaten,90,150,0);
                    if(player.def > boss3.attack)
                    {
                        player.life = player.life;
                    }
                    else
                    {
                        player.life = player.life - (boss3.attack - player.def);
                    }
                    boss3.times = 0;
                }
                al_draw_textf( pongFont, al_map_rgb(255, 0, 0), 460,150, -1, " %d", boss3.life);
                al_draw_textf( pongFont, al_map_rgb(255, 255, 0), 460, 200, -1, " %d", boss3.attack);
                al_draw_textf( pongFont, al_map_rgb(255, 0, 0), 260,150, -1, " %d", player.life);
                al_draw_textf( pongFont, al_map_rgb(255, 255, 0), 260, 200, -1, " %d", player.attack);
                al_draw_textf( pongFont, al_map_rgb(0, 0, 255), 460,250,-1, " %d",boss3.def);
                al_draw_textf( pongFont, al_map_rgb(0, 0, 255), 260, 250, -1, " %d", player.def);

            }
            if(player.life <= 0)
            {
                player.lose += 1;
                //a[k][l] = 0;

            }
            if(boss3.life <= 0)
            {
                player.win += 1;
                boss3.life = 5000;
                a[k][l] = 0;
            }
        }

        break;
    }
}


void move_pg(ALLEGRO_KEYBOARD_STATE KBstate, ALLEGRO_BITMAP *pg)
{


    if(player.energy>0)
    {
        if (al_key_down(&KBstate, ALLEGRO_KEY_LEFT))
        {
            player.moves += 1;
            player.cordx -= MOVE;
        }
        if (al_key_down(&KBstate, ALLEGRO_KEY_RIGHT))
        {
            player.moves += 1;
            player.cordx += MOVE;
        }
        if (al_key_down(&KBstate, ALLEGRO_KEY_UP))
        {
            player.moves += 1;
            player.cordy -= MOVE;
        }
        if (al_key_down(&KBstate, ALLEGRO_KEY_DOWN))
        {
            player.moves += 1;
            player.cordy += MOVE;
        }

    }


    if (player.cordx < 0)
        player.cordx = 0;
    if (player.cordx > 630)
        player.cordx = 630;
    if (player.cordy < 0)
        player.cordy = 0;
    if (player.cordy > 630)
        player.cordy = 630;

}


/*int use_item_red(ALLEGRO_FONT* pongFont, ALLEGRO_KEYBOARD_STATE KBstate, it player)
{
    if(player.num_red>0)
    {

        if(al_key_down(&KBstate, ALLEGRO_KEY_R))
        {

            player.life+=1;
            player.num_red-=1;
        }
    }
}


int use_item_blue(ALLEGRO_FONT* pongFont, ALLEGRO_KEYBOARD_STATE KBstate)
{
    if(player.num_blue>0)
    {

        if(al_key_down(&KBstate, ALLEGRO_KEY_B))
        {

            player.energy+=1;
            player.num_blue-=1;
        }
    }
}


int use_item_sword(ALLEGRO_FONT* pongFont, ALLEGRO_KEYBOARD_STATE KBstate)
{
    if(player.num_sword>0)
    {

        if(al_key_down(&KBstate, ALLEGRO_KEY_S))
        {

            player.attack+=2;
            player.num_sword-=1;
        }
    }
}


int use_item_snow(ALLEGRO_FONT* pongFont, ALLEGRO_KEYBOARD_STATE KBstate)
{
    if(player.num_snow>0)
    {

        if(al_key_down(&KBstate, ALLEGRO_KEY_A))
        {

            player.attack=player.attack*2;
            player.num_snow-=1;
        }
    }
}


int use_item_shield(ALLEGRO_FONT* pongFont, ALLEGRO_KEYBOARD_STATE KBstate)
{
    if(player.num_shield>0)
    {

        if(al_key_down(&KBstate, ALLEGRO_KEY_D))
        {

            player.def=player.def+2;
            player.num_shield-=1;
        }
    }
}*/


void atta(ALLEGRO_FONT* pongFont, ALLEGRO_KEYBOARD_STATE KBstate)
{
    switch(player.times)
    {
    case 1:
        if((girl.life>0)&&(player.life>0))
        {
            if(al_key_down(&KBstate, ALLEGRO_KEY_Z))
            {
                //al_draw_bitmap(attack,310,150,0);
                if(girl.def>player.attack)
                {
                    girl.life=girl.life;
                }
                else
                {
                    girl.life=girl.life-(player.attack-girl.def);
                }
                girl.times=1;//attack girl 1 time
            }
            break;
        }

    case 2:
        if((bat.life>0)&&(player.life>0))
        {
            if(al_key_down(&KBstate, ALLEGRO_KEY_Z))
            {
                //al_draw_bitmap(attack,310,150,0);
                if(bat.def>player.attack)
                {
                    bat.life=bat.life;
                }
                else
                {
                    bat.life=bat.life-(player.attack-bat.def);
                }
                bat.times=1;//attack bat 1 time
            }
            break;
        }

    case 3:
        if((skull.life>0)&&(player.life>0))
        {
            if(al_key_down(&KBstate, ALLEGRO_KEY_Z))
            {
                //al_draw_bitmap(attack,310,150,0);
                if(skull.def>player.attack)
                {
                    skull.life=skull.life;
                }
                else
                {
                    skull.life=skull.life-(player.attack-skull.def);
                }
                skull.times=1;//attack skull 1 time
            }
            break;
        }

    case 4:
        if((boss2.life>0)&&(player.life>0))
        {
            if(al_key_down(&KBstate, ALLEGRO_KEY_Z))
            {
                //al_draw_bitmap(attack,310,150,0);
                if(boss2.def>player.attack)
                {
                    boss2.life=boss2.life;
                }
                else
                {
                    boss2.life=boss2.life-(player.attack-boss2.def);
                }
                boss2.times=1;//attack boss2 1 time
            }
            break;
        }

    case 5:
        if((boss3.life>0)&&(player.life>0))
        {
            if(al_key_down(&KBstate, ALLEGRO_KEY_Z))
            {
                //al_draw_bitmap(attack,310,150,0);
                if(boss3.def>player.attack)
                {
                    boss3.life=boss3.life;
                }
                else
                {
                    boss3.life=boss3.life-(player.attack-boss3.def);
                }
                boss3.times=1;//attack boss3 1 time
            }
            break;
        }
    }
}


void run_out_of_energy()
{
    printf("%d\n",player.moves);
    if(player.moves==1000)
    {
        player.energy-=2;
        player.moves=0;
    }
}

void print(ALLEGRO_FONT* pongFont, ALLEGRO_BITMAP *pg)
{
    al_draw_bitmap(pg, player.cordx, player.cordy, 0);


    al_draw_textf( pongFont, al_map_rgb(0,0,0), 750,0, -1, " LEVEL %d", player.level);
    al_draw_textf( pongFont, al_map_rgb(255, 0,0), 750,20, -1, " life: %d", player.life);
    al_draw_textf( pongFont, al_map_rgb(0, 0, 255), 750,40, -1, " energy: %d", player.energy);
    al_draw_textf( pongFont, al_map_rgb(255, 0, 0), 750,60, -1, " ATK: %d", player.attack);
    al_draw_textf( pongFont, al_map_rgb(0,0, 255), 750,80, -1, " DEF: %d", player.def);
    //al_draw_textf( pongFont, al_map_rgb(255, 255,255), 620,100, -1, " Red Drug: %d", player.num_red);
    //al_draw_textf( pongFont, al_map_rgb(255, 255, 255), 620,120, -1, " Blue Drug: %d", player.num_blue);
    //al_draw_textf( pongFont, al_map_rgb(255, 255, 255), 620,140, -1, " Sword: %d", player.num_sword);
    //al_draw_textf( pongFont, al_map_rgb(255, 255, 255), 620,160, -1, " Snow: %d", player.num_snow);
    //al_draw_textf( pongFont, al_map_rgb(255, 255, 255), 620,180, -1, " Shield: %d", player.num_shield);
    al_draw_textf( pongFont, al_map_rgb(0, 255, 0), 750,100, -1, " Key: %d", player.num_key);
    al_draw_textf( pongFont, al_map_rgb(0, 0, 0), 750,120, -1, " Win: %d", player.win);
    al_draw_textf( pongFont, al_map_rgb(0, 0, 0), 750,140,-1, " Lose: %d", player.lose);

    al_draw_textf( pongFont, al_map_rgb(255, 255, 255), 280, 800, -1, "When you move,you will lose your energy.If energy=0,you can't move");
    al_draw_textf( pongFont, al_map_rgb(255, 255, 255), 200, 820, -1, "In the fight,You are the first to attack.");
    al_draw_textf( pongFont, al_map_rgb(255, 255, 255), 200, 840, -1, " And if you don't finish the fight,you can't move.");
    al_draw_textf( pongFont, al_map_rgb(255, 255, 255), 200, 860, -1, "Attack PRESS Z");
    //al_draw_textf( pongFont, al_map_rgb(255, 255, 255), 200, 600, -1, "use red drug (life+1) PRESS R"  );
    //al_draw_textf( pongFont, al_map_rgb(255, 255, 255), 200,620, -1, "use blue drug (energy+1) PRESS B ");
    //al_draw_textf( pongFont, al_map_rgb(255, 255, 255), 200, 640, -1, "USE sword (ATK+2) PRESS S ");
    //al_draw_textf( pongFont, al_map_rgb(255, 255, 255), 200, 660, -1, "USE snow (ATK*2) PRESS A");
    //al_draw_textf( pongFont, al_map_rgb(255, 255, 255), 200, 680, -1, "USE shield (DEF+2) PRESS D");

}
