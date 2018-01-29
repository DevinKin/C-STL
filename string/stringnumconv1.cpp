/*************************************************************************
    > File Name: stringnumconv1.cpp
    > Author: King
    > Mail: arturiapendragon_1@163.com 
    > Created Time: 2018年01月29日 星期一 14时11分04秒
 ************************************************************************/

#include <iostream>
#include <iostream>
#include <limits>
#include <exception>

using namespace std;

int main()
{
	try {
		// convert to numeric type
		std::cout << std::stoi("  77") << std::endl;
		std::cout << std::stod("  77.7") << std::endl;
		std::cout << std::stol("-0x77") << std::endl;

		// use index of characters not processed
		std::size_t idx;
		std::cout << std::stoi("  42 is the truth", &idx) << std::endl;
		std::cout << " idx of first unprocessed char: " << idx << std::endl;

		// use bases 16 and 8
		std::cout << std::stoi("  42", nullptr, 16) << std::endl;
		std::cout << " idx of first unprocessed char: " << idx << std::endl;

		// convert numeric value to string
		long long ll = std::numeric_limits<long long>::max();
		std::string s = std::to_string(ll);
		std::cout << s << std::endl;

		// try to convert back
		std::cout << std::stoi(s) << std::endl;					// throws out_of range
	}
	catch (const std::exception& e) {
		std::cout << e.what() << std::endl;
	}
}
