/*************************************************************************
    > File Name: copy1.cpp
    > Author: King
    > Mail: arturiapendragon_1@163.com 
    > Created Time: 2017年12月02日 星期六 19时13分34秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <list>
#include <vector>
#include <deque>

using namespace std;
int main()
{
	list<int>	coll1 = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	vector<int>	coll2;

	coll2.resize(coll1.size());

	copy(coll1.cbegin(), coll1.cend(), coll2.begin());

	deque<int> coll3(coll1.size());

	copy(coll1.cbegin(), coll1.cend(), coll3.begin());

	for (auto i = coll2.begin(); i!=coll2.end(); ++i)
		cout << *i << " ";
	cout << endl;

	for (auto i = coll3.begin(); i!=coll3.end(); ++i)
		cout << *i << " ";
	cout << endl;
}

