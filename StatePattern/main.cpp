#include "GumballMachine.h"
#include <iostream>
using namespace std;

int main()
{
	GumballMachine gumballMachine;
	gumballMachine.insertQuarter();
	gumballMachine.ejectQuarter();
	gumballMachine.turnCrank();
	gumballMachine.dispense();

	cout << endl;

	gumballMachine.insertQuarter();
	gumballMachine.ejectQuarter();
	gumballMachine.turnCrank();
	gumballMachine.dispense();

	return 0;
}