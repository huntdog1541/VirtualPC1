/*
 * Kernel.h
 *
 *  Created on: Oct 16, 2014
 *      Author: David
 */
#include "FileSystem.h"

#ifndef KERNEL_H_
#define KERNEL_H_

class Kernel {
public:
	Kernel();
	virtual ~Kernel();
	FileSystem fs;
};

#endif /* KERNEL_H_ */
