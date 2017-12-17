/*************************************************************************
    > File Name: generalinserter1.cpp
    > Author: King
    > Mail: arturiapendragon_1@163.com 
    > Created Time: 2017年12月17日 星期日 19时31分20秒
 ************************************************************************/

#include <algorithm>
#include <iterator>
#include "print.hpp"
#include <list>
#include <set>
using namespace std;

int main()
{
	set<int> coll;

	// create insert iterator for coll
	// - inconvenient way
	insert_iterator<set<int>> iter(coll, coll.begin());

	// insert elements with the usual iterator interface
	*iter = 1;
	iter++;
	*iter = 2;
	iter++;
	*iter = 3;

	PRINT_ELEMENTS(coll, "set:  ");


	// create inserter and insert elements 
	// - convenient way
	inserter(coll, coll.end()) = 44;
	inserter(coll, coll.end()) = 55;

	PRINT_ELEMENTS(coll, "set:  ");

	// use inserter to insert all elements into a list
	list<int> coll2;
	copy(coll.begin(), coll.end(), 
			inserter(coll2, coll2.begin()));
	PRINT_ELEMENTS(coll2, "list:  ");
}

