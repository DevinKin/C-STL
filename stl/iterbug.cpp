/*************************************************************************
    > File Name: iterbug.cpp
    > Author: King
    > Mail: arturiapendragon_1@163.com 
    > Created Time: 2017年12月03日 星期日 10时48分40秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	vector<int> coll1;
	vector<int> coll2;

	vector<int>::iterator pos = coll1.begin();
	reverse(++pos, coll1.end());

	for(int i=1; i<=9; ++i)
		coll1.push_back(i);

	copy(coll1.cbegin(), coll1.cend(), 
			coll2.begin());

	copy(coll1.cbegin(), coll2.cend(), coll1.end());
}

