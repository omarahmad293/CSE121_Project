#include "Split.h"

string extract(string S)
{
	regex rgx(R"(\[(.*)\])");			// Regex to match strings encosed in '[' and ']'
	smatch matches;						// smatch object to hold the matches
	regex_search(S, matches, rgx);		// Search the string "S" for the regex "rgx"
	return matches.str(1);				// Return the first matching group
}

vector<string> splitPolygons(string S)
{
	vector<string> polygons;				// Vector of polygon strings
	regex rgx(R"(([^;]+))");				// Regex to match strings separated by ';'
	smatch matches;							// smatch object to hold the matches
	while (regex_search(S, matches, rgx))	// Search the string "S" for the regex "rgx"
	{
		polygons.push_back(matches.str());
		S = matches.suffix().str();
	}
	return polygons;						// Return the vector of polygons strings
}

vector<Polygon> parsePolygons(string S)
{
	vector<string> polygons_strings = splitPolygons(S);
	vector<Polygon> polygons;
	regex rgx(R"(\((.*?)\))");
	for (string p : polygons_strings)
	{
		vector<Point> points;
		smatch matches;
		while (regex_search(p, matches, rgx))
		{
			Point P = parsePoint(matches.str());
			points.push_back(P);
			p = matches.suffix().str();
		}
		//Polygon polygon = Polygon(points);
		//polygons.push_back(polygon);
		polygons.emplace_back(points);
	}
	return polygons;
}

Point parsePoint(string p)
{
	int x, y;
	regex rgx(R"(\((.*),(.*)\))");
	smatch matches;
	regex_search(p, matches, rgx);
	x = stoi(matches.str(1));
	y = stoi(matches.str(2));
	return Point(x, y);
}