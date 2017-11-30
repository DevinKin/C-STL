/*************************************************************************
    > File Name: unordmultiset1.cpp
    > Author: King
    > Mail: arturiapendragon_1@163.com 
    > Created Time: 2017年11月30日 星期四 13时05分45秒
 ************************************************************************/

#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

int main()
{
	unordered_multiset<string> cities {
		"Braunschweig", "Hanover", "Frankfurt", "New York",
		"Chicaago", "Toronto", "Pairs", "Frankfurt"
	};

	for (const auto& elem : cities) {
		cout << elem << "  ";
	}
	cout << endl;

	cities.insert({"London", "Munich", "Hanover", "Braunchweig"});

	for (const auto& elem : cities) {
		cout << elem << "  ";
	}
	cout << endl;
}
