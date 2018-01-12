/*************************************************************************
    > File Name: copy3.cpp
    > Author: King
    > Mail: arturiapendragon_1@163.com 
    > Created Time: 2018年01月12日 星期五 19时36分17秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <iterator>
#include <string>

using namespace std;

int main()
{
	copy(istream_iterator<string>(cin), 
			istream_iterator<string>(),
			ostream_iterator<string>(cout, "\n"));
}

