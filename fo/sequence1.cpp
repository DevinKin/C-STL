/*************************************************************************
    > File Name: sequence1.cpp
    > Author: King
    > Mail: arturiapendragon_1@163.com 
    > Created Time: 2017年12月24日 星期日 23时45分13秒
 ************************************************************************/

#include <iostream>
#include <list>
#include <algorithm>
#include <iterator>
#include "print.hpp"
using namespace std;


class IntSequence {
	private:
		int value;
	public:
		IntSequence(int initialValue)		// constructor
			:value(initialValue)
		{
		}

		int operator() ()
		{
			return ++value;					//"function call"
		}
};

int main()
{
	list<int> coll;

	// insert values from 1 to 9
	generate_n(back_inserter(coll),			//start
			9,								//end 
			IntSequence(1));				//generates values.start with 1

	PRINT_ELEMENTS(coll);

	//replace second to last 
	generate(next(coll.begin()),			//start
			prev(coll.end()),				//end
			IntSequence(42));				//generates values, starting with 42
	PRINT_ELEMENTS(coll);
}

