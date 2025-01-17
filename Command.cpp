#include <iostream>
#include "Command.h"
#include "BaseCommand.h"
#include "Unit.h"
#include "CommandMoveUnit.h"

class CommandJump: public BaseCommand
{
public:
	CommandJump() {}
	virtual void Execute() { std::cout << "Jump!\n"; }
};

class CommandFire : public BaseCommand
{
public:
	CommandFire() {}
	virtual void Execute() { std::cout << "Fire Gun!\n"; }
};

class CommandSwap : public BaseCommand
{
public:
	CommandSwap() {}
	virtual void Execute() { std::cout << "Swap Weapon!\n"; }
};

class CommandLurch : public BaseCommand
{
public:
	CommandLurch() {}
	virtual void Execute() { std::cout << "Lurch!\n"; }
};

Command::Command()
{
	m_unit = new Unit();
}

Command ::~Command()
{
	delete m_unit;
}

void Command::HandleInput(std::string _b)
{
	CommaandMoveUnit* moveCom = nullptr;
	if (_b == "X") moveCom = new CommaandMoveUnit(m_unit, m_unit->GetX(), m_unit->GetY() + 1);
	else if (_b == "Y")  moveCom = new CommaandMoveUnit(m_unit, m_unit->GetX() - 1, m_unit->GetY());
	else if (_b == "A")  moveCom = new CommaandMoveUnit(m_unit, m_unit->GetX(), m_unit->GetY() - 1);
	else if (_b == "B")  moveCom = new CommaandMoveUnit(m_unit, m_unit->GetX() + 1, m_unit->GetY());

	if (moveCom != nullptr)
	{
		moveCom->Execute();
		m_commands.push_back(moveCom);
	}
}

void Command::Undo()
{
	BaseCommand* lastCommand = m_commands.back();
	lastCommand->Undo();
	delete lastCommand;
	m_commands.pop_back();
}
