/*************************************************************************
    > File Name: unordmultiset2.cpp
    > Author: King
    > Mail: arturiapendragon_1@163.com 
    > Created Time: 2017年11月30日 星期四 17时53分30秒
 ************************************************************************/

#include <iostream>
#include <unordered_set>


int main()
{
	std::unordered_multiset<int> coll;

	coll.insert({1,3,5,7,11,13,17,19,23,27,1});

	for (auto elem : coll)
		std::cout << elem << ' ';
	std::cout << std::endl;	

	coll.insert(25);
	

	for (auto elem : coll)
		std::cout << elem << ' ';
	std::cout << std::endl;	
}
