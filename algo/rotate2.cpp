/*************************************************************************
    > File Name: rotate2.cpp
    > Author: King
    > Mail: arturiapendragon_1@163.com 
    > Created Time: 2018年01月18日 星期四 15时33分39秒
 ************************************************************************/

#include "algostuff.hpp"
using namespace std;

int main()
{
	set<int> coll;

	INSERT_ELEMENTS(coll, 1, 9);
	PRINT_ELEMENTS(coll);

	// print elements rotated one element to the left
	set<int>::const_iterator pos = next(coll.cbegin());
	rotate_copy(coll.begin(),						// beginning of source
				pos,								// new first element
				coll.end(),							// end of source
				ostream_iterator<int>(cout, " "));	// destination 
	cout << endl;

	// print elements rotated so that element with value 4 is the beginning
	rotate_copy(coll.cbegin(),						// beginning of source
				coll.find(4),						// new first element
				coll.cend(),						// end of source
				ostream_iterator<int>(cout, " "));	// destination
	cout << endl;
}

