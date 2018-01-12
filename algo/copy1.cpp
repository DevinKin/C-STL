/*************************************************************************
    > File Name: copy1.cpp
    > Author: King
    > Mail: arturiapendragon_1@163.com 
    > Created Time: 2018年01月12日 星期五 18时57分23秒
 ************************************************************************/

#include "algostuff.hpp"
using namespace std;


int main()
{
	vector<string> coll1 = {"Hello", "this", "is", "an", "example"};
	list<string> coll2;

	// copy elements of coll1 into coll2
	// - use back insertter to insert instead of overwrite
	copy(coll1.cbegin(), coll1.cend(),				// source range
			back_inserter(coll2));					// destination range


	// print elements of coll2 
	// - copy elements to cout using an ostream iterator
	copy(coll2.cbegin(), coll2.cend(),				
			ostream_iterator<string>(cout, " "));
	cout << endl;

	// copy elements of coll1 into coll2 in reverse order
	// - now overwriting
	copy(coll1.crbegin(), coll1.crend(),
			coll2.begin());

	// print elements of coll2 again
	copy(coll2.cbegin(), coll2.cend(),
			ostream_iterator<string>(cout, " "));
	cout << endl;
}

