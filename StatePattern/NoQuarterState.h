#pragma once
#include "State.h"

class GumballMachine;
class NoQuarterState : public State
{
public:
	NoQuarterState(GumballMachine *pGumballMachine);
	void insertQuarter() override;
	void ejectQuarter() override;
	void turnCrank() override;
	void dispense() override;
};

