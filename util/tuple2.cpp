/*************************************************************************
    > File Name: tuple2.cpp
    > Author: King
    > Mail: arturiapendragon_1@163.com 
    > Created Time: 2017年11月26日 星期日 21时02分18秒
 ************************************************************************/

#include <iostream>
#include <tuple>
#include <string>
#include "printtuple.h"
using namespace std;

int main()
{
	tuple <int,float,string> t(77, 1.1, "more light");
	cout << "io: " << t << endl;
}
