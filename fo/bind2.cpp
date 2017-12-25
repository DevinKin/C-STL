/*************************************************************************
    > File Name: bind2.cpp
    > Author: King
    > Mail: arturiapendragon_1@163.com 
    > Created Time: 2017年12月25日 星期一 23时15分03秒
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
		Person (const string& n) : name(n){
		}

		void print () const {
			cout << name << endl;
		}

		void print2 (const string& prefix) const {
			cout << prefix << name << endl;
		}
};


int main()
{
	vector<Person> coll
		= { Person("Tick"), Person("Trick"), Person("Track")};

	// call member function print() for each person
	for_each(coll.begin(), coll.end(), 
				bind(&Person::print, _1));
	cout << endl;


	for_each(coll.begin(), coll.end(), 
				bind(&Person::print2, _1, "Person: "));
	cout << endl;
	// call print2() for temporary Person
	bind(&Person::print2, _1, "This is: ")(Person("nico"));
}
