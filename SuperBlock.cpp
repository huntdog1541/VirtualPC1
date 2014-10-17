/*
 * SuperBlock.cpp
 *
 *  Created on: Oct 17, 2014
 *      Author: David
 */

#include "SuperBlock.h"
#include <stdio.h>
#include <stdlib.h>
#include <iostream>

namespace std {

SuperBlock::SuperBlock() {
	//initSuperBlock();
	createDisc();
}

SuperBlock::~SuperBlock() {
	// TODO Auto-generated destructor stub
}

void SuperBlock::initSuperBlock()
{
	root_inode = 1;
	size = 1052;
	inode_start = 1;
	inode_end = 51;
	inode_num = 50;
	start_data_blocks = 52;
	end_data_blocks = 1052;
	data_blocks_num = 1000;
}

void SuperBlock::createDisc()
{
	FILE * fin = fopen("data.bin", "w+");
	if(fin == NULL)
	{
		fprintf(stderr, "Problem opening file");
	}
	char words[1076224];
	int i;
	for(i = 0; i < 1076224; i++)
	{
		words[i] = 0;
	}
	fwrite(words, sizeof(char), sizeof(words), fin);
	fclose(fin);
	cout << "Ran This" << endl;
}

} /* namespace std */
