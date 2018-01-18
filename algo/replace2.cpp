/*************************************************************************
    > File Name: replace2.cpp
    > Author: King
    > Mail: arturiapendragon_1@163.com 
    > Created Time: 2018年01月12日 星期五 21时09分11秒
 ************************************************************************/

#include "algostuff.hpp"
using namespace std;
using namespace std::placeholders;

int main()
{
	list<int> coll;

	INSERT_ELEMENTS(coll, 2, 6);
	INSERT_ELEMENTS(coll, 4, 9);
	PRINT_ELEMENTS(coll);

	// print all elements with value 5 replaced with 55
	replace_copy(coll.cbegin(), coll.cend(),
			ostream_iterator<int>(cout, " "),
			5,
			55);
	cout << endl;

	// print all elements with 5 value less than 5 replaced with 42
	replace_copy_if(coll.cbegin(), coll.cend(),				//source
				ostream_iterator<int>(cout, " "),			//destination
				bind(less<int>(), _1, 5),					//replacement criterion
				42);										//new value
	cout << endl;

	replace_copy_if(coll.cbegin(), coll.cend(),
				ostream_iterator<int>(cout, " "),
				[](int elem) {
					return elem % 2 == 1;
				},
				0);
	cout << endl;
}

