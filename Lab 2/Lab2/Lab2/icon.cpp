//#ifndef
//#define ICON_H
//#endf


#include "icon.h"


int icon::get_x()
{
	return x;
}

int icon::get_y()
{
	return y;
}

void icon::set_x(int xmove)
{
		x += xmove;
	return;
}

void icon::set_y(int ymove)
{
		y += ymove;
	return;
}
