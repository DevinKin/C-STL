/*************************************************************************
    > File Name: cstylearray1old.cpp
    > Author: King
    > Mail: arturiapendragon_1@163.com 
    > Created Time: 2017年12月16日 星期六 21时49分11秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <functional>
#include <iterator>
using namespace std;

int main()
{
	int coll[] = {5, 6, 2, 4, 1, 3};

	//square all elements
	transform(coll, coll + 6,		// first source
			  coll,					// second source
			  coll,					// destination
			  multiplies<int>());	// operation
	// sort beginning with the second element
	sort(coll + 1, coll + 6);

	// print all elements
	copy(coll, coll + 6, ostream_iterator<int>(cout, " "));
	cout << endl;
	return(0);
}


