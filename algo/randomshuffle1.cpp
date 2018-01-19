/*************************************************************************
    > File Name: radomshuffle1.cpp
    > Author: King
    > Mail: arturiapendragon_1@163.com 
    > Created Time: 2018年01月19日 星期五 22时41分46秒
 ************************************************************************/

#include "algostuff.hpp"
using namespace std;

class MyRandom {
	public:
		ptrdiff_t operator() (ptrdiff_t max) {
			double tmp;
			tmp = static_cast<double> (rand()) / static_cast<double>(RAND_MAX);
			return static_cast<ptrdiff_t>(tmp *max);
		}
};

int main()
{
	vector<int> coll;

	INSERT_ELEMENTS(coll, 1, 9);
	PRINT_ELEMENTS(coll, "coll: ");

	// shuffle elements with self-writen random-number generator
	MyRandom rd;
	random_shuffle(coll.begin(), coll.end(),			// range
					rd);								// random-number generator
	PRINT_ELEMENTS(coll, "shuffled: ");
}

