/*************************************************************************
    > File Name: copy2.cpp
    > Author: King
    > Mail: arturiapendragon_1@163.com 
    > Created Time: 2017年12月02日 星期六 19时27分58秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <list>
#include <vector>
#include <deque>
#include <set>

using namespace std;

int main()
{
	list<int> coll1 = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	vector<int> coll2;
	copy(coll1.cbegin(), coll1.cend(), back_inserter(coll2));

	deque<int> coll3;
	copy(coll1.cbegin(), coll1.cend(), front_inserter(coll3));

	set<int> coll4;
	copy(coll1.cbegin(), coll1.cend(), inserter(coll4, coll4.begin()));

	for (auto i = coll1.begin(); i!=coll1.end(); ++i)
		cout << *i << " ";
	cout << endl;

	for (auto i = coll2.begin(); i!=coll2.end(); ++i)
		cout << *i << " ";
	cout << endl;
	
	for (auto i = coll3.begin(); i!=coll3.end(); ++i)
		cout << *i << " ";
	cout << endl;
	
	for (auto i = coll4.begin(); i!=coll4.end(); ++i)
		cout << *i << " ";
	cout << endl;
}

