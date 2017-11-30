/*************************************************************************
    > File Name: multiset1.cpp
    > Author: King
    > Mail: arturiapendragon_1@163.com 
    > Created Time: 2017年11月30日 星期四 12时22分31秒
 ************************************************************************/

#include <iostream>
#include <set>
#include <string>

using namespace std;

int main()
{
	multiset<string> cities {
		"Braunschweig", "Hanover", "Frankfurt", "New York",
		"Chicago", "Toronto", "Pairs", "Frankfurt"
	};

	for (const auto& elem : cities)
	{
		cout << elem << " ";
	}
	cout << endl;

	cities.insert({"London", "Munich", "Hanover", "Braunschweing"});

	for (const auto& elem : cities)
		cout << elem << " ";
	cout << endl;
}
