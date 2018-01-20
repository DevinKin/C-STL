/*************************************************************************
    > File Name: accumulate1.cpp
    > Author: King
    > Mail: arturiapendragon_1@163.com 
    > Created Time: 2018年01月20日 星期六 15时06分39秒
 ************************************************************************/

#include "algostuff.hpp"
using namespace std;

int main()
{
	vector<int> coll;

	INSERT_ELEMENTS(coll, 1, 9);
	PRINT_ELEMENTS(coll);

	// process sum of elements
	cout << "sum: "
		 << accumulate(coll.cbegin(), coll.cend(), 0)
	     << endl;

	// process sum of elements less 100
	cout << "sum: "
		 << accumulate(coll.cbegin(), coll.cend(), -100)
		 << endl;

	// process product of elements
	cout << "product: "
		 << accumulate(coll.cbegin(), coll.cend(), 1, multiplies<int>())
		 << endl;
	//
	// process product of elements
	cout << "product: "
		 << accumulate(coll.cbegin(), coll.cend(), 0, multiplies<int>())
		 << endl;
}

