/*************************************************************************
    > File Name: inplacemerge1.cpp
    > Author: King
    > Mail: arturiapendragon_1@163.com 
    > Created Time: 2018年01月20日 星期六 14时46分13秒
 ************************************************************************/

#include "algostuff.hpp"
using namespace std;

int main()
{
	list<int> coll;

	// insert two sorted sequences
	INSERT_ELEMENTS(coll, 1, 7);
	INSERT_ELEMENTS(coll, 1, 8);
	PRINT_ELEMENTS(coll);

	// find beginning of second part (element after 7)
	list<int>::iterator pos;
	pos = find(coll.begin(), coll.end(), 7);
	++pos;

	// merge into one sorted range
	inplace_merge(coll.begin(), pos, coll.end());

	PRINT_ELEMENTS(coll);
}

