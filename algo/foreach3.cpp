/*************************************************************************
    > File Name: foreach3.cpp
    > Author: King
    > Mail: arturiapendragon_1@163.com 
    > Created Time: 2018年01月03日 星期三 08时07分58秒
 ************************************************************************/

#include "algostuff.hpp"
using namespace std;

class MeanValue {
	private:
		long num;				//number of elements
		long sum;				//sum of all element value

	public:
		//constructor
		MeanValue() : num(0), sum(0) {}

		//function call
		//- process one more element of the sequence
		void operator() (int elem)
		{
			num++;
			sum += elem;
		}

		//return mean value(implicit type conversion)
		operator double()
		{
			return static_cast<double>(sum) /static_cast<double>(num);
		}
};


int main()
{
	vector<int> coll;

	INSERT_ELEMENTS(coll, 1, 8);

	//process and print mean value
	double mv = for_each(coll.begin(), coll.end(), MeanValue());
	cout << "mean value: " << mv << endl;
}

