/*************************************************************************
    > File Name: bind1.cpp
    > Author: King
    > Mail: arturiapendragon_1@163.com 
    > Created Time: 2017年12月25日 星期一 22时44分15秒
 ************************************************************************/

#include <iostream>
#include <functional>


int main()
{
	auto plus10 = std::bind(std::plus<int>(),
							std::placeholders::_1,
							10);
	std::cout << "+10: " << plus10(7) << std::endl;

	auto plus10times2 = std::bind(std::multiplies<int>(),
									std::bind(std::plus<int>(),
												std::placeholders::_1,
												10),
									2);

	std::cout << "+10 *2: " << plus10times2(7) << std::endl;

	auto pow3 = std::bind(std::multiplies<int>(),
							std::bind(std::multiplies<int>(),
								std::placeholders::_1,
								std::placeholders::_1),
							std::placeholders::_1);
	std::cout << "x*x*x: " << pow3(7) << std::endl;

	auto inversDivide = std::bind(std::divides<double>(),
									std::placeholders::_2,
									std::placeholders::_1);
	std::cout << "invdiv: " << inversDivide(49, 7) << std::endl;
}
