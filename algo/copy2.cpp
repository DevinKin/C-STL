/*************************************************************************
    > File Name: copy2.cpp
    > Author: King
    > Mail: arturiapendragon_1@163.com 
    > Created Time: 2018年01月12日 星期五 19时18分13秒
 ************************************************************************/

#include "algostuff.hpp"
using namespace std;

int main()
{
	// initialize source collection with "..........abcdef.........."
	vector<char> source(10, '.');
	for (int c = 'a'; c <= 'f'; c++)
		source.push_back(c);

	source.insert(source.end(), 10, '.');
	PRINT_ELEMENTS(source, "source: ");

	// copy all letters three elements in front of the 'a'
	vector<char> c1(source.cbegin(), source.cend());
	copy(c1.cbegin() + 10, c1.cbegin() + 16,
			c1.begin() + 7);
	PRINT_ELEMENTS(c1, "c1: ");

	// copy all letters three elements behind the 'f'
	vector<char> c2(source.cbegin(), source.cend());
	copy_backward(c2.cbegin() + 10, c2.cbegin() + 16, 
					c2.begin() + 19);
	PRINT_ELEMENTS(c2, "c2: ");
}

