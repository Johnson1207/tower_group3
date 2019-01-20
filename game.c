
#include "struct.h"
#include "fun_header.h"


int game()
{
    bool run=1;
    int j=0;
    map.number=form_matrix(ROWSIZE,COLSIZE);
    map2.number=form_matrix(ROWSIZE,COLSIZE);
    map3.number=form_matrix(ROWSIZE,COLSIZE);
    map_store1.number=form_matrix(ROWSIZE,COLSIZE);
    map.cordx=form_matrix(ROWSIZE,COLSIZE);
    map.cordy=form_matrix(ROWSIZE,COLSIZE);

    value(map.number,ROWSIZE,COLSIZE);
    value2(map2.number,ROWSIZE,COLSIZE);
    value3(map3.number,ROWSIZE,COLSIZE);
    value_cord(map.cordx,map.cordy,ROWSIZE,COLSIZE);

    ALLEGRO_DISPLAY* display = NULL;
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
    ALLEGRO_BITMAP *fight = NULL;
    ALLEGRO_BITMAP *bitmap_map = NULL;
    ALLEGRO_BITMAP *monster2 = NULL;
    ALLEGRO_BITMAP *monster3 = NULL;
    ALLEGRO_BITMAP *monster4 = NULL;
    ALLEGRO_BITMAP *monster5 = NULL;

    ALLEGRO_SAMPLE *background = NULL; // pointer to sound file
    ALLEGRO_FONT *pongFont = NULL; // pointer to Font file
    ALLEGRO_KEYBOARD_STATE KBstate;
    ALLEGRO_EVENT_QUEUE* event_queue = NULL; // create event queue
    ALLEGRO_EVENT events;

    int k=0;
    int l=0;

    player.cordx = 300;
    player.cordy= 650;




    al_init();
    al_init_image_addon();
    al_init_image_addon();
    al_install_keyboard();
    al_install_audio();
    al_init_acodec_addon();
    al_reserve_samples(9);
    al_init_font_addon();
    al_init_ttf_addon();

    display = al_create_display(DISPLAY_WIDTH, DISPLAY_HEIGHT);

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
    sword= al_load_bitmap("./sword.bmp");
    snow= al_load_bitmap("./snow.png");
    defend= al_load_bitmap("./shield.png");
    monster1= al_load_bitmap("./girl.png");
    monster2= al_load_bitmap("./bat.png");
    monster3= al_load_bitmap("./skull.png");
    monster4= al_load_bitmap("./boss2.png");
    monster5= al_load_bitmap("./boss3.png");
    fight= al_load_bitmap("./fight.png");
    bitmap_map = al_load_bitmap("./ice.jpg");

    pongFont = al_load_ttf_font("arial.ttf", 18, 0);

    background = al_load_sample("fairy1.wav");
    al_play_sample(background, 1, 0, 1, ALLEGRO_PLAYMODE_LOOP, NULL);

    player.num_blue=0;
    player.num_key=0;
    player.num_red=0;
    player.life=10;
    player.energy=10;
    player.num_snow=0;
    player.attack=3;
    player.num_sword=0;
    player.win=0;
    player.lose=0;
    player.times=0;
    player.def=1;
    player.level=1;
    player.moves=0;

    girl.life=20;
    girl.attack=3;
    girl.times=0;
    girl.def=6;

    bat.life=50;
    bat.attack=6;
    bat.times=0;
    bat.def=6;

    skull.life=100;
    skull.attack=15;
    skull.times=0;
    skull.def=10;

    boss2.life=200;
    boss2.attack=30;
    boss2.times=0;
    boss2.def=50;

    boss3.life=1000;
    boss3.attack=100;
    boss3.times=0;
    boss3.def=100;


    // do event registration
    event_queue = al_create_event_queue();
    al_register_event_source(event_queue, al_get_keyboard_event_source());    // register keyboard to event queue
    al_register_event_source(event_queue, al_get_display_event_source(display));

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

                    //move_pg(KBstate, pg);

                    switch(player.times)
                    {
                    case 1:
                        atta(pongFont, KBstate);
                        break;

                    case 2:
                        atta(pongFont, KBstate);
                        break;

                    case 3:
                        atta(pongFont, KBstate);
                        break;

                    case 4:
                        atta(pongFont, KBstate);
                        break;

                    case 5:
                        atta(pongFont, KBstate);
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
                     key, red, stone, blue, monster1, fight, pongFont,
                     sword, snow, beaten, defend, stair12, stair21, stair23,
                     stair32, door, monster2, monster3, monster4, monster5);
            }
        }




        move_pg(KBstate, pg);
        print(pongFont, pg);
        run_out_of_energy();






        al_rest(0.01);

        // display
        al_flip_display(); // Wait for the beginning of a vertical retrace.
        al_clear_to_color(al_map_rgb(0,0,0));

        // Clear the complete target bitmap, but confined by the clipping rectangle.
    }

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
    al_destroy_bitmap(fight);
    al_destroy_bitmap(bitmap_map);
    al_destroy_display(display);
    al_destroy_event_queue(event_queue);
    al_destroy_sample(background); /* destroy the background sound file */


    return 0;
}
