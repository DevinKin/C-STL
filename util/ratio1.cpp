/*************************************************************************
    > File Name: ratio1.cpp
    > Author: King
    > Mail: arturiapendragon_1@163.com 
    > Created Time: 2017年11月28日 星期二 19时54分38秒
 ************************************************************************/

#include <iostream>
#include <ratio>

using namespace std;

int main()
{
	typedef ratio<5,3> FiveThirds;
	cout << FiveThirds::num << "/" << FiveThirds::den << endl;
	typedef ratio<25,15> AlsoFiveThirds;
	cout << AlsoFiveThirds::num << "/" << FiveThirds::den << endl;

	ratio<42,42> one;
	cout << one.num << "/" << one.den << endl;

	ratio<0> zero;
	cout << zero.num << "/" << zero.den << endl;

	typedef ratio<7,-3> Neg;
	cout << Neg::num << "/" << Neg::den << endl;
}

