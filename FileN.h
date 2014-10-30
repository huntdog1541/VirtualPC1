/*
 * FileN.h
 *
 *  Created on: Oct 29, 2014
 *      Author: dhunt
 */
#include <string>
#include <iostream>

using namespace std;

#ifndef FILEN_H_
#define FILEN_H_

class FileN {
public:
	FileN();
	virtual ~FileN();
private:
	string fileName;
	string folderName;
};

#endif /* FILEN_H_ */
