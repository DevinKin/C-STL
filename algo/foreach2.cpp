/*************************************************************************
    > File Name: foreach2.cpp
    > Author: King
    > Mail: arturiapendragon_1@163.com 
    > Created Time: 2018年01月02日 星期二 23时46分21秒
 ************************************************************************/

#include "algostuff.hpp"
using namespace std;


int main()
{
	vector<int> coll;
	
	INSERT_ELEMENTS(coll, 1, 9);
	
	// add 10 to each element
	for_each(coll.begin(), coll.end(), 
			[=](int& elem){
				elem += *coll.begin();
			});
	PRINT_ELEMENTS(coll);

}

