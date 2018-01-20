/*************************************************************************
    > File Name: merge1.cpp
    > Author: King
    > Mail: arturiapendragon_1@163.com 
    > Created Time: 2018年01月20日 星期六 10时48分56秒
 ************************************************************************/

#include "algostuff.hpp"
using namespace std;

int main()
{
	list<int> coll1;
	set<int> coll2;

	// fill both collections with some sorted elements
	INSERT_ELEMENTS(coll1, 1, 6);
	INSERT_ELEMENTS(coll2, 3, 8);

	PRINT_ELEMENTS(coll1, "coll1: ");
	PRINT_ELEMENTS(coll2, "coll2: ");

	// print merged sequence
	cout << "merged: ";
	merge(coll1.cbegin(), coll1.cend(),
			coll2.cbegin(), coll2.cend(),
			ostream_iterator<int>(cout, " "));
	cout << endl;
}

