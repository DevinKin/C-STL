/*************************************************************************
    > File Name: test2.cpp
    > Author: King
    > Mail: arturiapendragon_1@163.com 
    > Created Time: 2017年11月26日 星期日 19时47分56秒
 ************************************************************************/

#include <iostream>
#include <utility>
#include <tuple>


int main()
{
	std::pair<char, char> p = std::make_pair('x', 'y');

	char	c;
	std::tie(std::ignore, c) = p;
	std::cout << "c: " << c << std::endl;
}
