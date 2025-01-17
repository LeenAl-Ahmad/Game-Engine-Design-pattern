#pragma once
#include<string>
#include <vector>

#include "BaseCommand.h"

class Unit;

class Command
{
public:
	Command();
	~Command();
	void HandleInput(std::string _b);
	void Undo();

private:
	std::vector<BaseCommand*> m_commands;
	Unit* m_unit;
};

