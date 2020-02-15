// Cicle Structure Program.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <msoftcon.h>

using namespace std;


struct circle
{
	int xCo, yCo;
	int radius;
	color fillcolor;
	fstyle fillstyle;
};
void circ_draw(circle c)
{
	set_color (c.fillcolor);
	set_fill_style (c.fillstyle);
	draw_circle (c.xCo, c.yCo, c.radius);
}
int main()
{
	init graphics();
	circlec1= {15,7,5,cBLUE,X_FILL};
	ciclec2= {41,12,7,cRED,O_FILL};
	ciclec3= {65,18,4,cGREEN, MEDIUM_FILL};
	cicr_draw (c1);
	circ_draw (c2);
	circ_draw (c3);
	set_cursor_pos(1,25);

	cout<<"Press any key to exit";
	getchar();
	getchar();
	return 0;
}
