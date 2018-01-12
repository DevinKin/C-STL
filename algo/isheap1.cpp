/*************************************************************************
    > File Name: isheap1.cpp
    > Author: King
    > Mail: arturiapendragon_1@163.com 
    > Created Time: 2018年01月10日 星期三 06时29分45秒
 ************************************************************************/

#include "algostuff.hpp"
using namespace std;

int main()
{
	vector<int> coll1 = {9, 8, 7, 6, 5, 4, 3, 2, 1};
	vector<int> coll2 = {5, 3, 2, 1, 4, 7, 9, 8, 6};
	PRINT_ELEMENTS(coll1, "coll1: ");
	PRINT_ELEMENTS(coll2, "coll2: ");

	// check whether the collections are heaps
	cout << boolalpha << "coll1 is heap: "
		 << is_heap(coll1.begin(), coll1.end()) << endl;
	cout << "coll2 is heap: "
		 << is_heap(coll2.cbegin(), coll2.cend()) << endl;
	
	// print whether the collections are heaps
	auto pos = is_heap_until(coll2.cbegin(), coll2.cend());

	if (pos != coll2.end()) {
		cout << "first non-heap element: " << *pos << endl;
	}
}

