/*************************************************************************
    > File Name: sort1.cpp
    > Author: King
    > Mail: arturiapendragon_1@163.com 
    > Created Time: 2018年01月19日 星期五 23时36分35秒
 ************************************************************************/

#include "algostuff.hpp"
using namespace std;

int main()
{
	deque<int> coll;

	INSERT_ELEMENTS(coll, 1, 9);
	INSERT_ELEMENTS(coll, 1, 9);

	PRINT_ELEMENTS(coll, "on entry: ");

	// sort elements
	sort(coll.begin(), coll.end());

	PRINT_ELEMENTS(coll, "sorted: ");

	// sorted reverse
	sort(coll.begin(), coll.end(), 
			greater<int>());
	PRINT_ELEMENTS(coll, "sorted: ");

}

