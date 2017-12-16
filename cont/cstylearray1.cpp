/*************************************************************************
    > File Name: cstylearray1.cpp
    > Author: King
    > Mail: arturiapendragon_1@163.com 
    > Created Time: 2017年12月16日 星期六 21时44分32秒
 ************************************************************************/

#include <iostream>
#include <vector>
#include <iterator>

int main()
{
	int vals[] = {33, 67, -4, 13, 5, 2};

	// use begin() and end() for ordinary C arrays
	std::vector<int> v(std::begin(vals), std::end(vals));

	// use global begin() and end() for containers:
	std::copy(std::begin(v), std::end(v),
			 std::ostream_iterator<int>(std::cout, " "));
	std::cout << std::endl;
	return(0);
}

