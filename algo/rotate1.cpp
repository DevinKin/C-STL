/*************************************************************************
    > File Name: rotate1.cpp
    > Author: King
    > Mail: arturiapendragon_1@163.com 
    > Created Time: 2018年01月18日 星期四 15时25分51秒
 ************************************************************************/

#include "algostuff.hpp"
using namespace std;

int main()
{
	vector<int> coll;

	INSERT_ELEMENTS(coll, 1, 9);
	PRINT_ELEMENTS(coll, "coll: ");

	// rotate one element to the left
	rotate(coll.begin(),				// beginning of range
			coll.begin() + 1,			// new first element
			coll.end());				// end of range
	PRINT_ELEMENTS(coll, "one left: ");

	// rotate two elements to the right
	rotate(coll.begin(),				// beginning of range
			coll.end() - 2,				// new first element
			coll.end());				// end of range
	PRINT_ELEMENTS(coll, "two right: ");

	// rotate so that element with value 4 is the beginning
	rotate(coll.begin(),				// beginning of range
			find(coll.begin(), coll.end(), 4),		// new first element
			coll.end());
	PRINT_ELEMENTS(coll, "4 first: ");
}

