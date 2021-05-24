#pragma once

#include <vector>

class Observer;
class Obervable
{
public:
	Obervable();
	void addObserver(Observer *pObserver);
	void deleteObserver(Observer* pObserver);
	void notifyObservers();
	void setChanged() { m_bChanged = true; }
protected:
	std::vector<Observer*> m_observers;
	bool m_bChanged;
};

