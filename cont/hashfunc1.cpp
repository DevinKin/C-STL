/*************************************************************************
    > File Name: hashfunc1.cpp
    > Author: King
    > Mail: arturiapendragon_1@163.com 
    > Created Time: 2017年12月14日 星期四 10时23分41秒
 ************************************************************************/

#include <iostream>
#include <unordered_set>
#include <string>
#include "hashval.hpp"
#include "print.hpp"
using namespace std;


class Customer {
	private:
		string fname;
		string lname;
		long no;
	public:
		Customer (const string& fn, const string& ln, long n)
			: fname(fn), lname(ln), no(n) {}
		friend ostream& operator << (ostream& strm, const Customer& c) 
		{
			return strm << "[" << c.fname << "," << c.lname << ","
							   << c.no << "]";
		}
		friend class CustomerHash;
		friend class CustomerEqual;
};

class CustomerHash
{
	public:
		std::size_t operator() (const Customer& c) const
		{
			return hash_val(c.fname, c.lname, c.no);
		}
};

class CustomerEqual
{
	public:
		bool operator() (const Customer& c1, Customer& c2) const
		{
			return c1.no == c2.no;
		}
};


int main()
{
	// unordered sete with own hash function and equaivalence criterion
	unordered_set<Customer, CustomerHash, CustomerEqual> custset;
	custset.insert(Customer("nico", "josuttis", 42));
	custset.insert(Customer("naco", "jaADFADF", 42));
	custset.insert(Customer("nwco", "joRadads", 44));
	custset.insert(Customer("naco", "jaADFADF", 43));
	PRINT_ELEMENTS(custset);
}
