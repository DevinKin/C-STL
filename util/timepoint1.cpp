/*************************************************************************
    > File Name: timepoint1.cpp
    > Author: King
    > Mail: arturiapendragon_1@163.com 
    > Created Time: 2017年11月29日 星期三 22时18分54秒
 ************************************************************************/

#include <chrono>
#include <iostream>
#include "timepoint.h"

int main()
{
	auto tp1 = makeTimePoint(2010, 01, 01, 00, 00);
	std::cout << asString(tp1) << std::endl;
	
	auto tp2 = makeTimePoint(2011, 05, 23, 13, 44);
	std::cout << asString(tp2) << std::endl;
}
