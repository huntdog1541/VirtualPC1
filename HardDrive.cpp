/*
 * HardDrive.cpp
 *
 *  Created on: Oct 29, 2014
 *      Author: dhunt
 */

#include "HardDrive.h"
#include <cstdio>
#include <cstdlib>

#define BLOCK_SIZE 1024

HardDrive::HardDrive() {
	superblock = (char *)malloc(sizeof(char)*BLOCK_SIZE + 1);
	inode = (char *)malloc(sizeof(char)*BLOCK_SIZE +1);
	currentBlock = NULL;
	currentFile = NULL;
	createHardDrive();
	//openHardDrive();

}

HardDrive::~HardDrive() {
	free(superblock);
}

void HardDrive::openHardDrive()
{
	fin = fopen("drive.bin", "r+");
}
void HardDrive::closeHardDrive()
{
	fclose(fin);
}
void HardDrive::readHardDrive()
{

}
void HardDrive::writeHardDrive()
{

}

void HardDrive::createHardDrive()
{
	int i, j;
	unsigned char hd[BLOCK_SIZE-4];
	fin = fopen("drive.bin", "w+");
	for (j = 0; j < 25; j++)
	{
		for (i = 0; i < (BLOCK_SIZE-4); i++)
		{
			hd[i] = i;
		}
		fwrite(hd, sizeof(char), sizeof(hd), fin);
		fwrite(&j, sizeof(int), sizeof(int), fin);
	}
	cout << "char: " << sizeof(char) << endl;
	cout << "int: " << sizeof(int) << endl;
}

void HardDrive::readSuperBlock()
{
	ReadFromHardDrive(superblock, 0);
}
void HardDrive::readInode()
{

}
void HardDrive::writeSuperBlock()
{
	WriteToHardDrive(superblock, 0);
}
void HardDrive::writeInode()
{

}

void HardDrive::ReadFromHardDrive(char * buf, int blockNum)
{
	if(isOpen())
	{
		fseek(fin, (blockNum * BLOCK_SIZE), SEEK_SET);
		int res;
		res = fread(buf, sizeof(char), sizeof(buf), fin);
		if(res != sizeof(buf))
		{
			cout << "Error reading from file" << endl;
		}
	}
}

void HardDrive::WriteToHardDrive(char * buf, int blockNum)
{
	if(isOpen())
	{
		fseek(fin, (blockNum * BLOCK_SIZE), SEEK_SET);
		int res;
		res = fread(buf, sizeof(char), sizeof(buf), fin);
		if(res != sizeof(buf))
		{
			cout << "Error writing to file" << endl;
		}
	}
}

bool HardDrive::isOpen()
{
	if(fin == NULL)
		return false;
	else
		return true;
}
