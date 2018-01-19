/*************************************************************************
    > File Name: paritialsort1.cpp
    > Author: King
    > Mail: arturiapendragon_1@163.com 
    > Created Time: 2018年01月20日 星期六 00时19分15秒
 ************************************************************************/

#include "algostuff.hpp"
using namespace std;

int main()
{
	deque<int> coll;

	INSERT_ELEMENTS(coll, 3, 7);
	INSERT_ELEMENTS(coll, 2, 6);
	INSERT_ELEMENTS(coll, 1, 5);
	PRINT_ELEMENTS(coll);

	// sort until the first five elements are sorted
	partial_sort(coll.begin(),				// beginning of the range
				 coll.begin() + 5,			// end of sorted range
				 coll.end());				// end of full range
	PRINT_ELEMENTS(coll);

	// sort inversely until the first five elements are sorted
	partial_sort(coll.begin(),				// beginning of the range
				 coll.begin() + 5,			// end of sorted range
				 coll.end(),				// end of the full range
				 greater<int>());			// sorting criterion
	PRINT_ELEMENTS(coll);

	// sort all elements
	partial_sort(coll.begin(),				// beginning of the range
				 coll.end(),				// end of sorted range
				 coll.end());				// end of full range
	PRINT_ELEMENTS(coll);
}

