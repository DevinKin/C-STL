/*************************************************************************
    > File Name: findend1.cpp
    > Author: King
    > Mail: arturiapendragon_1@163.com 
    > Created Time: 2018年01月06日 星期六 14时54分05秒
 ************************************************************************/

#include "algostuff.hpp"
using namespace std;

int main()
{
	deque<int> coll;
	list<int> subcoll;

	INSERT_ELEMENTS(coll, 1, 7);
	INSERT_ELEMENTS(coll, 1, 7);
	INSERT_ELEMENTS(subcoll, 3, 6);
	
	PRINT_ELEMENTS(coll, "coll: ");
	PRINT_ELEMENTS(subcoll, "subcoll: ");

	//search last occurrence of subcoll in coll
	deque<int>::iterator pos;
	pos = find_end(coll.begin(), coll.end(), 
					subcoll.begin(), subcoll.end());

	deque<int>::iterator end(coll.end());
	// loop while subcoll found as subrange of coll
	while (pos != end)
	{
		// print position of first element
		cout << "subcoll found starting with element "
			 << distance(coll.begin(), pos) + 1
			 << endl;
	
		// search next occurrence of subcoll
		end = pos;
		pos = find_end(coll.begin(), end,
						subcoll.begin(), subcoll.end());
	}


}
