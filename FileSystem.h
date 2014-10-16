/*
 * FileSystem.h
 *
 *  Created on: Oct 16, 2014
 *      Author: David
 */

#ifndef FILESYSTEM_H_
#define FILESYSTEM_H_

class FileSystem {


public:
	FileSystem();
	virtual ~FileSystem();
private:
	//FILE HardDrive;
	void FormatHardDrive();
	void AccessFiles();
	void WriteSuperBlock(FILE * fin);
	void WriteInodeBlock(FILE * fin);
};

#endif /* FILESYSTEM_H_ */
