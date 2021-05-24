#pragma once

class Obervable;
class Observer
{
public:
	Observer();
	virtual void update(Obervable *pObervable) = 0;
};

