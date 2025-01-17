#include "Subject.h"
#include "Obesrver.h"
#include "Unit.h"

void Subject::Notify(Unit* _unit, std::string _event)
{
	for (int i = 0; i < m_observers.size(); i++)
	{
		m_observers[i]->OnNotify(_unit, _event);
	}
}

void Subject::AddObserver(Observer* _obs)
{
	m_observers.push_back(_obs);
}

void Subject::RemoveObserver(Observer* _obs)
{
	auto pos = std::find(m_observers.begin(), m_observers.end(), _obs);
	m_observers.erase(pos);
}