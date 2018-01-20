/*************************************************************************
    > File Name: relabs1.cpp
    > Author: King
    > Mail: arturiapendragon_1@163.com 
    > Created Time: 2018年01月20日 星期六 15时35分18秒
 ************************************************************************/

#include "algostuff.hpp"
using namespace std;

int main()
{
	vector<int> coll = { 17, -3, 22, 13, 13, -9 };
	PRINT_ELEMENTS(coll, "coll: ");

	// convert into relative values
	adjacent_difference(coll.cbegin(), coll.cend(),
						coll.begin());
	PRINT_ELEMENTS(coll, "relative: ");

	// convert into absolute values()
	partial_sum(coll.cbegin(), coll.cend(),
				coll.begin());

	PRINT_ELEMENTS(coll, "absolute: ");
}


