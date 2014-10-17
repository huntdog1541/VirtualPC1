/*
 * HardDrive.cpp
 *
 *  Created on: Oct 17, 2014
 *      Author: David
 */

#include "HardDrive.h"
#include "SuperBlock.h"
#include <stdlib.h>
#include <stdio.h>
#include <iostream>

namespace std {

HardDrive::HardDrive()
{
	initHardDrive();
}

HardDrive::~HardDrive() {
	// TODO Auto-generated destructor stub
}

void HardDrive::initHardDrive()
{
	sb = new SuperBlock();
}

void HardDrive::FormatHardDrive()
{
	FILE * fin = fopen("data.bin", "w+");

	fclose(fin);
}

void HardDrive::AccessFiles()
{

}

void HardDrive::WriteSuperBlock(FILE * fin)
{

}

void HardDrive::WriteInodeBlock(FILE * fin)
{

}

} /* namespace std */
