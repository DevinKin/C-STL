/*************************************************************************
    > File Name: icstring.cpp
    > Author: King
    > Mail: arturiapendragon_1@163.com 
    > Created Time: 2018年01月30日 星期二 10时14分29秒
 ************************************************************************/
 
#include "icstring.hpp"


int main()
{
	using std::cout;
	using std::endl;

	icstring s1("hallo");
	icstring s2("otto");
	icstring s3("hALLo");

	cout << std::boolalpha;
	cout << s1 << " == " << s2 << " : " << (s1 == s2) << endl;
	cout << s1 << " == " << s3 << " : " << (s1 == s3) << endl;

	icstring::size_type idx = s1.find("All");
	if (idx != icstring::npos) {
		cout << "index of \"All\" in \"" << s1 << "\": "
			 << idx << endl;
	}
	else {
		cout << "\"All\" not found in \"" << s1 << endl;
	}
}
