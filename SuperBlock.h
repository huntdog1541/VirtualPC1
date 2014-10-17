/*
 * SuperBlock.h
 *
 *  Created on: Oct 17, 2014
 *      Author: David
 */

#ifndef SUPERBLOCK_H_
#define SUPERBLOCK_H_

namespace std {

class SuperBlock {
public:
	SuperBlock();
	virtual ~SuperBlock();
private:
	int root_inode;
	int size;
	int inode_start;
	int inode_end;
	int inode_num;
	int free_blocks;
	int start_data_blocks;
	int end_data_blocks;
	int data_blocks_num;
	void initSuperBlock();
	void createDisc();
};

} /* namespace std */

#endif /* SUPERBLOCK_H_ */