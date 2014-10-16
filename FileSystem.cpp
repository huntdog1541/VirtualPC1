/*
 * FileSystem.cpp
 *
 *  Created on: Oct 16, 2014
 *      Author: David
 */

#include "FileSystem.h"
#include <stdlib.h>
#include <stdio.h>

FileSystem::FileSystem() {
	// TODO Auto-generated constructor stub

}

FileSystem::~FileSystem() {
	// TODO Auto-generated destructor stub
}

void FileSystem::FormatHardDrive()
{
	FILE * fin = fopen("data.bin", "w+");

	fclose(fin);
}

void FileSystem::AccessFiles()
{

}

void FileSystem::WriteSuperBlock(FILE * fin)
{

}

void FileSystem::WriteInodeBlock(FILE * fin)
{

}


