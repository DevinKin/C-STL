/*************************************************************************
    > File Name: lambda1.cpp
    > Author: King
    > Mail: arturiapendragon_1@163.com 
    > Created Time: 2017年12月27日 星期三 21时08分52秒
 ************************************************************************/

#include <iostream>

int main()
{
	auto plus10 = [] (int i) {
		return i + 10;
	};
	std::cout << "+ 10:			" << plus10(7)  << std::endl;

	auto plus10times2 = [] (int i) {
		return (i + 10)*2;
	};
	std::cout << "+10 *2: " << plus10times2(7) << std::endl; 

}
