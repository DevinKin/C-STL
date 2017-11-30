/*************************************************************************
    > File Name: minmax1.cpp
    > Author: King
    > Mail: arturiapendragon_1@163.com 
    > Created Time: 2017年11月28日 星期二 18时28分29秒
 ************************************************************************/

#include <algorithm>
#include <iostream>
using namespace std;

// function that compares two pointers by comparing the values to which they point
bool int_ptr_less (int* a, int* b)
{
	return *a < *b;
}


int main()
{
	int		x = 17;
	int		y = 42;
	int		z = 33;
	int*	px = &x;
	int*	py = &y;
	int*	pz = &z;

	// call max() which special comparison function
	int* pmax = std::max(px, py, int_ptr_less);

	// call minmax() for initializer list with special comparison function
	std::pair<int *, int *> extremes = std::minmax({px, py, pz}, int_ptr_less);

	cout << *pmax << endl;
	cout << *extremes.first << std::endl << *extremes.second << endl;
	return (0);
}
