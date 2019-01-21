#include "struct.h"
#include "fun_header.h"

int name(it player,int  winlos,int score)
{
    ary grade[8];
    float FPS = 120;
    bool run=1;
    int x=0,y=0;
    int i=0;
    char nam[20];
    memset(nam,0,20);

    /* pointer to the ball's image bitmap *//* pointer to display */
    ALLEGRO_FONT *pongFont = NULL; /* pointer to Font file */
    ALLEGRO_FONT *Font = NULL;
    ALLEGRO_EVENT_QUEUE* event_queue = NULL; /* create event queue */

    ALLEGRO_EVENT events;
    ALLEGRO_KEYBOARD_STATE KBstate;


    /* first, set up Allegro and the graphics mode */
    al_init(); /* initialize Allegro */
    al_install_keyboard(); /* install the keyboard for Allegro to use */
    al_install_mouse();
    al_init_image_addon();
    al_init_font_addon();    // install font addons
    al_init_ttf_addon();

    pongFont = al_load_ttf_font("ARCHRISTY.ttf", 70, 0); /* load the FONT file */
    Font=al_load_ttf_font("ARCHRISTY.ttf", 30, 0);

    // do event registration
    event_queue = al_create_event_queue();
    al_register_event_source(event_queue, al_get_keyboard_event_source());    /* register keyboard to event queue */
    al_register_event_source(event_queue, al_get_mouse_event_source());

    while(run)
    {
        if(winlos==1)
        {
            al_draw_textf( pongFont, al_map_rgb(255, 255, 255), 340, 25, -1, "WIN?");
        }
        if(winlos==0)
        {
            al_draw_textf( pongFont, al_map_rgb(255, 255, 255), 340, 25, -1, "GAME OVER?");
        }
        al_draw_textf( Font, al_map_rgb(255, 255, 255), 340, 200, -1, "Please give your name");
        al_draw_textf( Font, al_map_rgb(255, 255, 255), 340, 250, -1, "%s",nam);
        al_draw_textf( Font, al_map_rgb(255, 255, 255), 340, 300, -1, "PRESS 'Ctrl' to save.");
        //al_get_next_event(event_queue, &events);
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
                        run=0;
                    if(events.keyboard.keycode == ALLEGRO_KEY_A)
                    {
                        nam[i]='a';
                        i++;
                    }
                    if(events.keyboard.keycode == ALLEGRO_KEY_B)
                    {
                        nam[i]='b';
                        i++;
                    }
                    if(events.keyboard.keycode == ALLEGRO_KEY_C)
                    {
                        nam[i]='c';
                        i++;
                    }
                    if(events.keyboard.keycode == ALLEGRO_KEY_D)
                    {
                        nam[i]='d';
                        i++;
                    }
                    if(events.keyboard.keycode == ALLEGRO_KEY_E)
                    {
                        nam[i]='e';
                        i++;
                    }
                    if(events.keyboard.keycode == ALLEGRO_KEY_F)
                    {
                        nam[i]='f';
                        i++;
                    }
                    if(events.keyboard.keycode == ALLEGRO_KEY_G)
                    {
                        nam[i]='g';
                        i++;
                    }
                    if(events.keyboard.keycode == ALLEGRO_KEY_H)
                    {
                        nam[i]='h';
                        i++;
                    }
                    if(events.keyboard.keycode == ALLEGRO_KEY_I)
                    {
                        nam[i]='i';
                        i++;
                    }
                    if(events.keyboard.keycode == ALLEGRO_KEY_J)
                    {
                        nam[i]='j';
                        i++;
                    }
                    if(events.keyboard.keycode == ALLEGRO_KEY_K)
                    {
                        nam[i]='k';
                        i++;
                    }
                    if(events.keyboard.keycode == ALLEGRO_KEY_L)
                    {
                        nam[i]='l';
                        i++;
                    }
                    if(events.keyboard.keycode == ALLEGRO_KEY_M)
                    {
                        nam[i]='m';
                        i++;
                    }
                    if(events.keyboard.keycode == ALLEGRO_KEY_N)
                    {
                        nam[i]='n';
                        i++;
                    }
                    if(events.keyboard.keycode == ALLEGRO_KEY_O)
                    {
                        nam[i]='o';
                        i++;
                    }
                    if(events.keyboard.keycode == ALLEGRO_KEY_P)
                    {
                        nam[i]='p';
                        i++;
                    }
                    if(events.keyboard.keycode == ALLEGRO_KEY_Q)
                    {
                        nam[i]='q';
                        i++;
                    }
                    if(events.keyboard.keycode == ALLEGRO_KEY_R)
                    {
                        nam[i]='r';
                        i++;
                    }
                    if(events.keyboard.keycode == ALLEGRO_KEY_S)
                    {
                        nam[i]='s';
                        i++;
                    }
                    if(events.keyboard.keycode == ALLEGRO_KEY_T)
                    {
                        nam[i]='t';
                        i++;
                    }
                    if(events.keyboard.keycode == ALLEGRO_KEY_U)
                    {
                        nam[i]='u';
                        i++;
                    }
                    if(events.keyboard.keycode == ALLEGRO_KEY_V)
                    {
                        nam[i]='v';
                        i++;
                    }
                    if(events.keyboard.keycode == ALLEGRO_KEY_W)
                    {
                        nam[i]='w';
                        i++;
                    }
                    if(events.keyboard.keycode == ALLEGRO_KEY_X)
                    {
                        nam[i]='x';
                        i++;
                    }
                    if(events.keyboard.keycode == ALLEGRO_KEY_Y)
                    {
                        nam[i]='y';
                        i++;
                    }
                    if(events.keyboard.keycode == ALLEGRO_KEY_Z)
                    {
                        nam[i]='z';
                        i++;
                    }
                    if(events.keyboard.keycode == ALLEGRO_KEY_BACKSPACE)
                    {
                        nam[i]='\0';
                        i--;
                    }
                    if(events.keyboard.keycode == ALLEGRO_KEY_LCTRL)
                    {
                        past(grade,nam,score);
                        run=0;
                    }
                    break;
                case ALLEGRO_EVENT_MOUSE_BUTTON_UP:
                    x = events.mouse.x;
                    y = events.mouse.y;
                    run=0;
                    break;

                }
            }
        }



        //al_rest(0.1);

        /* display */
        //al_wait_for_vsync(); /* Copies or updates the front and back buffers */
        al_flip_display(); /* Wait for the beginning of a vertical retrace. */
        al_clear_to_color(al_map_rgb(0,0,0)); /* Clear the complete target bitmap, but confined by the clipping rectangle. */

        /* Clear the complete target bitmap, but confined by the clipping rectangle. */
    }
    /* destroy the ball bitmap */ /* destroy the display */
    al_destroy_font( pongFont ); /* destroy the font */
    al_destroy_event_queue(event_queue);
}
