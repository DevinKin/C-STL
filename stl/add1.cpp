/*************************************************************************
    > File Name: add1.cpp
    > Author: King
    > Mail: arturiapendragon_1@163.com 
    > Created Time: 2017年12月03日 星期日 09时47分45秒
 ************************************************************************/

#include <iostream>
#include <list>
#include <algorithm>
#include "print.hpp"

using namespace std;

class AddValue {
	private:
		int theValue;
	public:
		AddValue(int v) : theValue(v){
		}

		void operator() (int& elem) const {
			elem += theValue;
		}
};

int main()
{
	list<int> coll;

	for(int i=1; i<=9; ++i)
		coll.push_back(i);
	PRINT_ELEMENTS(coll, "initialized: ");

	for_each(coll.begin(), coll.end(), AddValue(10));

	PRINT_ELEMENTS(coll, "after adding 10: ");
}

