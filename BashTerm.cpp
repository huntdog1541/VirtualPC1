//============================================================================
// Name        : BashTerm.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
#include "Commands.h"
#include "HardDrive.h"

using namespace std;

int main() {
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	Commands cds;
	cout << "Bash>> ";
	string input;
	getline(cin, input);
	cout << input << endl;
	cds.parseString(input);
	HardDrive hd;
	return 0;
}
