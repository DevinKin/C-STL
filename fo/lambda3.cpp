/*************************************************************************
    > File Name: lambada3.cpp
    > Author: King
    > Mail: arturiapendragon_1@163.com 
    > Created Time: 2017年12月30日 星期六 21时54分48秒
 ************************************************************************/

#include <iostream>
#include <list>
#include <algorithm>
#include "print.hpp"
using namespace std;

int main()
{
	list<int> coll = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	PRINT_ELEMENTS(coll, "coll:	");

	//remove third element
	list<int>::iterator pos;
	int count=0;
	pos = remove_if(coll.begin(), coll.end(),		//range
				[count] (int) mutable {				//remove criterion
					return ++count == 3;
				});
	coll.erase(pos, coll.end());
	PRINT_ELEMENTS(coll, "3rd removed: ");
	cout << "count: " << count << endl;
}

