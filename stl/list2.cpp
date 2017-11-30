/*************************************************************************
    > File Name: list2.cpp
    > Author: King
    > Mail: arturiapendragon_1@163.com 
    > Created Time: 2017年11月30日 星期四 10时00分46秒
 ************************************************************************/

#include <iostream>
#include <list>

using namespace std;

int main()
{
	list<char> coll;

	for (char c='a'; c<='z'; ++c)
		coll.push_back(c);

	while (!coll.empty())
	{
		cout << coll.front() << ' ';
		coll.pop_front();
	}
	cout << endl;
}
