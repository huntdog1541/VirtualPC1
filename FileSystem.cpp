/*
 * FileSystem.cpp
 *
 *  Created on: Oct 16, 2014
 *      Author: David
 */

#include "FileSystem.h"
#include <stdlib.h>
#include <stdio.h>
#include <iostream>

FileSystem::FileSystem() {
	// TODO Auto-generated constructor stub
	hd = new HardDrive();
}

FileSystem::~FileSystem() {
	// TODO Auto-generated destructor stub
}

string FileSystem::getCurrDirectory()
{
	return curremtDirectory;
}

string FileSystem::getHomeDirectory()
{
	return homeDirectory;
}

void FileSystem::setCurrDirectory(string temp)
{
	curremtDirectory = temp;
}

