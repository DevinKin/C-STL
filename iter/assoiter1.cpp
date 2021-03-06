/*************************************************************************
    > File Name: assoiter1.cpp
    > Author: King
    > Mail: arturiapendragon_1@163.com 
    > Created Time: 2017年12月19日 星期二 23时00分33秒
 ************************************************************************/

#include <iostream>
#include <unordered_set>
#include <vector>
#include <algorithm>
#include "print.hpp"
#include "assoiter.hpp"


int main()
{
	std::unordered_set<int> coll;

	// create inserter for coll
	// - inconvenient way
	asso_insert_iterator<decltype(coll)> iter(coll);

	// insert elements with the usual iterator interface
	*iter = 1;
	iter++;
	*iter = 2;
	iter++;
	*iter = 3;

	PRINT_ELEMENTS(coll);

	// create insert for coll and insert elements
	// - convenient way
	asso_inserter(coll) = 44;
	asso_inserter(coll) = 55;

	PRINT_ELEMENTS(coll);

	// use inserter with an algorithm 
	std::vector<int> vals = {33, 67, -4, 13, 5, 2};
	std::copy(vals.begin(), vals.end(),
			  asso_inserter(coll));

	PRINT_ELEMENTS(coll);
}
