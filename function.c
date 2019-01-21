
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
                    1,4,14,0,0,3,1,10,5,0,0,3,1,
                    1,1,1,0,1,1,1,1,1,0,0,0,1,
                    1,0,0,0,0,0,0,0,1,0,0,0,1,
                    1,0,1,1,9,1,1,0,1,14,0,14,1,
                    1,0,1,4,7,7,1,0,1,7,0,7,1,
                    1,0,1,1,1,1,1,0,1,1,9,1,1,
                    1,0,0,0,0,0,0,7,0,0,0,0,1,
                    1,1,1,9,1,1,0,1,1,1,1,9,1,
                    1,2,6,14,3,1,0,1,2,7,7,7,1,
                    1,2,7,7,3,1,0,1,14,7,7,7,1,
                    1,4,7,7,3,1,0,1,4,14,8,2,1,
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
                    1,2,0,3,1,4,1,11,0,0,0,14,1,
                    1,0,14,0,9,14,1,1,1,1,1,0,1,
                    1,0,14,0,1,0,1,0,0,2,1,0,1,
                    1,3,0,2,1,0,1,0,1,0,1,0,1,
                    1,1,9,1,1,0,1,0,1,0,1,0,1,
                    1,7,15,7,1,0,1,0,2,0,0,15,1,
                    1,7,0,7,1,0,1,0,1,1,1,1,1,
                    1,14,14,14,1,0,1,0,1,4,8,6,1,
                    1,1,16,1,1,0,1,0,1,2,3,2,1,
                    1,0,0,0,1,0,1,0,1,3,2,3,1,
                    1,12,6,7,1,0,0,0,9,7,4,7,1,
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
                    1,15,0,0,1,7,17,7,1,0,0,15,1,
                    1,0,1,2,1,7,7,7,1,3,1,0,1,
                    1,0,1,2,1,1,9,1,1,3,1,0,1,
                    1,0,1,2,1,8,8,8,1,3,1,0,1,
                    1,0,1,2,1,8,0,8,1,3,1,0,1,
                    1,7,1,4,1,1,9,1,1,7,1,0,1,
                    1,0,1,3,1,7,6,7,1,2,1,0,1,
                    1,0,1,3,1,7,7,7,1,2,1,0,1,
                    1,0,1,3,1,1,14,1,1,2,1,0,1,
                    1,0,1,3,1,0,0,0,1,2,1,0,1,
                    1,13,1,0,0,0,0,0,0,0,1,4,1,
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
          ALLEGRO_BITMAP* monster1, ALLEGRO_FONT* pongFont, ALLEGRO_BITMAP* sword,
          ALLEGRO_BITMAP* snow, ALLEGRO_BITMAP* beaten, ALLEGRO_BITMAP* defend, ALLEGRO_BITMAP* stair12,
          ALLEGRO_BITMAP* stair21, ALLEGRO_BITMAP* stair23, ALLEGRO_BITMAP* stair32, ALLEGRO_BITMAP* door,
          ALLEGRO_BITMAP* monster2, ALLEGRO_BITMAP* monster3, ALLEGRO_BITMAP* monster4, ALLEGRO_BITMAP* monster5,
          ALLEGRO_SAMPLE *mbeat,ALLEGRO_SAMPLE *mdoor,ALLEGRO_SAMPLE *mdrug,ALLEGRO_SAMPLE *mkey,ALLEGRO_SAMPLE *mshield,
          ALLEGRO_SAMPLE *msnow,ALLEGRO_SAMPLE *msword, int girl_life, int bat_life, int skull_life, int boss2_life, int boss3_life)
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
            al_play_sample(mdrug, 1, 0, 1, ALLEGRO_PLAYMODE_ONCE, NULL);
            player.life += 30;

            a[k][l] = 0;
        }
        break;

    case 3:
        al_draw_bitmap(blue, b[k][l], c[k][l],0);
        if(overlap(b, c, k, l))
        {
            al_play_sample(mdrug, 1, 0, 1, ALLEGRO_PLAYMODE_ONCE, NULL);
            player.life += 50;

            a[k][l] = 0;
        }

        break;

    case 4:
        al_draw_bitmap(key, b[k][l], c[k][l], 0);
        if(overlap(b, c, k, l))
        {
            al_play_sample(mkey, 1, 0, 1, ALLEGRO_PLAYMODE_ONCE, NULL);
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

            if((player.life>0)&&(girl.life>0))
            {
                if(girl.times == 1) //girl has been attacked 1 time
                {
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

            }
            if(player.life <= 0)
            {
                player.lose += 1;
                player.times = 0;
                //a[k][l] = 0;

            }
            if(girl.life <= 0)
            {
                //player.win += 1;
                girl.life = girl_life;
                player.times = 0;
                a[k][l] = 0;
            }
        }

        break;

    case 6:
        al_draw_bitmap(sword, b[k][l], c[k][l], 0);
        if(overlap(b, c, k, l))
        {
            al_play_sample(msword, 1, 0, 1, ALLEGRO_PLAYMODE_ONCE, NULL);
            player.attack += 50;

            a[k][l] = 0;
        }
        break;

    case 7:
        al_draw_bitmap(snow, b[k][l], c[k][l], 0);
        if(overlap(b, c, k, l))
        {
            al_play_sample(msnow, 1, 0, 1, ALLEGRO_PLAYMODE_ONCE, NULL);
            player.attack += 10;

            a[k][l] = 0;
        }
        break;

    case 8:
        al_draw_bitmap(defend, b[k][l], c[k][l], 0);
        if(overlap(b, c, k, l))
        {
            al_play_sample(mshield, 1, 0, 1, ALLEGRO_PLAYMODE_ONCE, NULL);
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
                al_play_sample(mdoor, 1, 0, 1, ALLEGRO_PLAYMODE_ONCE, NULL);
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
            player.cordx += 40;
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
            player.cordx += 40;
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
            player.cordy -= 40;
        }
        break;

    case 14:
        al_draw_bitmap(monster2, b[k][l], c[k][l], 0);
        if(overlap(b, c, k, l))
        {
            player.times = 2;
            player.cordx = b[k][l];
            player.cordy = c[k][l];

            if((player.life>0)&&(bat.life>0))
            {
                if(bat.times == 1) //girl has been attacked 1 time
                {
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

            }
            if(player.life <= 0)
            {
                player.lose += 1;
                player.times = 0;
                //a[k][l] = 0;

            }
            if(bat.life <= 0)
            {
                //player.win += 1;
                bat.life = bat_life;
                player.times = 0;
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

            if((player.life>0)&&(skull.life>0))
            {
                if(skull.times == 1) //girl has been attacked 1 time
                {
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

            }
            if(player.life <= 0)
            {
                player.lose += 1;
                player.times = 0;
                //a[k][l] = 0;

            }
            if(skull.life <= 0)
            {
                //player.win += 1;
                skull.life = skull_life;
                player.times = 0;
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

            if((player.life>0)&&(boss2.life>0))
            {
                if(boss2.times == 1) //girl has been attacked 1 time
                {
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

            }
            if(player.life <= 0)
            {
                player.lose += 1;
                player.times = 0;
                //a[k][l] = 0;

            }
            if(boss2.life <= 0)
            {
                //player.win += 1;
                boss2.life = boss2_life;
                player.times = 0;
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

            if((player.life>0)&&(boss3.life>0))
            {
                if(boss3.times == 1) //girl has been attacked 1 time
                {
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


            }
            if(player.life <= 0)
            {
                player.lose += 1;
                player.times = 0;
                //a[k][l] = 0;

            }
            if(boss3.life <= 0)
            {
                player.win += 1;
                boss3.life = boss3_life;
                player.times = 0;
                a[k][l] = 0;
            }
        }

        break;
    }
}


void move_pg(ALLEGRO_KEYBOARD_STATE KBstate, ALLEGRO_BITMAP *pg)
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




    if (player.cordx < 0)
        player.cordx = 0;
    if (player.cordx > 630)
        player.cordx = 630;
    if (player.cordy < 0)
        player.cordy = 0;
    if (player.cordy > 630)
        player.cordy = 630;

}


void atta(ALLEGRO_FONT* pongFont, ALLEGRO_KEYBOARD_STATE KBstate, ALLEGRO_SAMPLE *mbeat)
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
                al_play_sample(mbeat, 1, 0, 1, ALLEGRO_PLAYMODE_ONCE, NULL);
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
                al_play_sample(mbeat, 1, 0, 1, ALLEGRO_PLAYMODE_ONCE, NULL);
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
                al_play_sample(mbeat, 1, 0, 1, ALLEGRO_PLAYMODE_ONCE, NULL);
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
                al_play_sample(mbeat, 1, 0, 1, ALLEGRO_PLAYMODE_ONCE, NULL);
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
                al_play_sample(mbeat, 1, 0, 1, ALLEGRO_PLAYMODE_ONCE, NULL);
            }
            break;
        }
    }
}


/*void run_out_of_energy()
{
    printf("%d\n",player.moves);
    if(player.moves==1000)
    {
        player.energy-=2;
        player.moves=0;
    }
}*/

void print(ALLEGRO_FONT* pongFont, ALLEGRO_BITMAP *pg)
{
    al_draw_bitmap(pg, player.cordx, player.cordy, 0);


    al_draw_textf( pongFont, al_map_rgb(0, 0, 0), 700, 20, -1, " LEVEL %d", player.level);
    al_draw_textf( pongFont, al_map_rgb(255, 0,100), 700, 40, -1, " HP: %d", player.life);
    //al_draw_textf( pongFont, al_map_rgb(0, 0, 255), 700,40, -1, " energy: %d", player.energy);
    al_draw_textf( pongFont, al_map_rgb(0, 150, 255), 700, 60, -1, " ATK: %d", player.attack);
    al_draw_textf( pongFont, al_map_rgb(0, 255, 500), 700, 80, -1, " DEF: %d", player.def);
    //al_draw_textf( pongFont, al_map_rgb(255, 255,255), 620,100, -1, " Red Drug: %d", player.num_red);
    //al_draw_textf( pongFont, al_map_rgb(255, 255, 255), 620,120, -1, " Blue Drug: %d", player.num_blue);
    //al_draw_textf( pongFont, al_map_rgb(255, 255, 255), 620,140, -1, " Sword: %d", player.num_sword);
    //al_draw_textf( pongFont, al_map_rgb(255, 255, 255), 620,160, -1, " Snow: %d", player.num_snow);
    //al_draw_textf( pongFont, al_map_rgb(255, 255, 255), 620,180, -1, " Shield: %d", player.num_shield);
    al_draw_textf( pongFont, al_map_rgb(0, 255, 0), 700,100, -1, " Key: %d", player.num_key);
    //al_draw_textf( pongFont, al_map_rgb(0, 0, 0), 700,120, -1, " Win: %d", player.win);
    //al_draw_textf( pongFont, al_map_rgb(0, 0, 0), 700,140,-1, " Lose: %d", player.lose);

    al_draw_textf( pongFont, al_map_rgb(255, 255, 255), 350, 670, -1, "In the fight,You are the first to attack.");
    al_draw_textf( pongFont, al_map_rgb(255, 255, 255), 350, 690, -1, " And if you don't finish the fight,you can't move.");
    al_draw_textf( pongFont, al_map_rgb(255, 255, 255), 350, 710, -1, "Attack PRESS  'Z'");
    al_draw_textf( pongFont, al_map_rgb(255, 255, 255), 350, 730, -1, "Save game PRESS  'Enter'");
    al_draw_textf( pongFont, al_map_rgb(255, 255, 255), 350, 750, -1, "Close game PRESS  'ESC'");
    al_draw_textf( pongFont, al_map_rgb(255, 150, 150), 370, 775, -1, "Snow:ATK + 10  Sword:ATK + 50  Shield:DEF + 10  Red med:HP + 30  Blue med:HP + 50");
    //al_draw_textf( pongFont, al_map_rgb(255, 255, 255), 200, 600, -1, "use red drug (life+1) PRESS R"  );
    //al_draw_textf( pongFont, al_map_rgb(255, 255, 255), 200,620, -1, "use blue drug (energy+1) PRESS B ");
    //al_draw_textf( pongFont, al_map_rgb(255, 255, 255), 200, 640, -1, "USE sword (ATK+2) PRESS S ");
    //al_draw_textf( pongFont, al_map_rgb(255, 255, 255), 200, 660, -1, "USE snow (ATK*2) PRESS A");
    //al_draw_textf( pongFont, al_map_rgb(255, 255, 255), 200, 680, -1, "USE shield (DEF+2) PRESS D");

}

void fighting(ALLEGRO_BITMAP *fight1, ALLEGRO_BITMAP *fight2, ALLEGRO_BITMAP *fight3,
              ALLEGRO_BITMAP *fight4, ALLEGRO_BITMAP *fight5, ALLEGRO_FONT *pongFont)
{
    switch(player.times)
            {
            case 1:
                al_draw_bitmap(fight1, 150, 150, 0);
                al_draw_textf( pongFont, al_map_rgb(255, 0, 0), 555, 240, -1, " %d", girl.life);
                al_draw_textf( pongFont, al_map_rgb(255, 0, 255), 555, 285, -1, " %d", girl.attack);
                al_draw_textf( pongFont, al_map_rgb(255, 0, 0), 355, 240, -1, " %d", player.life);
                al_draw_textf( pongFont, al_map_rgb(255, 0, 255), 355, 285, -1, " %d", player.attack);
                al_draw_textf( pongFont, al_map_rgb(0, 0, 255), 555, 330,-1, " %d",girl.def);
                al_draw_textf( pongFont, al_map_rgb(0, 0, 255), 355, 330, -1, " %d", player.def);
                break;

            case 2:
                al_draw_bitmap(fight2, 150, 150, 0);
                al_draw_textf( pongFont, al_map_rgb(255, 0, 0), 550, 210, -1, " %d", bat.life);
                al_draw_textf( pongFont, al_map_rgb(255, 0, 255), 550, 275, -1, " %d", bat.attack);
                al_draw_textf( pongFont, al_map_rgb(255, 0, 0), 350, 210, -1, " %d", player.life);
                al_draw_textf( pongFont, al_map_rgb(255, 0, 255), 350, 275, -1, " %d", player.attack);
                al_draw_textf( pongFont, al_map_rgb(0, 0, 255), 550, 345,-1, " %d",bat.def);
                al_draw_textf( pongFont, al_map_rgb(0, 0, 255), 350, 345, -1, " %d", player.def);
                break;

            case 3:
                al_draw_bitmap(fight3, 150, 150, 0);
                al_draw_textf( pongFont, al_map_rgb(255, 0, 0), 550, 220, -1, " %d", skull.life);
                al_draw_textf( pongFont, al_map_rgb(255, 0, 255), 550, 275, -1, " %d", skull.attack);
                al_draw_textf( pongFont, al_map_rgb(255, 0, 0), 350, 220, -1, " %d", player.life);
                al_draw_textf( pongFont, al_map_rgb(255, 0, 255), 350, 275, -1, " %d", player.attack);
                al_draw_textf( pongFont, al_map_rgb(0, 0, 255), 550, 330,-1, " %d",skull.def);
                al_draw_textf( pongFont, al_map_rgb(0, 0, 255), 350, 330, -1, " %d", player.def);
                break;

            case 4:
                al_draw_bitmap(fight4, 150, 150, 0);
                al_draw_textf( pongFont, al_map_rgb(255, 0, 0), 550, 220, -1, " %d", boss2.life);
                al_draw_textf( pongFont, al_map_rgb(255, 0, 255), 550, 275, -1, " %d", boss2.attack);
                al_draw_textf( pongFont, al_map_rgb(255, 0, 0), 350, 220, -1, " %d", player.life);
                al_draw_textf( pongFont, al_map_rgb(255, 0, 255), 350, 275, -1, " %d", player.attack);
                al_draw_textf( pongFont, al_map_rgb(0, 0, 255), 550, 330,-1, " %d",boss2.def);
                al_draw_textf( pongFont, al_map_rgb(0, 0, 255), 350, 330, -1, " %d", player.def);
                break;

            case 5:
                al_draw_bitmap(fight5, 150, 150, 0);
                al_draw_textf( pongFont, al_map_rgb(255, 0, 0), 555, 220, -1, " %d", boss3.life);
                al_draw_textf( pongFont, al_map_rgb(255, 0, 255), 555, 275, -1, " %d", boss3.attack);
                al_draw_textf( pongFont, al_map_rgb(255, 0, 0), 355, 220, -1, " %d", player.life);
                al_draw_textf( pongFont, al_map_rgb(255, 0, 255), 355, 275, -1, " %d", player.attack);
                al_draw_textf( pongFont, al_map_rgb(0, 0, 255), 555, 330,-1, " %d",boss3.def);
                al_draw_textf( pongFont, al_map_rgb(0, 0, 255), 355, 330, -1, " %d", player.def);
                break;
            }
}
