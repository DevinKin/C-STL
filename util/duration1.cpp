/*************************************************************************
    > File Name: duration1.cpp
    > Author: King
    > Mail: arturiapendragon_1@163.com 
    > Created Time: 2017年11月28日 星期二 20时17分17秒
 ************************************************************************/

#include <iostream>
#include <chrono>


int main()
{
	std::chrono::seconds twentySeconds(20);
	std::chrono::hours aDay(24);		

	std::chrono::milliseconds ms;
	ms += twentySeconds + aDay;
	--ms;
	ms *= 2;
	std::cout << ms.count() << " ms" << std::endl;
	std::cout << std::chrono::nanoseconds(ms).count() << " ns" << std::endl;
	return(0);
}
