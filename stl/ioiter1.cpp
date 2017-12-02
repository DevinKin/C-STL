/*************************************************************************
    > File Name: ioiter1.cpp
    > Author: King
    > Mail: arturiapendragon_1@163.com 
    > Created Time: 2017年12月02日 星期六 20时13分44秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>
#include <string>

using namespace std;

int main()
{
	vector<string> coll;

	copy(istream_iterator<string>(cin),
			istream_iterator<string>(),
			back_inserter(coll));

	sort(coll.begin(), coll.end());

	unique_copy(coll.cbegin(), coll.cend(),
			ostream_iterator<string>(cout, "\n"));
	return(0);
}

