/*************************************************************************
    > File Name: iota1.cpp
    > Author: King
    > Mail: arturiapendragon_1@163.com 
    > Created Time: 2018年01月12日 星期五 20时47分53秒
 ************************************************************************/

#include "algostuff.hpp"
using namespace std;

int main()
{
	array<int, 10> coll;

	iota(coll.begin(), coll.end(),
			42);
	PRINT_ELEMENTS(coll, "coll: ");
//}

