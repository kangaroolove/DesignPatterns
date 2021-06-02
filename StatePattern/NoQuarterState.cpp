#include "NoQuarterState.h"
#include "GumballMachine.h"
#include <iostream>
using namespace std;

NoQuarterState::NoQuarterState(GumballMachine* pGumballMachine)
{
	m_pGumballMachine = pGumballMachine;
}

void NoQuarterState::insertQuarter()
{
	cout << "You inserted a quarter" << endl;
	m_pGumballMachine->setState(m_pGumballMachine->getSoldState());
}

void NoQuarterState::ejectQuarter()
{
	cout << "You have not inserted a quarter" << endl;
}

void NoQuarterState::turnCrank()
{
	cout << "You turned, but there is no quarter" << endl;
}

void NoQuarterState::dispense()
{
	cout << "You need to pay first" << endl;
}
