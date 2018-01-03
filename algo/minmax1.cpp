/*************************************************************************
    > File Name: minmax1.cpp
    > Author: King
    > Mail: arturiapendragon_1@163.com 
    > Created Time: 2018年01月03日 星期三 18时32分34秒
 ************************************************************************/

#include <iostream>
#include "algostuff.hpp"
#include <cstdlib>
using namespace std;

bool absLess(int elem1, int elem2)
{
	return abs(elem1) < abs(elem2);
}

int main()
{
	deque<int> coll;
	INSERT_ELEMENTS(coll, 2, 6);
	INSERT_ELEMENTS(coll, -3, 6);

	PRINT_ELEMENTS(coll);

	//process and print minimum and maximum
	cout << "minimum: "
		 << *min_element(coll.begin(), coll.end())
		 << endl;
	cout << "maximum: "
		 << *max_element(coll.begin(), coll.end())
		 << endl;

	//print min and max anad their distance using minmax_element()
	auto mm = minmax_element(coll.cbegin(), coll.cend());
	cout << "min: " << *(mm.first) << endl;				
	cout << "max: " << *(mm.second) << endl;
	cout << "distance: " << distance(mm.first, mm.second) << endl;

	//process and print minimum and maximum of absolute values
	cout << "minimum of absolute values: "
		 << *min_element(coll.cbegin(), coll.cend(),
						 absLess)
		 << endl;
	cout << "maximum of absolute values: "
		 << *max_element(coll.cbegin(), coll.cend(),
						absLess)
		 << endl;
}


