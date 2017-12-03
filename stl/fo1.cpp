/*************************************************************************
    > File Name: fo1.cpp
    > Author: King
    > Mail: arturiapendragon_1@163.com 
    > Created Time: 2017年12月03日 星期日 09时54分32秒
 ************************************************************************/

#include <iostream>
#include <deque>
#include <algorithm>
#include <functional>
#include "print.hpp"

using namespace std;
int main()
{
	deque<int> coll = {1, 2, 3, 5, 7, 11, 13, 17, 19};

	PRINT_ELEMENTS(coll, "initialized: ");

	transform(coll.cbegin(), coll.cend(),
				coll.begin(),
				negate<int>());
	PRINT_ELEMENTS(coll, "negated: ");

	transform(coll.cbegin(), coll.cend(),
				coll.cbegin(),
				coll.begin(),
				multiplies<int>());
	PRINT_ELEMENTS(coll, "squared: ");
}

