/*
 * FileSystem.h
 *
 *  Created on: Oct 16, 2014
 *      Author: David
 */

#include <stdlib.h>
#include <stdio.h>
#include <iostream>

#ifndef FILESYSTEM_H_
#define FILESYSTEM_H_

class FileSystem {

public:
	FileSystem();
	virtual ~FileSystem();
	void setCurrDirectory(string temp);
	string getCurrDirectory();
	string getHomeDirectory();
	HardDrive hd;
private:
	string currentDirectory;
	string homeDirectory;
};

#endif /* FILESYSTEM_H_ */
