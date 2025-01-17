// Week1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Unit.h"
#include "Physics.h"
#include "Achievements.h"

int main()
{
    Achievements* ach = new Achievements();
    Physics* Phy = new Physics();
    Unit* unit = new Unit();

    Phy->GetEventFalling()->AddObserver(ach);
    unit->MoveTo(0, 1);
    Phy->Update(unit);
    unit->MoveTo(0, 0);
    Phy->Update(unit);
    unit->MoveTo(0, -1);
    Phy->Update(unit);

    delete unit;
    delete Phy;
    delete ach;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
