/*************************************************************************
    > File Name: foreach2.cpp
    > Author: King
    > Mail: arturiapendragon_1@163.com 
    > Created Time: 2017年12月03日 星期日 09时43分15秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

class PrintInt {
	public:
		void operator() (int elem) const {
			cout << elem << ' ';
		}
};

int main()
{
	vector<int> coll;

	for(int i=1; i<=9; ++i)
		coll.push_back(i);

	for_each(coll.cbegin(), coll.cend(), 
			PrintInt());
	cout << endl;
}

