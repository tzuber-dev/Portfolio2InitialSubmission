#pragma once
#pragma once
#ifndef BATTLEBOAT_H
#define BATTLEBOAT_H

#include <array>

#include <string>


class BattleGameLayout {

public:
	BattleGameLayout();
	void ImplementBoat(const std::string& placement1);
	void TryToShoot(const std::string& placement2);
	std::string showscreen() const;
private:
	std::array<std::array<std::string, 4>, 4> NumberOfRows;

};

#endif

// one of the header files