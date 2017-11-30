/*************************************************************************
    > File Name: shareptr1.cpp
    > Author: King
    > Mail: arturiapendragon_1@163.com 
    > Created Time: 2017年11月26日 星期日 22时35分17秒
 ************************************************************************/

#include <iostream>
#include <string>
#include <vector>
#include <memory>
using namespace std;

int main()
{
	// two shared pointers representing two persons by their name
	shared_ptr<string> pNico(new string("nico"));
	shared_ptr<string> pJutta(new string("jutta"));

	// capitalize person names
	(*pNico)[0] = 'N';
	pJutta->replace(0, 1, "J");

	// put them mutiple times in a container
	vector<shared_ptr<string>> whoMadeCoffee;
	whoMadeCoffee.push_back(pJutta);
	whoMadeCoffee.push_back(pJutta);
	whoMadeCoffee.push_back(pNico);
	whoMadeCoffee.push_back(pJutta);
	whoMadeCoffee.push_back(pNico);

	// print all elements
	for (auto ptr: whoMadeCoffee) {
		cout << *ptr << "  ";
	}
	cout << endl;

	// print some internal data
	cout << "use_count: " << whoMadeCoffee[0].use_count() << endl;
}
