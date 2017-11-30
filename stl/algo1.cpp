/*************************************************************************
    > File Name: algo1.cpp
    > Author: King
    > Mail: arturiapendragon_1@163.com 
    > Created Time: 2017年11月30日 星期四 21时09分06秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	vector<int> coll = {2,5,4,1,6,3};

	auto minpos = min_element(coll.cbegin(), coll.cend());
	cout << "min: " << *minpos << endl;
	auto maxpos = max_element(coll.cbegin(), coll.cend());
	cout << "max: " << *maxpos << endl;

	sort(coll.begin(), coll.end());
	for (auto elem : coll)
		cout << elem << ' ';
	cout << endl;

	auto pos3 = find(coll.begin(), coll.end(), 3);

	reverse(pos3, coll.end());

	for (auto elem : coll)
		cout << elem << ' ';
	cout << endl;

}
