/*************************************************************************
    > File Name: unique1.cpp
    > Author: King
    > Mail: arturiapendragon_1@163.com 
    > Created Time: 2018年01月18日 星期四 12时56分12秒
 ************************************************************************/

#include "algostuff.hpp"
using namespace std;

int main()
{
	// source data
	int source[] = {1, 4, 4, 6, 1, 2, 2, 3, 1, 6, 6, 6, 5, 7, 5, 4, 4};

	list<int> coll;

	// initialize coll with elements from source
	copy(begin(source), end(source),
			back_inserter(coll));
	PRINT_ELEMENTS(coll);

	// remove consecutive duplicates
	auto pos = unique(coll.begin(), coll.end());

	// print elements not removed
	// - use new logical end
	copy(coll.begin(), pos,
			ostream_iterator<int>(cout, " "));
	cout << "\n\n";

	// reinitialize coll with elements from source
	copy(begin(source), end(source),
			coll.begin());
	PRINT_ELEMENTS(coll);

	// remove elements if there was a previous greater element
	coll.erase(unique(coll.begin(), coll.end(),
						greater<int>()),
				coll.end());
	PRINT_ELEMENTS(coll);
}

