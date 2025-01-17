#pragma once
#include <iostream>

class Legs
{
public:
	void Walk() { std::cout << "Robot walking\n"; }
};

class Arms
{
public:
	void Grab() { std::cout << "Robots grabbing\n"; }
};

class InheritanceRobot : public Legs, public Arms
{
public:

};

class CompositionRobot
{
public:
	void Walk() { m_legs.Walk(); }
	void Grab() { m_arms.Grab(); }

private:
	Legs m_legs;
	Arms m_arms;
};