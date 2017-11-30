/*************************************************************************
    > File Name: list1.cpp
    > Author: King
    > Mail: arturiapendragon_1@163.com 
    > Created Time: 2017年11月30日 星期四 09时59分05秒
 ************************************************************************/

#include <iostream>
#include <list>
using namespace std;

int main()
{
	list<char> coll;				

	for (char c='a'; c<='z'; ++c)
		coll.push_back(c);

	for (auto elem : coll)
		cout << elem << ' ';
	cout << endl;
}
