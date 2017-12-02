/*************************************************************************
    > File Name: remove1.cpp
    > Author: King
    > Mail: arturiapendragon_1@163.com 
    > Created Time: 2017年12月02日 星期六 20时40分25秒
 ************************************************************************/

#include <iostream>
#include <iterator>
#include <list>
#include <algorithm>

using namespace std;

int main()
{
	list<int> coll;

	for (int i=1; i<=6; ++i)
	{
		coll.push_front(i);
		coll.push_back(i);
	}
	cout << "pre:  ";
	copy(coll.cbegin(), coll.cend(), 
			ostream_iterator<int>(cout, " "));
	cout << endl;

	remove(coll.begin(), coll.end(), 3);

	cout << "post: ";
	copy(coll.cbegin(), coll.cend(), 
			ostream_iterator<int>(cout, " "));
	cout << endl;

}

