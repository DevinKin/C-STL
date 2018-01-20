/*************************************************************************
    > File Name: adjacentdiff1.cpp
    > Author: King
    > Mail: arturiapendragon_1@163.com 
    > Created Time: 2018年01月20日 星期六 15时30分58秒
 ************************************************************************/

#include "algostuff.hpp"
using namespace std;

int main()
{
	deque<int> coll;

	INSERT_ELEMENTS(coll, 1, 6);
	PRINT_ELEMENTS(coll);

	// print all differences between elements
	adjacent_difference(coll.cbegin(), coll.cend(),
						ostream_iterator<int>(cout, " "));
	cout << endl;

	// print all sums with the predecessors
	adjacent_difference(coll.cbegin(), coll.cend(),
						ostream_iterator<int>(cout, " "),
						plus<int>());
	cout << endl;

	// ;print all products between elements
	adjacent_difference(coll.cbegin(), coll.cend(),
						ostream_iterator<int>(cout, " "),
						multiplies<int>());
	cout << endl;
}

