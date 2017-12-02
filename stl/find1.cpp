/*************************************************************************
    > File Name: find1.cpp
    > Author: King
    > Mail: arturiapendragon_1@163.com 
    > Created Time: 2017年11月30日 星期四 23时07分18秒
 ************************************************************************/

#include <iostream>
#include <list>
#include <algorithm>

using namespace std;

int main()
{
	list<int> coll;

	for (int i=20; i<=40; ++i)
		coll.push_back(i);

	auto pos3 = find(coll.begin(), coll.end(), 3);

	reverse(pos3, coll.end());

	list<int>::iterator pos25, pos35;
	pos25 = find(coll.begin(), coll.end(), 25);
	pos35 = find(coll.begin(), coll.end(), 35);

	cout << "max: " << *max_element(pos25, pos35) << endl;
	cout << "max: " << *max_element(pos25, ++pos35) << endl;
	return(0);
}
