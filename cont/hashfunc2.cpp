/*************************************************************************
    > File Name: hashfunc2.cpp
    > Author: King
    > Mail: arturiapendragon_1@163.com 
    > Created Time: 2017年12月14日 星期四 10时36分10秒
 ************************************************************************/

#include <iostream>
#include <string>
#include <unordered_set>
#include "hashval.hpp"
#include "print.hpp"
using namespace std;

class Customer 
{
	private:
		string fname;
		string lname;
		long no;
	public:
		Customer (const string& fn, const string& ln, long n)
			: fname(fn), lname(ln), no(n) {}

		string firstname() const 
		{
			return fname;
		}

		string lastname() const 
		{
			return lname;
		}
		
		long number() const
		{
			return no;
		}

		friend ostream& operator << (ostream& strm, const Customer& c)
		{
			return strm << "[" << c.fname << "," << c.lname << "," 
							   << c.no << "]";
		}
};


int main()
{
	// lambda for user-define hash function
	auto hash = [] (const Customer& c) {
		return hash_val(c.firstname(), c.lastname(), c.number());
	};

	// lambda for user-define equality criterion
	auto eq = [] (const Customer& c1, Customer c2) {
		return c1.number() == c2.number();
	};

	// create unordered set with user-define behavior
	unordered_set<Customer,
				  decltype(hash), decltype(eq)> custset(10, hash, eq);
	custset.insert(Customer("nico", "josuttis", 42));
	custset.insert(Customer("nico", "king", 43));
	custset.insert(Customer("nico", "arch", 43));
	custset.insert(Customer("nico", "kdein", 42));
	custset.insert(Customer("nico", "deepin", 45));
	PRINT_ELEMENTS(custset);

}


