/*************************************************************************
    > File Name: iterswap.cpp
    > Author: King
    > Mail: arturiapendragon_1@163.com 
    > Created Time: 2017年12月17日 星期日 16时52分16秒
 ************************************************************************/

#include <iostream>
#include <list>
#include <algorithm>
#include <iterator>
#include "print.hpp"
using namespace std;

int main()
{
	list<int> coll;

	// insert elements from 1 to 9
	for (int i = 1; i <=9; ++i)
	{
		coll.push_back(i);
	}
	
	PRINT_ELEMENTS(coll);

	//swap first and last value
	iter_swap(coll.begin(), prev(coll.end()));

	PRINT_ELEMENTS(coll);
	
}





