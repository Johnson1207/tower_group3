#include "struct.h"
#include "fun_header.h"


int game(int maptype)
{
    bool run=1;
    int j=0;
    int score;
    int *pla[13];
    map.number=form_matrix(ROWSIZE,COLSIZE);
    map2.number=form_matrix(ROWSIZE,COLSIZE);
    map3.number=form_matrix(ROWSIZE,COLSIZE);
    map_store1.number=form_matrix(ROWSIZE,COLSIZE);
    map.cordx=form_matrix(ROWSIZE,COLSIZE);
    map.cordy=form_matrix(ROWSIZE,COLSIZE);

    //value(map.number,ROWSIZE,COLSIZE);
    //value2(map2.number,ROWSIZE,COLSIZE);
    //value3(map3.number,ROWSIZE,COLSIZE);
    value_cord(map.cordx,map.cordy,ROWSIZE,COLSIZE);
    getmap(map.number,maptype,1);
    getmap(map2.number,maptype,2);
    getmap(map3.number,maptype,3);
    getsta(pla,maptype);
    player.cordx=pla[0];
    player.cordy=pla[1];
    player.life=pla[2];
    player.num_key=pla[3];
    player.attack=pla[4];
    player.number=pla[5];
    player.times=pla[6];
    player.win=pla[7];
    player.lose=pla[8];
    player.def=pla[9];
    player.level=pla[10];
    player.moves=pla[11];
    player.judge=pla[12];

    //ALLEGRO_DISPLAY* display = NULL;
    ALLEGRO_BITMAP* key = NULL;
    ALLEGRO_BITMAP* red = NULL;
    ALLEGRO_BITMAP* stone = NULL;
    ALLEGRO_BITMAP* blue = NULL;
    ALLEGRO_BITMAP* door = NULL;
    ALLEGRO_BITMAP *pg = NULL;
    ALLEGRO_BITMAP *sword = NULL;
    ALLEGRO_BITMAP *snow = NULL;
    ALLEGRO_BITMAP *beaten = NULL;
    ALLEGRO_BITMAP *attack = NULL;
    ALLEGRO_BITMAP *defend = NULL;
    ALLEGRO_BITMAP *stair12 = NULL; //stair from map 1 to 2
    ALLEGRO_BITMAP *stair21 = NULL;//stair from map 2 to 1
    ALLEGRO_BITMAP *stair23 = NULL;//stair from map 2 to 3
    ALLEGRO_BITMAP *stair32 = NULL;//stair from map 3 to 2
    ALLEGRO_BITMAP *monster1 = NULL;
    ALLEGRO_BITMAP *fight1 = NULL;
    ALLEGRO_BITMAP *fight2 = NULL;
    ALLEGRO_BITMAP *fight3 = NULL;
    ALLEGRO_BITMAP *fight4 = NULL;
    ALLEGRO_BITMAP *fight5 = NULL;
    ALLEGRO_BITMAP *bitmap_map = NULL;
    ALLEGRO_BITMAP *monster2 = NULL;
    ALLEGRO_BITMAP *monster3 = NULL;
    ALLEGRO_BITMAP *monster4 = NULL;
    ALLEGRO_BITMAP *monster5 = NULL;
    ALLEGRO_BITMAP *gameover = NULL;
    ALLEGRO_BITMAP *youwin = NULL;

    ALLEGRO_SAMPLE *background = NULL;
    ALLEGRO_SAMPLE *mbeat = NULL;
    ALLEGRO_SAMPLE *mdoor = NULL;
    ALLEGRO_SAMPLE *mdrug = NULL;
    ALLEGRO_SAMPLE *mkey = NULL;
    ALLEGRO_SAMPLE *mshield = NULL;
    ALLEGRO_SAMPLE *msnow = NULL;
    ALLEGRO_SAMPLE *msword = NULL; // pointer to sound file
    ALLEGRO_FONT *pongFont = NULL; // pointer to Font file
    ALLEGRO_KEYBOARD_STATE KBstate;
    ALLEGRO_EVENT_QUEUE* event_queue = NULL; // create event queue
    ALLEGRO_EVENT events;

    int k=0;
    int l=0;

    /*
        player.cordx = 300;
        player.cordy= 650;
    */

    al_init();
    al_init_image_addon();
    al_init_image_addon();
    al_install_keyboard();
    al_install_audio();
    al_init_acodec_addon();
    al_reserve_samples(9);
    al_init_font_addon();
    al_init_ttf_addon();

    //display = al_create_display(DISPLAY_WIDTH, DISPLAY_HEIGHT);

    key = al_load_bitmap("./key.png");
    red = al_load_bitmap("./red.png");
    stone = al_load_bitmap("./stone.jpg");
    blue = al_load_bitmap("./blue.png");
    door = al_load_bitmap("./door.png");
    attack = al_load_bitmap("./attack.png");
    pg= al_load_bitmap("./pg.png");
    stair12= al_load_bitmap("./stair12.png");
    stair21= al_load_bitmap("./stair21.png");
    stair23= al_load_bitmap("./stair23.png");
    stair32= al_load_bitmap("./stair32.png");
    beaten= al_load_bitmap("./beaten.png");
    sword= al_load_bitmap("./sword.png");
    snow= al_load_bitmap("./snow.png");
    defend= al_load_bitmap("./shield.png");
    monster1= al_load_bitmap("./girl.png");
    monster2= al_load_bitmap("./bat.png");
    monster3= al_load_bitmap("./skull.png");
    monster4= al_load_bitmap("./boss2.png");
    monster5= al_load_bitmap("./boss3.png");
    fight1= al_load_bitmap("./fight1.png");
    fight2= al_load_bitmap("./fight2.png");
    fight3= al_load_bitmap("./fight3.png");
    fight4= al_load_bitmap("./fight4.png");
    fight5= al_load_bitmap("./fight5.png");
    bitmap_map = al_load_bitmap("./ice.jpg");
    gameover = al_load_bitmap("./gameover.jpg");
    youwin = al_load_bitmap("./youwin.jpg");

    pongFont = al_load_ttf_font("arial.ttf", 18, 0);

    mbeat = al_load_sample("beat.wav");
    mdoor = al_load_sample("door.wav");
    mdrug = al_load_sample("drug.wav");
    mkey = al_load_sample("key.wav");
    mshield = al_load_sample("shield.wav");
    msnow = al_load_sample("snow.wav");
    msword = al_load_sample("sword.wav");
    background = al_load_sample("fairy1.wav");
    al_play_sample(background, 1, 0, 1, ALLEGRO_PLAYMODE_LOOP, NULL);

    int girl_life = 500;
    int bat_life = 200;
    int skull_life = 300;
    int boss2_life = 1000;
    int boss3_life = 1200;


    /*
        player.num_key=0;
        player.win=0;
        player.lose=0;
        player.times=0;
        player.level=1;
        player.moves=0;

        player.life=1000;
        player.attack=20;
        player.def=20;
    */
    girl.life=girl_life;
    girl.attack=100;
    girl.times=0;
    girl.def=100;

    bat.life=bat_life;
    bat.attack=30;
    bat.times=0;
    bat.def=15;

    skull.life=skull_life;
    skull.attack=80;
    skull.times=0;
    skull.def=50;

    boss2.life=boss2_life;
    boss2.attack=150;
    boss2.times=0;
    boss2.def=200;

    boss3.life=boss3_life;
    boss3.attack=500;
    boss3.times=0;
    boss3.def=100;

    // do event registration
    event_queue = al_create_event_queue();
    al_register_event_source(event_queue, al_get_keyboard_event_source());    // register keyboard to event queue
    //al_register_event_source(event_queue, al_get_display_event_source(display));

    while(run)
    {
        al_get_keyboard_state(&KBstate);

        al_draw_bitmap(bitmap_map,0,0,0);
        if (!al_is_event_queue_empty(event_queue))
        {
            while (al_get_next_event(event_queue, &events))
            {
                switch (events.type)
                {
                case ALLEGRO_EVENT_DISPLAY_CLOSE:
                    run = 0;
                    break;

                case ALLEGRO_EVENT_KEY_DOWN:
                    if(events.keyboard.keycode == ALLEGRO_KEY_ESCAPE)
                        run = 0;
                    if(events.keyboard.keycode == ALLEGRO_KEY_ENTER)
                    {
                        savload(&maptype);
                        printf("maptype %d\n",maptype);
                        inpmap(map_store1.number,maptype,1);
                        inpmap(map2.number,maptype,2);
                        inpmap(map3.number,maptype,3);
                        inpsta(player,maptype);
                        run=0;
                    }

                    //move_pg(KBstate, pg);

                    switch(player.times)
                    {
                    case 1:
                        atta(pongFont, KBstate, mbeat);
                        break;

                    case 2:
                        atta(pongFont, KBstate, mbeat);
                        break;

                    case 3:
                        atta(pongFont, KBstate, mbeat);
                        break;

                    case 4:
                        atta(pongFont, KBstate, mbeat);
                        break;

                    case 5:
                        atta(pongFont, KBstate, mbeat);
                        break;
                    }
                    break;

                }
            }
        }

        for(k=0; k<ROWSIZE; k++)
        {
            for(l=0; l<COLSIZE; l++)
            {
                swit(map.number, map.cordx, map.cordy, k, l,
                     key, red, stone, blue, monster1, pongFont,
                     sword, snow, beaten, defend, stair12, stair21, stair23,
                     stair32, door, monster2, monster3, monster4, monster5,
                     mbeat,mdoor,mdrug,mkey,mshield,msnow,msword,
                     girl_life, bat_life, skull_life, boss2_life, boss3_life);
            }
        }

        move_pg(KBstate, pg);
        print(pongFont, pg);


        if(player.lose == 1)
        {
            score=player.attack*2+player.life*1.5;
            name(player,0,score);
            run = 0;
            break;
        }

        if(player.win == 1)
        {
            score=player.attack*2+player.life*1.5;
            name(player,1,score);
            run = 0;
            break;
        }

        if(player.times != 0)
        {
            fighting(fight1, fight2, fight3, fight4, fight5, pongFont);
        }

        al_rest(0.01);

        // display
        al_flip_display(); // Wait for the beginning of a vertical retrace.
        al_clear_to_color(al_map_rgb(0,0,0));

        // Clear the complete target bitmap, but confined by the clipping rectangle.
    }

    /*

    while(player.lose == 1)
    {
        al_flip_display();
        al_draw_bitmap(gameover, 0, 0, 0);
        al_draw_textf( pongFont, al_map_rgb(55, 55, 255), 330, 400, -1, "Press ESC to close.");

        al_get_keyboard_state(&KBstate);
        if (al_key_down(&KBstate, ALLEGRO_KEY_ESCAPE))
            break;

    }

    while(player.win == 1)
    {
        al_flip_display();
        al_draw_bitmap(youwin, 0, 0, 0);
        al_draw_textf( pongFont, al_map_rgb(55, 55, 255), 330, 400, -1, "Press ESC to close.");

        al_get_keyboard_state(&KBstate);
        if (al_key_down(&KBstate, ALLEGRO_KEY_ESCAPE))
            break;

    }

    */
    // Flip display to show the drawing result
    al_flip_display();
    al_destroy_bitmap(attack);
    al_destroy_bitmap(beaten);
    al_destroy_bitmap(key);
    al_destroy_bitmap(red);
    al_destroy_bitmap(stone);
    al_destroy_bitmap(blue);
    al_destroy_bitmap(pg);
    al_destroy_bitmap(stair12);
    al_destroy_bitmap(stair21);
    al_destroy_bitmap(stair23);
    al_destroy_bitmap(stair32);
    al_destroy_bitmap(door);
    al_destroy_bitmap(defend);
    al_destroy_bitmap(sword);
    al_destroy_bitmap(snow);
    al_destroy_bitmap(monster1);
    al_destroy_bitmap(monster2);
    al_destroy_bitmap(monster3);
    al_destroy_bitmap(monster4);
    al_destroy_bitmap(monster5);
    al_destroy_bitmap(fight1);
    al_destroy_bitmap(fight2);
    al_destroy_bitmap(fight3);
    al_destroy_bitmap(fight4);
    al_destroy_bitmap(fight5);
    al_destroy_bitmap(bitmap_map);
    al_destroy_bitmap(gameover);
    al_destroy_bitmap(youwin);

    //al_destroy_display(display);
    al_destroy_event_queue(event_queue);

    al_destroy_sample(background); /* destroy the background sound file */
    al_destroy_sample(mdrug);
    al_destroy_sample(mbeat);
    al_destroy_sample(mdoor);
    al_destroy_sample(mkey);
    al_destroy_sample(mshield);
    al_destroy_sample(msnow);
    al_destroy_sample(msword);

    al_destroy_font(pongFont);


    return 0;
}
