#pragma once

#include <string>
using namespace std;

class Point
{
public:
	int x, y;
	static int max_x, max_y, min_x, min_y;

	Point(int x, int y);
	void print();
	string Point::str();
};
