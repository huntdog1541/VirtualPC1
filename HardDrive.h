/*
 * HardDrive.h
 *
 *  Created on: Oct 29, 2014
 *      Author: dhunt
 */
#include <iostream>
#include "FileN.h"

#ifndef HARDDRIVE_H_
#define HARDDRIVE_H_

class HardDrive {
public:
	HardDrive();
	virtual ~HardDrive();
	void openHardDrive();
	void readHardDrive();
	void writeHardDrive();
	void createHardDrive();
	void readSuperBlock();
	void readInode();
	void writeSuperBlock();
	void writeInode();
	void ReadFromHardDrive(char * buf, int blockNum);
	void WriteToHardDrive(char * buf, int blockNum);
	void closeHardDrive();
	bool isOpen();

private:
	char * superblock;
	char * inode;
	char * currentBlock;
	FileN * currentFile;
	FILE * fin;
};

#endif /* HARDDRIVE_H_ */
