/*************************************************************************
    > File Name: set1.cpp
    > Author: King
    > Mail: arturiapendragon_1@163.com 
    > Created Time: 2017年11月30日 星期四 17时11分31秒
 ************************************************************************/

#include <iostream>
#include <set>


int main()
{
	typedef std::set<int> IntSet;
	
	IntSet coll;			

	coll.insert(3);
	coll.insert(1);
	coll.insert(5);
	coll.insert(4);
	coll.insert(1);
	coll.insert(6);
	coll.insert(2);

	IntSet::const_iterator pos;
	for (pos=coll.begin(); pos != coll.end(); ++ pos)
		std::cout << *pos << ' ';
	std::cout << std::endl;
}
