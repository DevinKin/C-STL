/*************************************************************************
    > File Name: sort2.cpp
    > Author: King
    > Mail: arturiapendragon_1@163.com 
    > Created Time: 2017年12月03日 星期日 09时38分02秒
 ************************************************************************/

#include <iostream>
#include <deque>
#include <algorithm>
#include <string>
using namespace std;

class Person {
	public:
		string firstname() const;
		string lastname() const;
};

int main()
{
	deque<Person> coll;

	sort(coll.begin(), coll.end(),
			[] (const Person& p1, const Person& p2) {
				return p1.lastname() < p2.lastname() ||
						(p1.lastname() == p2.lastname() &&
						 p1.firstname() < p2.firstname());
			});
}
