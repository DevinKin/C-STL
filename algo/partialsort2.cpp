/*************************************************************************
    > File Name: partialsort2.cpp
    > Author: King
    > Mail: arturiapendragon_1@163.com 
    > Created Time: 2018年01月20日 星期六 00时29分33秒
 ************************************************************************/

#include "algostuff.hpp"
using namespace std;

int main()
{
	deque<int> coll1; 
	vector<int> coll6(6);
	vector<int> coll30(30);

	INSERT_ELEMENTS(coll1, 3, 7);
	INSERT_ELEMENTS(coll1, 2, 6);
	INSERT_ELEMENTS(coll1, 1, 6);
	PRINT_ELEMENTS(coll1);

	// copy elements of coll1 sorted into coll6
	vector<int>::const_iterator pos6;
	pos6 = partial_sort_copy(coll1.cbegin(), coll1.cend(),
							 coll6.begin(), coll6.end());

	// print all copyied elements
	copy(coll6.cbegin(), pos6, 
			ostream_iterator<int>(cout, " "));
	cout << endl;

	// copy elements of coll1 sorted into coll30
	vector<int>::const_iterator pos30;
	pos30 = partial_sort_copy(coll1.cbegin(), coll1.cend(),
							  coll30.begin(), coll30.end(),
							  greater<int>());

	// print all copied elements
	copy(coll30.cbegin(), pos30,
			ostream_iterator<int>(cout, " "));
	cout << endl;
}

