/*************************************************************************
    > File Name: test3.cpp
    > Author: King
    > Mail: arturiapendragon_1@163.com 
    > Created Time: 2017年11月27日 星期一 11时48分25秒
 ************************************************************************/

#include <iostream>
#include <memory>
using namespace std;

int main(void)
{
	try {
		shared_ptr<string> sp(new string("hi"));			//create share pointer
		weak_ptr<string> wp = sp;
		sp.reset();
		cout << wp.use_count() << endl;
		cout << boolalpha << wp.expired() << endl;
		shared_ptr<string> p(wp);
	}
	catch (const exception& e) {
		cerr << "exception: " << e.what() << endl;		
	}
}
