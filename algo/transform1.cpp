/*************************************************************************
    > File Name: transform1.cpp
    > Author: King
    > Mail: arturiapendragon_1@163.com 
    > Created Time: 2018年01月12日 星期五 19时55分30秒
 ************************************************************************/

#include "algostuff.hpp"
using namespace std;
using namespace std::placeholders;

int main()
{
	vector<int> coll1;
	list<int> coll2;

	INSERT_ELEMENTS(coll1, 1, 9);
	PRINT_ELEMENTS(coll1, "coll1: ");

	// negate all elements in coll1
	transform(coll1.cbegin(), coll1.cend(),
				coll1.begin(),
				negate<int>());
	PRINT_ELEMENTS(coll1, "negated: ");

	// transform elements of coll1 into coll2 with ten times their value
	transform(coll1.cbegin(), coll1.cend(), 
				back_inserter(coll2),
				bind(multiplies<int>(), _1, 10));
	PRINT_ELEMENTS(coll2, "coll2: ");

	// print coll2 negatively and in reverse order
	transform(coll2.crbegin(), coll2.crend(),
				ostream_iterator<int>(cout, " "),
				[](int elem){
					return -elem;
				});
	cout << endl;
}

