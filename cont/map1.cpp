/*************************************************************************
    > File Name: map1.cpp
    > Author: King
    > Mail: arturiapendragon_1@163.com 
    > Created Time: 2017年12月12日 星期二 12时55分11秒
 ************************************************************************/

#include <iostream>
#include <string>
#include <map>
#include <algorithm>

using namespace std;

int main()
{
	map<string, double> coll { { "tim", 9.9},
								{"struppi", 11.77}
							 };

	// sequare the value of each element:
	for_each(coll.begin(), coll.end(), 
			 [] (pair<const string, double>& elem) {
				elem.second *= elem.second;
			 });

	// print each element:
	for_each(coll.begin(), coll.end(),
			[] (const map<string, double>::value_type& elem) {
				cout << elem.first << ": " << elem.second << endl;
			});
	return(0);
}
