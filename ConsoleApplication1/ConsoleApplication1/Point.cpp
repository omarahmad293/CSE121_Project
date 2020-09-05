#include <stdio.h>
#include <stdlib.h>

#include "Point.h"

int Point::max_x = INT_MIN;
int Point::max_y = INT_MIN;

int Point::min_x = INT_MAX;
int Point::min_y = INT_MAX;

Point::Point(int x, int y)
	:x(x), y(y) 
{
	max_x = max(x, max_x);
	max_y = max(y, max_y);

	min_x = min(x, min_x);
	min_y = min(y, min_y);
}

void Point::print()
{
	printf("(%d, %d)\n", x, y);
}

string Point::str()
{
	return string('(' + to_string(x) + ',' + to_string(y) + ')');
}