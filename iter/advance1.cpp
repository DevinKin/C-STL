/*************************************************************************
    > File Name: advance1.cpp
    > Author: King
    > Mail: arturiapendragon_1@163.com 
    > Created Time: 2017年12月17日 星期日 16时39分25秒
 ************************************************************************/

#include <iostream>
#include <iterator>
#include <list>
#include <algorithm>

using namespace std;

int main()
{
	list<int> coll;

	// insert elements from 1 to 9
	for (int i=1; i <= 9; ++i)
	{
		coll.push_back(i);
	}

	list<int>::iterator pos = coll.begin();

	//print actual element
	cout << *pos << endl;

	// step three elements forward
	advance(pos, 3);
	
	// print actual element
	cout << *pos << endl;

	// step one element backward
	advance(pos, -1);

	// print actual element
	cout << *pos << endl;
}

