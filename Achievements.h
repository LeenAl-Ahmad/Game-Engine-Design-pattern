#pragma once
#include "Obesrver.h"

class Achievements: public Observer
{
public:
	virtual void  OnNotify(Unit* _unit, std::string _event);
private:
	void UnlockAch(std::string _ach);
};

