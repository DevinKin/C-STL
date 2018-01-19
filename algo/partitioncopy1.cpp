/*************************************************************************
    > File Name: partitioncopy1.cpp
    > Author: King
    > Mail: arturiapendragon_1@163.com 
    > Created Time: 2018年01月19日 星期五 23时25分07秒
 ************************************************************************/

#include "algostuff.hpp"
using namespace std;

int main()
{
	vector<int> coll = {1, 6, 33, 7, 22, 4, 11, 33, 2, 7, 0, 42, 5};
	PRINT_ELEMENTS(coll, "coll: ");

	// destination collections:
	vector<int> evenColl;
	vector<int> oddColl;

	// copy all elements partitioned accondingly into even and odd elements
	partition_copy(coll.cbegin(), coll.cend(),			// source range
					back_inserter(evenColl),			// destination for even elements
					back_inserter(oddColl),				// destination for odd elements
					[](int elem) {
						return elem % 2 == 0;	
					});
	PRINT_ELEMENTS(evenColl, "evenColl: ");
	PRINT_ELEMENTS(oddColl, "oddColl: ");

}

