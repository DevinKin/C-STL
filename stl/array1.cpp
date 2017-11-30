/*************************************************************************
    > File Name: array1.cpp
    > Author: King
    > Mail: arturiapendragon_1@163.com 
    > Created Time: 2017年11月30日 星期四 09时56分12秒
 ************************************************************************/

#include <iostream>
#include <array>
#include <string>

using namespace std;

int main()
{
	// array container of 5 string elements:
	array<string,5> coll = {"hello", "world"};

	for (int i=0; i<coll.size(); ++i)
		cout << i << ": " << coll[i] << endl;
}
