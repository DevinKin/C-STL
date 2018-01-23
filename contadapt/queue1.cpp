/*************************************************************************
    > File Name: queue1.cpp
    > Author: King
    > Mail: arturiapendragon_1@163.com 
    > Created Time: 2018年01月23日 星期二 11时11分27秒
 ************************************************************************/

#include <iostream>
#include <queue>
#include <string>
using namespace std;

int main()
{
	queue<string> q;

	// insert three elements into the queue
	q.push("There ");
	q.push("are ");
	q.push("more than ");

	// read and print two element from the queue
	cout << q.front();
	q.pop();
	cout << q.front();
	q.pop();

	// insert two new elements
	q.push("four ");
	q.push("words!");

	// skip one element
	q.pop();

	// read and print two elements
	cout << q.front();
	q.pop();
	cout << q.front() << endl;
	q.pop();

	// print number of elements in the queue
	cout << "number of elements in the queue: " << q.size() 
		 << endl;
}

