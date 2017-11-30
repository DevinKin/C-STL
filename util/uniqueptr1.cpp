/*************************************************************************
    > File Name: uniqueptr1.cpp
    > Author: King
    > Mail: arturiapendragon_1@163.com 
    > Created Time: 2017年11月27日 星期一 21时00分59秒
 ************************************************************************/

#include <iostream>
#include <string>				
#include <memory>					// for unique_ptr
#include <dirent.h>					// opendir(), ...
#include <cstring>					// for strerror()
#include <cerrno>					// for errno
using namespace std;


class DirCloser
{
	public:
		void operator () (DIR *dp) {
			if (closedir(dp) != 0) {
				cerr << "OOPS: closedir() failed" << endl;
			}
		}
};

int main()
{
	// open current directory:
	unique_ptr<DIR, DirCloser> pDir(opendir("."));

	// process each directory entry:
	struct dirent *dp;
	while ((dp = readdir(pDir.get())) != nullptr) {
		string filename(dp->d_name);
		cout << "process " << filename << endl;
	}
	return (0);
}

