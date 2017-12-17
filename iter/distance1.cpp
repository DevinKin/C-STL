/*************************************************************************
    > File Name: distance1.cpp
    > Author: King
    > Mail: arturiapendragon_1@163.com 
    > Created Time: 2017年12月17日 星期日 16时48分13秒
 ************************************************************************/

#include <iostream>
#include <iterator>
#include <list>
#include <algorithm>

using namespace std;

int main()
{
	list<int> coll;

	// insert elements from -3 to 9
	for (int i = -3; i < 9; ++i)
		coll.push_back(i);

	// search element with value 5
	list<int>::iterator pos;
	pos = find(coll.begin(), coll.end(), 5);

	if (pos != coll.end())
	{
		// process and print difference from the beginning
		cout << "difference between beginning and 5: "
			 << distance(coll.begin(), pos) << endl;
	}
	else
		cout << "5 not found" << endl;
}

