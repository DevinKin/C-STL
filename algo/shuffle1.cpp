/*************************************************************************
    > File Name: shuffle1.cpp
    > Author: King
    > Mail: arturiapendragon_1@163.com 
    > Created Time: 2018年01月18日 星期四 18时55分54秒
 ************************************************************************/

#include <cstdlib>
#include "algostuff.hpp"
using namespace std;

int main()
{
	vector<int> coll;

	INSERT_ELEMENTS(coll, 1, 9);
	PRINT_ELEMENTS(coll, "coll: ");

	// shuffle all elements randomly
	random_shuffle(coll.begin(), coll.end());

	PRINT_ELEMENTS(coll, "shuffled: ");

	// sort them again
	sort(coll.begin(), coll.end());
	PRINT_ELEMENTS(coll, "sorted: ");

	// shuffle elements with default engine
	default_random_engine dre;
	shuffle(coll.begin(), coll.end(),			// range
			dre);								// random-number generator
	PRINT_ELEMENTS(coll, "shuffled: ");

}

