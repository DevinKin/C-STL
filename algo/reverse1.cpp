/*************************************************************************
    > File Name: reverse1.cpp
    > Author: King
    > Mail: arturiapendragon_1@163.com 
    > Created Time: 2018年01月18日 星期四 15时16分42秒
 ************************************************************************/

#include "algostuff.hpp"
using namespace std;

int main()
{
	vector<int> coll;

	INSERT_ELEMENTS(coll, 1, 9);
	PRINT_ELEMENTS(coll, "coll: ");

	// reverse order of elements
	reverse(coll.begin(), coll.end());
	PRINT_ELEMENTS(coll, "coll: ");

	// reverse order from second to last element but one
	reverse(coll.begin() + 1, coll.end() - 1);

	// print all of them in reverse order
	reverse_copy(coll.cbegin(), coll.cend(),
				ostream_iterator<int>(cout, " "));
	cout << endl;
}

