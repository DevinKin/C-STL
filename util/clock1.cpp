/*************************************************************************
    > File Name: clock1.cpp
    > Author: King
    > Mail: arturiapendragon_1@163.com 
    > Created Time: 2017年11月28日 星期二 23时13分01秒
 ************************************************************************/

#include <chrono>
#include "clock.h"


int main()
{
	std::cout << "system_clock: " << std::endl;
	printClockData<std::chrono::system_clock>();
	std::cout << "\nhigh_resolution_clock " << std::endl;
	printClockData<std::chrono::high_resolution_clock>();
	std::cout << "\nsteady_clock: " << std::endl;
	printClockData<std::chrono::steady_clock>();	
}
