/*************************************************************************
    > File Name: chrono1.cpp
    > Author: King
    > Mail: arturiapendragon_1@163.com 
    > Created Time: 2017年11月29日 星期三 13时17分28秒
 ************************************************************************/

#include <iostream>
#include <ctime>
#include <string>
#include <chrono>


std::string asString(const std::chrono::system_clock::time_point& tp)
{
	// convert to system time:
	std::time_t t = std::chrono::system_clock::to_time_t(tp);
	std::string ts = std::ctime(&t);
	ts.resize(ts.size() - 1);
	return ts;
}


int main(void)
{
	// print the epoch of this system clock:
	std::chrono::system_clock::time_point tp;
	std::cout << "epoch: " << asString(tp) << std::endl;

	tp = std::chrono::system_clock::now();
	std::cout << "now:   " << asString(tp) << std::endl;


	// print minimum time of this system clock:
	tp = std::chrono::system_clock::time_point::min();
	std::cout << "min:   " << asString(tp) << std::endl;

	// print maximum time of this system clock:
	tp = std::chrono::system_clock::time_point::max();
	std::cout << "max:  " << asString(tp) << std::endl;
	return(0);
}

