/*************************************************************************
    > File Name: exception.cpp
    > Author: King
    > Mail: arturiapendragon_1@163.com 
    > Created Time: 2017年11月26日 星期日 10时25分34秒
 ************************************************************************/

#include <exception>
#include <system_error>
#include <future>
#include <iostream>

template <typename T>
void processCodeException(const T& e)
{
	using namespace std;
	auto c = e.code();
	cerr << "- category:		" << c.category().name() << endl;
	cerr << "- value:			" << c.value << endl;
	cerr << "- msg:				" << c.message() << endl;
	cerr << "- def category:	" 
		 << c.default_error_condition().category().name() << endl;
	cerr << "- def value: " 
		 << c.default_error_condition().value() << endl;
	cerr << "- def msg:"
		 << c.default_error_condition().message() << endl;
}


void processException()
{
	using namespace std;
	try {
		throw;				//rethrow exception to deal with it here
	}
	catch (const ios_base::failure & e){
		cerr << "I/O EXCEPTION: " << e.what() << endl;
	}
	catch (const system_error & e){
		cerr << "SYSTEM EXCEPTION: " << e.what() << endl;
	}
	catch (const future_error & e){
		cerr << "FUTURE EXCEPTION: " << e.what() << endl;
	}
	catch (const bad_alloc & e){
		cerr << "BAD ALLOC EXCEPTION: " << e.what() << endl;
	}
	catch (const exception & e){
		cerr << "EXCEPTION: " << e.what() << endl;
	}
	catch (...) {
		cerr << "EXCEPTION(unknown)" << endl;
	}
}


int
main()
{
	try{
		throw std::system_error(std::make_error_code(std::errc::invalid_argument),
				"argument ... is not valid");
	}
	catch(...){
		processException();
	}
	return(0);
}
