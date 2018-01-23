/*************************************************************************
    > File Name: string2.cpp
    > Author: King
    > Mail: arturiapendragon_1@163.com 
    > Created Time: 2018年01月24日 星期三 00时36分14秒
 ************************************************************************/

#include <iostream>
#include <string>
using namespace std;

int main(int argc, char **argv)
{
	const string delims(" \t,.;");
	string line;

	// for every line read successfully
	while (getline(cin, line)) {
		string::size_type begIdx, endIdx;

		// search beginning of the first word
		begIdx = line.find_first_not_of(delims);

		// while beginning of a word found
		while (begIdx != string::npos)
		{
			endIdx = line.find_first_of(delims, begIdx);
			if (endIdx == string::npos) {
				// end of word is end of line
				endIdx = line.length();
			}

			// print characters in reverse order
			for (int i = endIdx - 1; i >= static_cast<int>(begIdx); --i) {
				cout << line[i];
			}
			cout << ' ';
	
			// search beginning of the next word
			begIdx = line.find_first_not_of(delims, endIdx);
		}
	}
	cout << endl;
}
