/*************************************************************************
    > File Name: lambda5.cpp
    > Author: King
    > Mail: arturiapendragon_1@163.com 
    > Created Time: 2017年12月30日 星期六 22时26分37秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <vector>
#include <functional>
#include <string>

using namespace std;
using namespace std::placeholders;

class Person {
	private:
		string name;
	public:
		Person(const string& n) 
			:name(n) {}
		
		void print() const {
			cout << name << endl;
		}
		void print2(const string& prefix) const
		{
			cout << prefix << name << endl;
		}
};

int main()
{
	vector<Person> coll =
	{ Person("Tick"), Person("Trick"), Person("Track")};

	//call member function print() for each person
	for_each (coll.begin(), coll.end(),
			[] (const Person& p) {
				p.print();
			});
	cout << endl;

	//call member function print2() with additional argument for each person
	for_each(coll.begin(), coll.end(), 
			[] (const Person& p) {
				p.print2("Person: ");
			});
	cout << endl;
}

