#pragma once

class GumballMachine;
class State
{
public:
	State();
	virtual void insertQuarter() = 0;
	virtual void ejectQuarter() = 0;
	virtual void turnCrank() = 0;
	virtual void dispense() = 0;
protected:
	GumballMachine* m_pGumballMachine;
};

