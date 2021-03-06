#ifndef DISPLAY_H
#define DISPLAY_H

#include "ml6.h"

void plot( screen s, zbuffer zb, color c, int x, int y, double z);
void clear_zbuffer( zbuffer zb );
void make_animation( char * name );
void clear_screen( screen s, color c );
void save_ppm( screen s, char *file);
void save_extension( screen s, char *file);
void display( screen s);
void swap( int * a, int * b );

#endif
