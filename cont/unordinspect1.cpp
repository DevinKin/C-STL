/*************************************************************************
    > File Name: unordinspect1.cpp
    > Author: King
    > Mail: arturiapendragon_1@163.com 
    > Created Time: 2017年12月14日 星期四 11时07分16秒
 ************************************************************************/

#include <iostream>
#include <unordered_set>
#include "buckets.hpp"

int main()
{
	// create and initialize and unordered set
	std::unordered_set<int>  intset = {1, 2, 3, 5, 7, 11, 13, 17, 19};
	printHashTableState(intset);

	//insert some additional values (might cause rehashing)
	intset.insert({-7, 17, 33, 4});
	printHashTableState(intset);
	return(0);
}


