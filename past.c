#include "fun_header.h"
#include "struct.h"


void past(ary grade[],char nam[],int num)
{
    bool run=1;
    int x=0,y=0;

    tim(grade,nam,num);
    score(grade);
    //system("pause");
    rank(grade);

    /* pointer to the ball's image bitmap */
    /* pointer to display */
    ALLEGRO_FONT *pongFont = NULL; /* pointer to Font file */
    ALLEGRO_FONT *Font = NULL;
    ALLEGRO_EVENT_QUEUE* event_queue = NULL; /* create event queue */
    ALLEGRO_BITMAP *bitmap_boardback = NULL;
    ALLEGRO_EVENT events;
    ALLEGRO_KEYBOARD_STATE KBstate;


    /* first, set up Allegro and the graphics mode */
    al_init(); /* initialize Allegro */
    al_install_keyboard(); /* install the keyboard for Allegro to use */
    //al_install_mouse();
    al_init_image_addon();
    al_init_font_addon();    // install font addons
    al_init_ttf_addon();
    /* give right paddle its initial y-coordinate */

    bitmap_boardback = al_load_bitmap("./bitmap_boardback.jpg");

    pongFont = al_load_ttf_font("ARCHRISTY.ttf", 70, 0); /* load the FONT file */
    Font = al_load_ttf_font("ARCHRISTY.ttf", 30, 0);

    // do event registration
    event_queue = al_create_event_queue();
    al_register_event_source(event_queue, al_get_keyboard_event_source());    /* register keyboard to event queue */
    al_register_event_source(event_queue, al_get_mouse_event_source());

    while(run)
    {

/*<<<<<<< HEAD
        al_draw_bitmap(bitmap_boardback,0,0,0);
        al_draw_textf( pongFont, al_map_rgb(0, 0, 0), 340, 25, -1, "GRADE BOARD");
        al_draw_textf( Font, al_map_rgb(0, 0, 0), 340, 200, -1, "first--%s: %d %d %d %d %d:%d:%d",grade[0].name,grade[0].score,
                       grade[0].time[0], grade[0].time[1], grade[0].time[2],grade[0].time[3],
                       grade[0].time[4], grade[0].time[5] );
        al_draw_textf( Font, al_map_rgb(0, 0, 0), 340, 400, -1, "second--%s: %d %d %d %d %d:%d:%d",grade[2].name,grade[2].score,
                       grade[2].time[0], grade[2].time[1], grade[2].time[2],grade[2].time[3],
                       grade[2].time[4], grade[2].time[5] );
        al_draw_textf( Font, al_map_rgb(0, 0, 0), 340, 250, -1, "third--%s: %d %d %d %d %d:%d:%d",grade[2].name,grade[2].score,
                       grade[2].time[0], grade[2].time[1], grade[2].time[2],grade[2].time[3],
                       grade[2].time[4], grade[2].time[5] );
        al_draw_textf( Font, al_map_rgb(0, 0, 0), 340, 300, -1, "fourth--%s: %d %d %d %d %d:%d:%d",grade[3].name,grade[3].score,
                       grade[3].time[0], grade[3].time[1], grade[3].time[2],grade[3].time[3],
                       grade[3].time[4], grade[3].time[5] );
        al_draw_textf( Font, al_map_rgb(0, 0, 0), 340, 350, -1, "fifth--%s: %d %d %d %d %d:%d:%d",grade[4].name,grade[4].score,
=======*/
        al_draw_textf( pongFont, al_map_rgb(255, 255, 255), 340, 25, -1, "GRADE BOARD");
        al_draw_textf( Font, al_map_rgb(255, 255, 255), 340, 200, -1, "first--%s: %d %d %d %d %d:%d:%d",
                       grade[0].name,grade[0].score,
                       grade[0].time[0], grade[0].time[1], grade[0].time[2],grade[0].time[3],
                       grade[0].time[4], grade[0].time[5] );
        al_draw_textf( Font, al_map_rgb(255, 255, 255), 340, 250, -1, "second--%s: %d %d %d %d %d:%d:%d",grade[1].name,grade[1].score,
                       grade[1].time[0], grade[1].time[1], grade[1].time[2],grade[1].time[3],
                       grade[1].time[4], grade[1].time[5] );
        al_draw_textf( Font, al_map_rgb(255, 255, 255), 340, 300, -1, "third--%s: %d %d %d %d %d:%d:%d",grade[2].name,grade[2].score,
                       grade[2].time[0], grade[2].time[1], grade[2].time[2],grade[2].time[3],
                       grade[2].time[4], grade[2].time[5] );
        al_draw_textf( Font, al_map_rgb(255, 255, 255), 340, 350, -1, "fourth--%s: %d %d %d %d %d:%d:%d",grade[3].name,grade[3].score,
                       grade[3].time[0], grade[3].time[1], grade[3].time[2],grade[3].time[3],
                       grade[3].time[4], grade[3].time[5] );
        al_draw_textf( Font, al_map_rgb(255, 255, 255), 340, 400, -1, "fifth--%s: %d %d %d %d %d:%d:%d",grade[4].name,grade[4].score,
//>>>>>>> JOJO
                       grade[4].time[0], grade[4].time[1], grade[4].time[2],grade[4].time[3],
                       grade[4].time[4], grade[4].time[5] );

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
                        run=0;
                    if(events.keyboard.keycode == ALLEGRO_KEY_ENTER)
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
   al_destroy_bitmap(bitmap_boardback); /* destroy the bitmap */
    /* destroy the display */
    al_destroy_font( pongFont ); /* destroy the font */
    al_destroy_event_queue(event_queue);



}  /* end function main */
