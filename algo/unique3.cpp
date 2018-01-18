/*************************************************************************
    > File Name: unique3.cpp
    > Author: King
    > Mail: arturiapendragon_1@163.com 
    > Created Time: 2018年01月18日 星期四 13时13分44秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <iterator>

using namespace std;

bool bothSpaces(char elem1, char elem2)
{
	return elem1 == ' ' && elem2 == ' ';
}

int main()
{
	// don't skip leading whitespaces by default
	cin.unsetf(ios::skipws);

	// copy standard input to standard output
	// - while compressing spaces
	unique_copy(istream_iterator<char>(cin),			// beginning of source: cin
				istream_iterator<char>(),				// end of source: end-of-file
				ostream_iterator<char>(cout),			// destination: cout
				bothSpaces);
}
