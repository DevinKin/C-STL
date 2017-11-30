/*************************************************************************
    > File Name: deque1.cpp
    > Author: King
    > Mail: arturiapendragon_1@163.com 
    > Created Time: 2017年11月30日 星期四 09时46分29秒
 ************************************************************************/

#include <iostream>
#include <deque>
using namespace std;

int main()
{
	deque<float> coll;				// deque container for float-point elements

	// insert elements from 1.1 to 6.6 at the front

	for (int i=1; i<=6; ++i)
		coll.push_front(i*1.1);					// insert at the front
	
	// print all elements followed by a space
	for (int i=0; i<coll.size(); ++i)
		cout << coll[i] << ' ';
	cout << endl;

	return 0;
}
