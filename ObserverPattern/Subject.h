#pragma once

class Observer;
class Subject
{
public:
	Subject();
	virtual void registerObserver(Observer* pObserver) = 0;
	virtual void removeObserver(Observer* pObserver) = 0;
	virtual void notifyObserver() = 0;
};

