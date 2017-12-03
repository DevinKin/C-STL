/*************************************************************************
    > File Name: remove4.cpp
    > Author: King
    > Mail: arturiapendragon_1@163.com 
    > Created Time: 2017年12月02日 星期六 23时41分43秒
 ************************************************************************/

#include <list>
#include <iostream>
#include <algorithm>
#include <iterator>
using namespace std;

int main()
{
	list<int> coll;

	for (int i=1; i<=6; ++i)
	{
		coll.push_front(i);
		coll.push_back(i);
	}

	coll.erase(remove(coll.begin(), coll.end(), 3),
			coll.end());
	coll.remove(4);

	copy(coll.cbegin(), coll.cend(), ostream_iterator<int>(cout, " "));
	cout << endl;
}
