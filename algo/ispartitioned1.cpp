/*************************************************************************
    > File Name: ispartitioned1.cpp
    > Author: King
    > Mail: arturiapendragon_1@163.com 
    > Created Time: 2018年01月10日 星期三 06时19分43秒
 ************************************************************************/

#include "algostuff.hpp"
using namespace std;

int main()
{
	vector<int> coll = {5, 3, 9, 1, 3, 4, 8, 2, 6};
	PRINT_ELEMENTS(coll, "coll1: ");

	// define predicate: check whether element is odd:
	auto isOdd = [](int elem) {
					return elem % 2 == 1;
				};

	// check whether coll is partitioned in odd and even elements
	if (is_partitioned(coll.cbegin(), coll.cend(),				//range
						isOdd)) {
		cout << "coll is partitioned" << endl;

		// find first even element: 
		auto pos = partition_point(coll.cbegin(), coll.cend(),
									isOdd);
		cout << "first even element: " << *pos << endl;
	}
	else
	{
		cout << "coll is not partitioned" << endl << endl;;
	}
}

