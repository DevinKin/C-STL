/*************************************************************************
    > File Name: duration2.cpp
    > Author: King
    > Mail: arturiapendragon_1@163.com 
    > Created Time: 2017年11月28日 星期二 20时42分51秒
 ************************************************************************/

#include <iostream>
#include <chrono>
#include <iomanip>
using namespace std;
using namespace std::chrono;


template <typename V, typename R>
ostream& operator << (ostream& s, const chrono::duration<V,R>& d)
{
	s << "[" << d.count() << " of " << R::num << "/"
									<< R::den << "]";
	return s;
}

int main()
{
	milliseconds ms(100000000);

	// split into hours,minutes,seconds, and milliseconds
	hours hh = duration_cast<hours>(ms);
	minutes mm = duration_cast<minutes>(ms % chrono::hours(1));
	seconds ss = duration_cast<seconds>(ms % chrono::minutes(1));
	milliseconds msec = duration_cast<milliseconds>(ms % chrono::seconds(1));

	// and print durations and values:
	cout << "raw: " << hh << "::" << mm << "::"
					<< ss << "::" << msec << endl;

	cout << "		" << setfill('0') << setw(2) << hh.count() << "::"
									  << setw(2) << mm.count() << "::"
									  << setw(2) << ss.count() << "::"
									  << setw(2) << msec.count() << endl;
	return(0);
}
