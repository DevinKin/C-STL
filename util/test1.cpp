/*************************************************************************
    > File Name: test1.cpp
    > Author: King
    > Mail: arturiapendragon_1@163.com 
    > Created Time: 2017年11月26日 星期日 19时45分29秒
 ************************************************************************/

#include <iostream>
#include <functional>
#include <iostream>


int main()
{
	int		i = 0;
	auto	p = std::make_pair(std::ref(i), std::ref(i));
	++p.first;
	++p.second;
	std::cout << "i: " << i << std::endl;
}
