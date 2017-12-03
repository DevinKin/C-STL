/*************************************************************************
    > File Name: transform1.cpp
    > Author: King
    > Mail: arturiapendragon_1@163.com 
    > Created Time: 2017年12月03日 星期日 00时36分06秒
 ************************************************************************/

#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#include <iterator>
#include "print.hpp"


int square(int value)
{
	return value*value;
}

int main()
{
	std::set<int>	coll1;
	std::vector<int> coll2;

	for(int i=1; i<=9; ++i)
		coll1.insert(i);
	PRINT_ELEMENTS(coll1, "initialized: ");
	std::transform(coll1.cbegin(), coll1.cend(),
					std::back_inserter(coll2),
					square);

	PRINT_ELEMENTS(coll2, "squared: ");
}
