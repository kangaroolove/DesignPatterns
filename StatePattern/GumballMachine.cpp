#include "GumballMachine.h"
#include "State.h"
#include "NoQuarterState.h"
#include "SoldState.h"

GumballMachine::GumballMachine()
	: m_pNoQuarterState(std::make_shared<NoQuarterState>(this))
	, m_pSoldState(std::make_shared<SoldState>(this))
	, m_pCurrentState(getNoQuarterState())
{
}

void GumballMachine::insertQuarter()
{
	m_pCurrentState->insertQuarter();
}

void GumballMachine::ejectQuarter()
{
	m_pCurrentState->ejectQuarter();
}

void GumballMachine::turnCrank()
{
	m_pCurrentState->turnCrank();
}

void GumballMachine::dispense()
{
	m_pCurrentState->dispense();
}
