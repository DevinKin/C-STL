/*************************************************************************
    > File Name: string1.cpp
    > Author: King
    > Mail: arturiapendragon_1@163.com 
    > Created Time: 2018年01月23日 星期二 23时57分04秒
 ************************************************************************/

#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[])
{
	string filename, basename, extname, tmpname;
	const string suffix("tmp");

	// for each command-line argument(which is an ordinary C-string)
	for (int i = 1; i < argc; ++i) {
		// process argument as filename
		filename = argv[i];

		// search period in filename
		string::size_type idx = filename.find('.');
		if (idx == string::npos) {
			// filename does not contain any period
			tmpname = filename + '.' + suffix;
		}
		else {
			// split filename into base name and extension
			// - base name contains all characters fore the period
			// - extension contains all characters after the period
			basename = filename.substr(0, idx);
			extname = filename.substr(idx + 1);
			if (extname.empty()) {
				// contains period no extension: append tmp
				tmpname = filename;
				tmpname += suffix;
			}
			else if (extname == suffix) {
				// replace exension tmp with xxx
				tmpname = filename;
				tmpname.replace(idx + 1, extname.size(), "xxx");
			}
			else {
				// replace any extension with tmp
				tmpname = filename;
				tmpname.replace(idx + 1, string::npos, suffix);
			}
		}

		// print filename and temporary name
		cout << filename << " => " << tmpname << endl;
	}

}

