#include "Obervable.h"
#include "Observer.h"

Obervable::Obervable()
	: m_bChanged(false)
{
}

void Obervable::addObserver(Observer* pObserver)
{
	m_observers.push_back(pObserver);
}

void Obervable::deleteObserver(Observer* pObserver)
{
	size_t i;
	for (i = 0; i < m_observers.size(); ++i)
	{
		if (m_observers[i] == pObserver)
		{
			m_observers.erase(m_observers.begin() + i);
			break;
		}
	}
}

void Obervable::notifyObservers()
{
	if (m_bChanged)
	{
		for (size_t i = 0; i < m_observers.size(); ++i)
		{
			m_observers[i]->update(this);
		}
		m_bChanged = false;
	}
}
