/*************************************************************************
    > File Name: partition1.cpp
    > Author: King
    > Mail: arturiapendragon_1@163.com 
    > Created Time: 2018年01月19日 星期五 22时53分37秒
 ************************************************************************/

#include "algostuff.hpp"
using namespace std;

int main()
{
	vector<int> coll1;
	vector<int> coll2;

	INSERT_ELEMENTS(coll1, 1, 9);
	INSERT_ELEMENTS(coll2, 1, 9);
	PRINT_ELEMENTS(coll1, "coll1: ");
	PRINT_ELEMENTS(coll2, "coll2: ");
	cout << endl;

	// move all even elements to the front
	vector<int>::iterator pos1, pos2;
	pos1 = partition(coll1.begin(), coll1.end(),				// range
					[](int elem) {
						return elem % 2 == 0;
					});

	pos2 = stable_partition(coll2.begin(), coll2.end(),
							[](int elem) {
								return elem % 2 == 0;
							});

	// print collections and first odd element
	PRINT_ELEMENTS(coll1, "coll1: ");
	cout << "first odd element: " << *pos1 << endl;
	PRINT_ELEMENTS(coll2, "coll2: ");
	cout << "first odd element: " << *pos2 << endl;
}

