#include<allegro5\allegro.h>
#include <allegro5\allegro_font.h>
#include <allegro5\allegro_ttf.h>
#include<iostream>
using namespace std;


int main() {

	int age = 0;

	ALLEGRO_FONT *font = NULL;
    ALLEGRO_DISPLAY *display = NULL;

   if(!al_init()) {
      fprintf(stderr, "failed to initialize allegro!\n");
      return -1;
   }
   al_init_font_addon();
   al_init_ttf_addon();

   font = al_load_ttf_font("OptimusPrinceps.ttf", 25, NULL);
   cout << "Hey! What's your age?" << endl;
   cin >> age;


   display = al_create_display(640, 480);
   if(!display) {
      fprintf(stderr, "failed to create display!\n");
      return -1;
   }

   al_clear_to_color(al_map_rgb(0,0,0));
   
   


   
	al_draw_textf(font, al_map_rgb(200, 50, 50), 200, 100, ALLEGRO_ALIGN_CENTRE, "YOUR AGE IS : %i", age);
al_flip_display();
   al_rest(10.0);

   al_destroy_display(display);

   return 0;
}