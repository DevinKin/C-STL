/*************************************************************************
    > File Name: search4.cpp
    > Author: King
    > Mail: arturiapendragon_1@163.com 
    > Created Time: 2018年01月03日 星期三 23时35分05秒
 ************************************************************************/

#include "algostuff.hpp"
using namespace std;


//checks whether an element is even or odd
bool checkEven(int elem, bool even)
{
	if (even) {
		return elem % 2 == 0;
	}
	else {
		return elem % 2 == 1;
	}
}


int main()
{
	vector<int> coll;

	INSERT_ELEMENTS(coll, 1, 9);
	PRINT_ELEMENTS(coll, "coll: ");

	// argument for checkEven()
	// - check for: "even odd even"
	bool checkEvenArgs[3] = {true, false, true};

	// search first subrange in coll
	vector<int>::iterator pos;
	pos = search(coll.begin(), coll.end(),							//range
				checkEvenArgs, checkEvenArgs + 3,					//subr values
				checkEven);											//subr, criterion


	//loop while subrange found
	while (pos != coll.end())
	{
		//print position of first element
		cout << "subrange found starting with element "
			 << distance(coll.begin(), pos) + 1
			 << endl;

		//search next subrange in coll
		pos = search(++pos, coll.end(),
					checkEvenArgs, checkEvenArgs + 3,				//subr range 
					checkEven);			
	}
}