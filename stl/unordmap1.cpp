/*************************************************************************
    > File Name: unordmap1.cpp
    > Author: King
    > Mail: arturiapendragon_1@163.com 
    > Created Time: 2017年11月30日 星期四 15时37分03秒
 ************************************************************************/

#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;


int main()
{
	unordered_map<string,double> coll { {"tim", 9.9},
										{"struppi", 11.77}};

	for (const auto& elem: coll) {
		cout << elem.first << ": " << elem.second << endl;
	}
}
