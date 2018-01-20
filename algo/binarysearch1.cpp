/*************************************************************************
    > File Name: binarysearch1.cpp
    > Author: King
    > Mail: arturiapendragon_1@163.com 
    > Created Time: 2018年01月20日 星期六 09时31分05秒
 ************************************************************************/

#include "algostuff.hpp"
using namespace std;

int main()
{
	list<int> coll;

	INSERT_ELEMENTS(coll, 1, 9);
	PRINT_ELEMENTS(coll);

	// check existence of element with value 5
	if (binary_search(coll.cbegin(), coll.cend(), 5)) {
		cout << "5 is present" << endl;
	}
	else {
		cout << "5 is not present" << endl;
	}

	// check existance of element with value 42
	if (binary_search(coll.cbegin(), coll.cend(), 42)) {
		cout << "42 is present" << endl;
	} 
	else {
		cout << "42 is not present" << endl;
	}

}
