/*************************************************************************
    > File Name: equalrange1.cpp
    > Author: King
    > Mail: arturiapendragon_1@163.com 
    > Created Time: 2018年01月20日 星期六 10时38分25秒
 ************************************************************************/

#include "algostuff.hpp"
using namespace std;

int main()
{
	list<int> coll;

	INSERT_ELEMENTS(coll, 1, 9);
	INSERT_ELEMENTS(coll, 1, 9);
	coll.sort();
	PRINT_ELEMENTS(coll);

	// print first and last position 5 could get inserted
	pair<list<int>::const_iterator, list<int>::const_iterator> range;
	range = equal_range(coll.cbegin(), coll.cend(), 5);

	cout << "5 could get position "
		 << distance(coll.cbegin(), range.first) + 1
		 << " up to "
		 << distance(coll.cbegin(), range.second) + 1
		 << " without breaking the sorting" << endl;
}

