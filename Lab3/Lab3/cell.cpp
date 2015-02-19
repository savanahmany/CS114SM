#include "cell.h"

cell::cell(int r, int c, char s)
{
		 row = r;
		 col = c;
		 status = s;

}
void cell::setStatus(char s) { status = s; }
int cell::getStatus(int r, int c) { return grid[r, c]; }


void cell::DrawGrid() {
	for (row = 0; row < 3; row++)
	for (col = 0; col < 3; col++)
	if (grid[row, col]->status == 'x')
		g->DrawImage(ncsu, 0,0);
		else status=status;

}