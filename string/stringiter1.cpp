/*************************************************************************
    > File Name: stringiter1.cpp
    > Author: King
    > Mail: arturiapendragon_1@163.com 
    > Created Time: 2018年01月29日 星期一 16时36分42秒
 ************************************************************************/

#include <string>
#include <iostream>
#include <algorithm>
#include <cctype>
#include <regex>
using namespace std;

int main()
{
	// create a string 
	string s("The zip code of Braunschweig in Germany is 38100");
	cout << "original: " << s << endl;

	// lowercase all characters
	transform(s.cbegin(), s.cend(),			// source
				s.begin(),					// destination
				[] (char c) {
					return tolower(c);
				});
	cout << "lowered: " << s << endl;

	// uppercast all characters
	transform(s.cbegin(), s.cend(),
				s.begin(), 
				[](char c) {
					return toupper(c);
				});
	cout << "uppered: " << s << endl;

	// search case-insensitive for Germany
	string g("Germany");
	string::const_iterator pos;
	pos = search(s.cbegin(), s.cend(),
				g.cbegin(), g.cend(),
				[] (char c1, char c2) {
					return toupper(c1) == toupper(c2);
				});
	if (pos != s.cend()) {
		cout << "substring \"" << g << "\" found at index "
			 << pos - s.cbegin() << endl;
	}
}
