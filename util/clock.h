/*************************************************************************
    > File Name: clock.h
    > Author: King
    > Mail: arturiapendragon_1@163.com 
    > Created Time: 2017年11月28日 星期二 23时03分57秒
 ************************************************************************/

#include <iostream>
#include <chrono>
#include <iomanip>


template <typename C>
void printClockData()
{
	using namespace std;

	cout << "- precision: ";
	// if time unit is less or equal one millisecond
	typedef typename C::period P;				// type of time unit
	if (ratio_less_equal<P, milli>::value) {
		// convert to and print as milliseconds
		typedef typename ratio_multiply<P, kilo>::type TT;
		cout << fixed << double(TT::num)/TT::den
			 << " milliseconds" << endl;
		cout << "ratio_less_equal<P, milli>::value" << endl;
	}
	else {
		// print as seconds
		cout << fixed << double(P::num)/P::den << " seconds" << endl;
	}
	cout << "- is_steady: " << boolalpha << C::is_steady << endl;
}
