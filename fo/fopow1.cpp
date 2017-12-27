/*************************************************************************
    > File Name: fopow1.cpp
    > Author: King
    > Mail: arturiapendragon_1@163.com 
    > Created Time: 2017年12月27日 星期三 08时16分42秒
 ************************************************************************/

#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <functional>
#include "fopow.hpp"

using namespace std;
using namespace std::placeholders;

int main()
{
	vector<int> coll = {1, 2, 3, 4, 5, 6, 7, 8, 9};

	//print 3 raised to power of all elements
	transform(coll.begin(), coll.end(),					//source
			ostream_iterator<float>(cout, " "),			//destination
			bind(fopow<float, int>(),3,_1));			// operation
	cout << endl;

	//print all element raised to power of 3
	transform (coll.begin(), coll.end(),
			ostream_iterator<float>(cout, " "),
			bind(fopow<float, int>(), _1, 3));
	cout << endl;
}
