#include "fun_header.h"
#include "struct.h"

int savload(int *maptype )
{
    int type;
    float FPS = 120;
    bool run=1;
    int x=0,y=0;

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

        al_draw_textf( pongFont, al_map_rgb(255, 255, 255), 340, 25, -1, "Which you want to saved?");
        al_draw_textf( Font, al_map_rgb(255, 255, 255), 340, 250, -1, "LOAD A  (press A)");
        al_draw_textf( Font, al_map_rgb(255, 255, 255), 340, 300, -1, "LOAD B  (press B)");
        al_draw_textf( Font, al_map_rgb(255, 255, 255), 340, 350, -1, "LOAD C  (press C)");

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
                        *maptype=1;
                        run=0;
                    }
                    if(events.keyboard.keycode == ALLEGRO_KEY_B)
                    {
                        *maptype=2;
                        run=0;
                    }
                    if(events.keyboard.keycode == ALLEGRO_KEY_C)
                    {
                        *maptype=3;
                        run=0;
                    }
                    if(events.keyboard.keycode == ALLEGRO_KEY_N)
                    {
                        *maptype=4;
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
