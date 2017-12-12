/*************************************************************************
    > File Name: multimap1.cpp
    > Author: King
    > Mail: arturiapendragon_1@163.com 
    > Created Time: 2017年12月12日 星期二 13时08分40秒
 ************************************************************************/

#include <iostream>
#include <map>
#include <string>
#include <iomanip>

using namespace std;


int main()
{
	// create multimap as string/string dictionary
	multimap<string, string> dict;
	dict.insert({{"day", "Tag"}, {"strange", "fremd"},
				{"car", "Auto"}, {"smart", "elegant"},
				{"trait", "Merkmal"}, {"strange", "seltsam"},
				{"smart", "raffiniert"}, {"smart", "klug"},
				{"clever", "raffiniert"}});

	// print all elements
	cout.setf(ios::left, ios::adjustfield);
	cout << ' ' << setw(10) << "english "
		 << "german " << endl;
	cout << setfill('-') << setw(20) << ""
		 << setfill(' ') << endl;
	
	for (const auto& elem : dict)
	{
		cout << ' ' << setw(10) << elem.first 
			 << elem.second << endl;
	}

	cout << endl;

	// print all values for key "smart"
	string word("smart");
	cout << word << ": " << endl;
	for (auto pos = dict.lower_bound(word);
		pos != dict.upper_bound(word);
		++pos)
	{
		cout << "	 " << pos->second << endl;
	}

	// print all keys for value "raffiniert"
	word = ("raffiniert");
	cout << word << ": " << endl;
	for (const auto& elem : dict) {
		if (elem.second == word)
			cout << "	 " << elem.first << endl;
	}

}
