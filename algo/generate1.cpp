/*************************************************************************
    > File Name: generate1.cpp
    > Author: King
    > Mail: arturiapendragon_1@163.com 
    > Created Time: 2018年01月12日 星期五 20时42分16秒
 ************************************************************************/

#include <cstdlib>
#include "algostuff.hpp"
using namespace std;

int main()
{
	list<int> coll;

	// insert five random numbers
	generate_n(back_inserter(coll), 
			5,
			rand);
	PRINT_ELEMENTS(coll);

	// overwrite with five new random numbers
	generate(coll.begin(), coll.end(),
			rand);
	PRINT_ELEMENTS(coll);
}

