/*************************************************************************
    > File Name: multimap1.cpp
    > Author: King
    > Mail: arturiapendragon_1@163.com 
    > Created Time: 2017年11月30日 星期四 12时45分59秒
 ************************************************************************/

#include <iostream>
#include <map>
#include <string>

using namespace std;

int main()
{
	multimap<int,string> coll;

	coll = {{5, "tagged"},
			{2, "a"},
			{1, "this"},
			{4, "of"},
			{6, "strings"},
			{3, "multimap"} };

	for (auto elem : coll) 
	{
		cout << elem.second << ' ';
	}
	cout << endl;
}

