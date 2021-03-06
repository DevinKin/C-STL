/*************************************************************************
    > File Name: findof1.cpp
    > Author: King
    > Mail: arturiapendragon_1@163.com 
    > Created Time: 2018年01月06日 星期六 15时05分32秒
 ************************************************************************/

#include "algostuff.hpp"
using namespace std;

int main()
{
	vector<int> coll;
	list<int>	searchcoll;

	INSERT_ELEMENTS(coll, 1, 11);
	INSERT_ELEMENTS(searchcoll, 3, 5);

	PRINT_ELEMENTS(coll, "coll: ");
	PRINT_ELEMENTS(searchcoll, "searchcoll: ");

	//search first occurrence of an element of searchcoll in coll
	vector<int>::iterator pos;
	pos = find_first_of(coll.begin(), coll.end(),			//range
						searchcoll.begin(), searchcoll.end());

	cout << "first element of searchcoll in coll is element "
		 << distance(coll.begin(), pos) + 1
		 << endl;

	// search last occurrence of an element of search in coll
	vector<int>::reverse_iterator rpos;
	rpos = find_first_of(coll.rbegin(), coll.rend(), 
						searchcoll.begin(), searchcoll.end());

	cout << "last element of searchcoll in coll is element "
		 << distance(coll.begin(), rpos.base())
		 << endl;

}

