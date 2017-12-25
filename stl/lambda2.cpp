/*************************************************************************
    > File Name: lambda2.cpp
    > Author: King
    > Mail: arturiapendragon_1@163.com 
    > Created Time: 2017年11月24日 星期五 22时22分22秒
 ************************************************************************/

#include <iostream>
using namespace std;

int
main(void)
{
	int		id = 0;
	auto	f = [id] () mutable {
		cout << "id: " << id << endl;
		++id;
	};
	id = 42;
	f();
	f();
	f();
	cout << id << endl;
}
