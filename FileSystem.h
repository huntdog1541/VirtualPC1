/*
 * FileSystem.h
 *
 *  Created on: Oct 29, 2014
 *      Author: dhunt
 */
#include <string>

using namespace std;

#ifndef FILESYSTEM_H_
#define FILESYSTEM_H_

class FileSystem {
public:
	FileSystem();
	virtual ~FileSystem();
private:
	string currentDirectory;
	string home;
	string currentFile;
};

#endif /* FILESYSTEM_H_ */
