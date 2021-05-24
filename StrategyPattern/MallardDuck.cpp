#include "MallardDuck.h"
#include "FlyWithWings.h"
#include "Squeak.h"
#include <iostream>

MallardDuck::MallardDuck()
{
	m_pFlyBehavior = std::make_shared<FlyWithWings>();
	m_pQuackBehavior = std::make_shared<Squeak>();
}

void MallardDuck::display()
{
	std::cout << "I am MallrdDuck\n";
}
