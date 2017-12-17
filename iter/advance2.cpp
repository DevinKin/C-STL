/*************************************************************************
    > File Name: advance2.cpp
    > Author: King
    > Mail: arturiapendragon_1@163.com 
    > Created Time: 2017年12月17日 星期日 22时50分32秒
 ************************************************************************/

#include <iostream>
#include <iterator>
#include <string>
#include <algorithm>

using namespace std;


int main()
{
	istream_iterator<string> cinPos(cin);
	ostream_iterator<string> coutPos(cout, " ");

	// while input is not at the end of the file
	// - write every third string
	while (cinPos != istream_iterator<string>())
	{
		// ignore the following two strings
		advance(cinPos, 2);
		
		// read and write the third string
		if (cinPos != istream_iterator<string>())
		{
			*coutPos++ = *cinPos++;
		}
	}
	cout << endl;
}
