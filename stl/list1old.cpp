/*************************************************************************
    > File Name: list1old.cpp
    > Author: King
    > Mail: arturiapendragon_1@163.com 
    > Created Time: 2017年11月30日 星期四 16时27分23秒
 ************************************************************************/

#include <iostream>
#include <list>

using namespace std;

int main()
{
	list<char> coll;

	for (char c='a'; c<='z'; ++c)
		coll.push_back(c);

	list<char>::const_iterator pos;

	for (pos = coll.begin(); pos!=coll.end(); ++pos)
		cout << *pos << ' ';

	cout << endl;
}
