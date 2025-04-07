#pragma once
#ifndef BB_H
#define BB_H

#include "BBLayout.h"


class BBGame {
public: 
	BBGame();
	void LaunchBBGame();
private: 
	BBLayoutDesign, UserDesign, ComputerDesign;
	void RandomSystemForBoats(BBLayoutdesign& layout);
	std::string UserSelection(const std::string& questionasked);
	void CheckComputerSelection();
	bool FindIfGameFinished();

};


#endif