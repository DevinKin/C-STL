/*************************************************************************
    > File Name: sort1.cpp
    > Author: King
    > Mail: arturiapendragon_1@163.com 
    > Created Time: 2017年12月24日 星期日 23时06分29秒
 ************************************************************************/

#include <iostream>
#include <string>
#include <set>
#include <algorithm>

using namespace std;


class Person {
	public:
		string firstname() const;
		string lastname() const;

};

//class for function predicate
//- operator () returns whether a person is less than another person
class PersonSortCriterion {
	public:
		bool operator() (const Person& p1, const Person& p2) const
		{
			// a person is less than another person
			// - if the last name is less
			// - if the last name is equal and the first name is less
			return p1.lastname() < p2.lastname() ||
				(p1.lastname() == p2.lastname() &&
				 p1.firstname() < p2.firstname());
		}
};
