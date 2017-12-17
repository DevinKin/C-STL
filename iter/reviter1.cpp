/*************************************************************************
    > File Name: reviter1.cpp
    > Author: King
    > Mail: arturiapendragon_1@163.com 
    > Created Time: 2017年12月17日 星期日 16时56分24秒
 ************************************************************************/

#include <iostream>
#include <list>
#include <algorithm>
using namespace std;


void print(int elem)
{
	cout << elem << ' ';
}

int main()
{
	// create list with elements from 1 to 9
	list<int> coll = {1, 2, 3, 4, 5, 6, 7, 8, 9 };

	// print all elements in normal order
	for_each(coll.begin(), coll.end(), print);
	cout << endl;

	// print all elements in reverse order
	for_each(coll.rbegin(), coll.rend(), print);

	cout << endl;
}
