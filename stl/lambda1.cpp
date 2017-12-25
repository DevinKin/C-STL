/*************************************************************************
    > File Name: lambda1.cpp
    > Author: King
    > Mail: arturiapendragon_1@163.com 
    > Created Time: 2017年11月24日 星期五 22时18分39秒
 ************************************************************************/

#include <iostream>
using namespace std;

int
main(void)
{
	int x = 0;
	int y = 42;

	auto qqq = [x, &y] {
		cout << "x: " << x << endl;
		cout << "y: " << y << endl;
		++y;
	};
	x = y = 77;
	qqq();
	qqq();
	cout <<"final y: " << y << endl;
}
