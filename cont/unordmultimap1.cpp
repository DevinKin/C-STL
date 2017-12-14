/*************************************************************************
    > File Name: unordmultimap1.cpp
    > Author: King
    > Mail: arturiapendragon_1@163.com 
    > Created Time: 2017年12月14日 星期四 11时17分46秒
 ************************************************************************/

#include <iostream>
#include <string>
#include <utility>
#include <unordered_map>
#include "buckets.hpp"
using namespace std;

int main()
{
	// create and initialize an unordered multimap as dictionary
	unordered_multimap<string, string> dict = {
		{"day", "Tag"},
		{"strange", "fremd"},
		{"car", "Auto"},
		{"smart", "elegant"},
		{"trait", "Merkmal"},
		{"strange", "seltsam"}
	};
	printHashTableState(dict);

	// insert some additional values (might cause rehashing)
	dict.insert({{"smart", "raffiniert"}, 
				 {"smart", "klug"},
				 {"clever", "raffiniert"}
				 });
	printHashTableState(dict);

	// modify maximum load factor (might cause rehashing)
	dict.max_load_factor(0.7);
	printHashTableState(dict);
	return(0);
}

