/*************************************************************************
    > File Name: vector1.cpp
    > Author: King
    > Mail: arturiapendragon_1@163.com 
    > Created Time: 2017年11月30日 星期四 09时43分49秒
 ************************************************************************/

#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> coll;			// vector container for integer

	// append elements with values 1 to 6
	for (int i=1; i<=6; ++i)
	{
		coll.push_back(i);
	}

	// print all elements followed by a space
	for (int i=0; i<coll.size(); ++i)
	{
		cout << coll[i]<<' ';
	}
	cout << endl;
}
