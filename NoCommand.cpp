#include "NoCommand.h"
#include <iostream>

void NoCommand::Jump()
{
	std::cout << "Jump!\n";
}

void NoCommand::FireGun()
{
	std::cout << "Fire Gun!\n";
}

void NoCommand::SwapWeapon()
{
	std::cout << "Swap Weapon!\n";
}

void NoCommand::Lurch()
{
	std::cout << "Lurch!\n";
}

void NoCommand::HandleInput(std::string _b)
{
	if (_b == "X") Jump();
	else if (_b == "Y") FireGun();
	else if (_b == "A") SwapWeapon();
	else if (_b == "B") Lurch();
}