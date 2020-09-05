#include <iostream>
#include <string>
using namespace std;

#include "Point.h"
#include "Polygon.h"
#include "Split.h"

#define LOG(x) cout << x << endl;


int main()
{
	string S = "Polygons=[(1,1),(2,2),(1,3),(0,2);(0,1),(3,3),(1,6),(-2,4);(5,-5),(1,-3),(4,1),(7,2),(7,-6)]";
	S = extract(S);
	vector<Polygon> polygons = parsePolygons(S);


	return 0;
}