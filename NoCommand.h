#pragma once
#include <string>
class NoCommand
{
public: 
	void HandleInput(std::string _b);

private:
	void Jump();
	void FireGun();
	void SwapWeapon();
	void Lurch();
};

