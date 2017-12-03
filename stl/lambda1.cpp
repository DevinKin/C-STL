/*************************************************************************
    > File Name: labda1.cpp
    > Author: King
    > Mail: arturiapendragon_1@163.com 
    > Created Time: 2017年12月03日 星期日 09时28分22秒
 ************************************************************************/

#include <iostream>
#include <deque>
#include <algorithm>
using namespace std;

int main()
{
	deque<int> coll = {1, 3, 19, 5, 13, 7, 11, 2, 17};

	int x=5;
	int y=12;

	auto pos = find_if(coll.cbegin(), coll.cend(), [=](int i) {
				return i > x && i < y;
			});

	cout << "first elem >5 and <12: " << *pos << endl;
}

