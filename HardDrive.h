/*
 * HardDrive.h
 *
 *  Created on: Oct 17, 2014
 *      Author: David
 */

#include "SuperBlock.h"
#include <stdio.h>
#include <stdlib.h>

#ifndef HARDDRIVE_H_
#define HARDDRIVE_H_

namespace std {

class HardDrive {
public:
	HardDrive();
	virtual ~HardDrive();

private:
	SuperBlock sb;
	void FormatHardDrive();
	void AccessFiles();
	void WriteSuperBlock(FILE * fin);
	void WriteInodeBlock(FILE * fin);
	void initHardDrive();
};

} /* namespace std */

#endif /* HARDDRIVE_H_ */
