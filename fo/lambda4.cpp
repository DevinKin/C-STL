/*************************************************************************
    > File Name: lambda4.cpp
    > Author: King
    > Mail: arturiapendragon_1@163.com 
    > Created Time: 2017年12月30日 星期六 22时01分54秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <locale>
#include <string>

using namespace std;

char myToupper(char c)
{
	std::locale loc;
	return std::use_facet<std::ctype<char>>(loc).toupper(c);
}


int main()
{
	string s("Internationlization");
	string sub("Nation");

	//search substring case insensitive
	string::iterator pos;
	pos = search(s.begin(), s.end(),			//range
			sub.begin(), sub.end(),				//substring range
			[] (char c1, char c2) {
				return myToupper(c1) == myToupper(c2);
			});

	if (pos != s.end())
		cout << "\"" << sub << "\" is part of \"" << s << "\""
			 << endl;
}
