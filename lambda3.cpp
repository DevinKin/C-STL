/*************************************************************************
    > File Name: lambda3.cpp
    > Author: King
    > Mail: arturiapendragon_1@163.com 
    > Created Time: 2017年11月24日 星期五 22时29分53秒
 ************************************************************************/

#include <iostream>
#include <functional>


std::function<int(int, int)> returnLambda()
{
	return [] (int x, int y){
		return x * y;
	};
}


int
main(void)
{
	auto lf = returnLambda();
	std::cout << lf(6,7) << std::endl;
}
