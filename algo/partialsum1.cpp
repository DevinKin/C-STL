/*************************************************************************
    > File Name: partialsum1.cpp
    > Author: King
    > Mail: arturiapendragon_1@163.com 
    > Created Time: 2018年01月20日 星期六 15时23分57秒
 ************************************************************************/

#include "algostuff.hpp"
using namespace std;

int main()
{
	vector<int> coll;
	INSERT_ELEMENTS(coll, 1, 6);
	PRINT_ELEMENTS(coll);

	// print all partial sums
	partial_sum(coll.cbegin(), coll.cend(),
				ostream_iterator<int>(cout, " "));
	cout << endl;

	// print all partial products
	partial_sum(coll.cbegin(), coll.cend(),
				ostream_iterator<int>(cout, " "),
				multiplies<int>());
	cout << endl;
}

