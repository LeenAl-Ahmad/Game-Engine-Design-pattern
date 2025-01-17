#include "Achievements.h"
#include "Unit.h"

#include <iostream>

void Achievements::OnNotify(Unit* _unit, std::string _event)
{
	if ((_event == "UnitFalling") && (_unit->GetY() < 0))
	{
		UnlockAch("Died from Falling");
	}
}

void Achievements::UnlockAch(std::string _ach)
{
	std::cout << "Achievements unlocked:" << _ach << "!!\n";
}
