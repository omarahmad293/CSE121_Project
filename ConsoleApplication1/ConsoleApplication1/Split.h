#pragma once

#include <regex>
#include <string>
#include <vector>

#include "Polygon.h"
using namespace std;

string extract(string S);
vector<string> splitPolygons(string S);
vector<Polygon> parsePolygons(string S);
Point parsePoint(string);