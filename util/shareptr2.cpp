/*************************************************************************
    > File Name: shareptr2.cpp
    > Author: King
    > Mail: arturiapendragon_1@163.com 
    > Created Time: 2017年11月26日 星期日 23时06分11秒
 ************************************************************************/

#include <iostream>
#include <fstream>
#include <memory>
#include <cstdio>

class FileDeleter
{
	private:
		std::string filename;
	public:
		FileDeleter(const std::string& fn)
			: filename(fn){

			}
		void operator () (std::ofstream* fp) {
			fp->close();						//close file
			std::remove(filename.c_str());		//delete file
		}
};

int main()
{
	// create and open temporary file:
	std::shared_ptr<std::ofstream> fp(new std::ofstream("tmpfile.txt"),
										FileDeleter("tmpfile.txt"));
}
