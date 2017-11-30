/*************************************************************************
    > File Name: forwardlist1.cpp
    > Author: King
    > Mail: arturiapendragon_1@163.com 
    > Created Time: 2017年11月30日 星期四 10时03分36秒
 ************************************************************************/

#include <iostream>
#include <forward_list>

using namespace std;

int main()
{
	forward_list<long> coll = { 2, 3, 5, 7, 11, 13, 17};

	coll.resize(9);
	coll.resize(10, 99);

	for (auto elem : coll)
	{
		cout << elem << ' ';
	}
	cout << endl;
}
