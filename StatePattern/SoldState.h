#pragma once
#include "State.h"

class GumballMachine;
class SoldState : public State
{
public: 
	SoldState(GumballMachine* pGumballMachine);
	void insertQuarter() override;
	void ejectQuarter() override;
	void turnCrank() override;
	void dispense() override;
};

