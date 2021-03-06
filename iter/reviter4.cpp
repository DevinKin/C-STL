/*************************************************************************
    > File Name: reviter4.cpp
    > Author: King
    > Mail: arturiapendragon_1@163.com 
    > Created Time: 2017年12月17日 星期日 17时16分25秒
 ************************************************************************/

#include <iostream>
#include <iterator>
#include <list>
#include <algorithm>

using namespace std;

int main()
{
	// create list with elements from 1 to 9
	list<int> coll = {1, 2, 3, 4, 5, 6, 7, 8, 9};

	// find position of element with value 5
	list<int>::const_iterator pos;
	pos = find(coll.cbegin(), coll.cend(), 5);

	// print value of the element
	cout << "pos: " << *pos << endl;

	// convert iterator to reverse iterator
	list<int>::const_reverse_iterator rpos(pos);

	// print value of the element to which the reverse iterator refers 
	cout << "rpos:  " << *rpos << endl;

	// convert reverse iterator back to normal iterator
	list<int>::const_iterator rrpos;
	rrpos = rpos.base();

	// print value of the element to which the normal iterator refers
	cout << "rrpos:  " << *rrpos << endl;
}

