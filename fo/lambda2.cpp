/*************************************************************************
    > File Name: lambda2.cpp
    > Author: King
    > Mail: arturiapendragon_1@163.com 
    > Created Time: 2017年12月30日 星期六 21时48分46秒
 ************************************************************************/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main()
{
	vector<int> coll = {1, 2, 3, 4, 5, 6, 7, 8};

	//process and print mean value
	long sum = 0;
	for_each(coll.begin(), coll.end(),			//range
			[&sum] (int elem) {
				sum += elem;
			});
	double mv = static_cast<double>(sum) / static_cast<double>(coll.size());
	cout << "mean value: " << mv << endl;
}
