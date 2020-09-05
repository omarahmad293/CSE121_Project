#pragma once

#include <stdio.h>
#include <vector>
using namespace std;

#include "Point.h"
#include "helper.h"

class Polygon
{
public:
	vector<Point> points;
	static int number_of_polygons;
	int number_of_points = points.size();

	Polygon(vector<Point> points);
	void print();
};
