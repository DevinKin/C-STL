/*************************************************************************
    > File Name: map2.cpp
    > Author: King
    > Mail: arturiapendragon_1@163.com 
    > Created Time: 2017年12月12日 星期二 13时00分35秒
 ************************************************************************/

#include <iostream>
#include <map>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
	// create map / associative array
	// - keys are strings
	// - values are floats
	typedef map<string, float> StringFloatMap;

	StringFloatMap stocks;				// create enpty container
	// insert some elements
	stocks["BASF"] = 368.50;
	stocks["VW"] = 413.50;
	stocks["Daimler"] = 819.00;
	stocks["BMW"] = 834.00;
	stocks["Siemens"] = 842.00;

	// print all elements
	StringFloatMap::iterator pos;
	cout << left;						// left-adjust values
	for (pos = stocks.begin(); pos != stocks.end(); ++pos)
	{
		cout << "stocks: " << setw(12) << pos->first
			 << "price: " << pos->second << endl;
	}
	cout << endl;
}

