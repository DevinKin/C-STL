/*************************************************************************
    > File Name: fill1.cpp
    > Author: King
    > Mail: arturiapendragon_1@163.com 
    > Created Time: 2018年01月12日 星期五 20时22分38秒
 ************************************************************************/

#include "algostuff.hpp"
using namespace std;

int main()
{
	// print ten times 7.7 
	fill_n(ostream_iterator<float>(cout, " "),
			10,
			7.7);
	cout << endl;

	list<string> coll;
	fill_n(back_inserter(coll),
			9, 
			"hello");
	PRINT_ELEMENTS(coll, "coll: ");

	// overwrite all elements with "again"
	fill(coll.begin(), coll.end(),
			"again");
	PRINT_ELEMENTS(coll, "coll: ");

	// replace all but two elements with "hi"
	fill_n(coll.begin(), 
			coll.size() - 2,
			"hi");
	PRINT_ELEMENTS(coll, "coll: ");

	// replace the second and up to the last element but one wit "hmmm"
	list<string>::iterator pos1, pos2;
	pos1 = coll.begin();
	pos2 = coll.end();
	fill(++pos1, --pos2,
			"hmmm");
	PRINT_ELEMENTS(coll, "coll: ");
}

