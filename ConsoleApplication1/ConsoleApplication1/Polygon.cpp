#include "Polygon.h"

int Polygon::number_of_polygons = 0;

Polygon::Polygon(vector<Point> points)
	:points(points)
{
	number_of_polygons++;
}

void Polygon::print()
{
	printf("Polygon\n");
	//string r = join(points.begin(), points.end(), ',');
}