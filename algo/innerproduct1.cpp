/*************************************************************************
    > File Name: innerproduct1.cpp
    > Author: King
    > Mail: arturiapendragon_1@163.com 
    > Created Time: 2018年01月20日 星期六 15时14分07秒
 ************************************************************************/

#include "algostuff.hpp"
using namespace std;

int main()
{
	list<int> coll;

	INSERT_ELEMENTS(coll, 1, 6);
	PRINT_ELEMENTS(coll);

	// process sum of all products
	// (0 + 1*1 + 2*2 + 3*3 + 4*4 + 5*5 + 6*6)
	cout << "inner product: "
		 << inner_product(coll.cbegin(), coll.cend(),
						  coll.cbegin(),
						  0)
		 << endl;


	// process sum of 1*6 ... 6*1
	// (0 + 1*6 + 2*5 + 3*4 + 4*3 + 5*2 + 6*1)
	cout << "product of sums: "
		 << inner_product(coll.cbegin(), coll.cend(),
						  coll.cbegin(),
						  0)
		 << endl;

	// process product of all sums
	// (1 * 1+1 * 2+2 * 3+3 * 4+4 * 5+5 * 6+6)
	cout << "product of sums: "
		 << inner_product(coll.cbegin(), coll.cend(),
							coll.cbegin(),
							1,
							multiplies<int>(),
							plus<int>())
		 << endl;

}


