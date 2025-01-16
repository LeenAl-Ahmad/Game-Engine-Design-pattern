#include <iostream>
#include "Command.h"
#include "BaseCommand.h"

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
	m_comJump = new CommandJump();
	m_comFire = new CommandFire();
	m_comSwap = new CommandSwap();
	m_comLurch = new CommandLurch();
}

Command ::~Command()
{
	delete m_comJump;
	delete m_comFire;
	delete m_comSwap;
	delete m_comLurch;


}

void Command::HandleInput(std::string _b)
{
	if (_b == "X") m_comJump->Execute();
	else if (_b == "Y") m_comFire->Execute();
	else if (_b == "A") m_comSwap->Execute();
	else if (_b == "B") m_comLurch->Execute();
}
