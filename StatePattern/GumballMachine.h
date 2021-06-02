#pragma once
#include <memory>

class State;
class GumballMachine
{
public:
	GumballMachine();
	void insertQuarter();
	void ejectQuarter();
	void turnCrank();
	void dispense();
	void setState(State* pState) { m_pCurrentState = pState; }
	State* getNoQuarterState() { return m_pNoQuarterState.get(); }
	State* getSoldState() { return m_pSoldState.get(); }
private:
	std::shared_ptr<State> m_pNoQuarterState;
	std::shared_ptr<State> m_pSoldState;
	State* m_pCurrentState;
};

