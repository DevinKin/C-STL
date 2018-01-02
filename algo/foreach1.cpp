/*************************************************************************
    > File Name: foreach1.cpp
    > Author: King
    > Mail: arturiapendragon_1@163.com 
    > Created Time: 2018年01月02日 星期二 23时15分33秒
 ************************************************************************/
#include "algostuff.hpp"
using namespace std;

int main()
{
	vector<int> coll;

	INSERT_ELEMENTS(coll, 1, 9);

	//call print() for each element
	for_each(coll.cbegin(), coll.cend(),			//range 
			[](int elem) {
				cout << elem << ' ';
			});
	cout << endl;
}
