#include "helper.h"

string join(vector<string>::iterator begin, vector<string>::iterator end, char delim)
{
	string s;
	for (vector<string>::iterator it = begin; it != end; ++it)
	{
		s += *it;
		if (it != end - 1)
		{
			s += delim;
		}
	}
	return s;
}