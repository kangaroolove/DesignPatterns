#include "SoldState.h"
#include <GumballMachine.h>
#include <iostream>
using namespace std;

SoldState::SoldState(GumballMachine* pGumballMachine)
{
	m_pGumballMachine = pGumballMachine;
}

void SoldState::insertQuarter()
{
	cout << "Please wait, we are already giving you a gumball" << endl;
}

void SoldState::ejectQuarter()
{
	cout << "Sorry, You already turned the crank" << endl;
}

void SoldState::turnCrank()
{
	cout << "Turning twice does not get you another gumball" << endl;
	m_pGumballMachine->setState(m_pGumballMachine->getNoQuarterState());
}

void SoldState::dispense()
{
	cout << "dispense" << endl;
}
