/*************************************************************************
    > File Name: bindmem.cpp
    > Author: King
    > Mail: arturiapendragon_1@163.com 
    > Created Time: 2017年12月27日 星期三 08时06分14秒
 ************************************************************************/

#include <iostream>
#include <map>
#include <algorithm>
#include <functional>
#include <string>

using namespace std;
using namespace std::placeholders;


int main()
{
	map<string, int>	coll = 
	{{"king", 1}, {"k2", 2}, {"k3", 3}};
	
	int sum 
		= accumulate(coll.begin(), coll.end(),
				0,
				bind(plus<int>(),
					_1,
					bind(&map<string, int>::value_type::second, _2)));
	cout << "sum: " << sum << endl;



}
