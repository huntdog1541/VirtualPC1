/*
 * Commands.h
 *
 *  Created on: Oct 29, 2014
 *      Author: dhunt
 */
#include <string>
#include <vector>

using namespace std;

#ifndef COMMANDS_H_
#define COMMANDS_H_

class Commands {
public:
	Commands();
	virtual ~Commands();
	void parseString(string cmds);
private:
	vector<string> text;
	string cmd;
};

#endif /* COMMANDS_H_ */
