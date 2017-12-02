/*************************************************************************
    > File Name: reviter1.cpp
    > Author: King
    > Mail: arturiapendragon_1@163.com 
    > Created Time: 2017年12月02日 星期六 20时32分29秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>

using namespace std;
int main()
{
	vector<int> coll;

	for (int i=1; i<9; ++i)
		coll.push_back(i);

	copy(coll.crbegin(), coll.crend(),
			ostream_iterator<int>(cout, " "));

	cout << endl;
}

