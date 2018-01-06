/*************************************************************************
    > File Name: equal1.cpp
    > Author: King
    > Mail: arturiapendragon_1@163.com 
    > Created Time: 2018年01月06日 星期六 15时44分01秒
 ************************************************************************/

#include "algostuff.hpp"
using namespace std;

bool bothEvenOrOdd(int elem1, int elem2)
{
	return elem1 % 2 == elem2 % 2;
}


int main()
{
	vector<int> coll1;
	list<int>	coll2;

	INSERT_ELEMENTS(coll1, 1, 7);
	INSERT_ELEMENTS(coll2, 3, 9);

	PRINT_ELEMENTS(coll1, "coll1: ");
	PRINT_ELEMENTS(coll2, "coll2: ");

	// check whether both collections are equal 
	if (equal(coll1.begin(), coll1.end(), coll2.begin()))
	{
		cout << "coll1 == coll2 " << endl;
	}
	else
	{
		cout << "coll1 != coll2 " << endl;
	}

	// checkfor corresponding even and odd elements
	if (equal(coll1.begin(), coll1.end(),
				coll2.begin(),
				bothEvenOrOdd))
	{
		cout << "even and odd element correspond" << endl;
	}
	else
	{
		cout << "even and odd elements do not correspond" << endl;
	}

}
