/*************************************************************************
    > File Name: istreamiter1.cpp
    > Author: King
    > Mail: arturiapendragon_1@163.com 
    > Created Time: 2017年12月17日 星期日 22时47分24秒
 ************************************************************************/

#include <iostream>
#include <iterator>
using namespace std;


int main()
{
	// create istream iterator that reads integers from cin
	istream_iterator<int> intReader(cin);

	// create end-of-stream iterator
	istream_iterator<int> intReaderEOF;
	
	// while able to read tokens with istream iterator
	// - write them twice
	while (intReader != intReaderEOF)
	{
		cout << "once:		" << *intReader << endl;
		cout << "once again: " << *intReader << endl;
		++intReader;
	}
}
