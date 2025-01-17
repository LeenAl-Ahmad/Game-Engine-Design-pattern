#include "Physics.h"
#include "Unit.h"

Physics::Physics()
{
	m_falling = new Subject();
}

Physics::~Physics()
{
	delete m_falling;
}

void Physics::Update(Unit* _un)
{
	if (_un->GetLastY() > _un->GetY())
	{
		m_falling->Notify(_un, "UnitFalling");
	}
}