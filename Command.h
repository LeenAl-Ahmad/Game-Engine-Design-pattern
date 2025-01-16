#pragma once
#include<string>

class BaseCommand;

class Command
{
public:
	Command();
	~Command();
	void HandleInput(std::string _b);
private:
	BaseCommand* m_comJump;
	BaseCommand* m_comFire;
	BaseCommand* m_comSwap;
	BaseCommand* m_comLurch;
};

