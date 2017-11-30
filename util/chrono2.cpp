/*************************************************************************
    > File Name: chrono2.cpp
    > Author: King
    > Mail: arturiapendragon_1@163.com 
    > Created Time: 2017年11月29日 星期三 18时03分01秒
 ************************************************************************/

#include <iostream>
#include <ctime>
#include <string>
#include <chrono>

using namespace std;

string asString(const chrono::system_clock::time_point& tp)
{
	time_t t = chrono::system_clock::to_time_t(tp);
	string ts = ctime(&t);
	ts.resize(ts.size() -1);
	return ts;
}


int main()
{
	// define type for durations that represent day(s):
	typedef chrono::duration<int,ratio<3600*24>> Days;

	// process the epoch of this system clock
	chrono::time_point<chrono::system_clock> tp;
	cout << "epoch:    " << asString(tp) << endl;

	// add one day, 23 hours, and 55 minutes
	tp += Days(1) + chrono::hours(23) + chrono::minutes(55);
	cout << "later:    " << asString(tp) << endl;


	// process difference from epoch in minutes and days:
	auto diff = tp - chrono::system_clock::time_point();
	cout << "diff:    "
		 << chrono::duration_cast<chrono::minutes>(diff).count()
		 << " minutes(s)" << endl;
	Days days = chrono::duration_cast<Days>(diff);
	cout << "diff:    " << days.count() << " day(s)" << endl;


	// subtract one year (hoping it is vaild and not a leap year)
	tp -= chrono::hours(24*365);
	cout << "-1 year:    " << asString(tp) << endl;

	// subtract 50 years (hoping it is valid and ignoring leap years)
	tp -= chrono::duration<int,ratio<3600*24*365>>(50);
	cout << "-50 years: " << asString(tp) << endl;


	// subtract 50 years (hoping it is valid and ignoring leap years)
	tp -= chrono::duration<int,ratio<3600*24*365>>(50);
	cout << "-50 years: " << asString(tp) << endl;

	return(0);
}
