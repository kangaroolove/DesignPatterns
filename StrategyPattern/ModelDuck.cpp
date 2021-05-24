#include "ModelDuck.h"
#include "FlyNoWay.h"
#include "MuteQuack.h"
#include <iostream>

ModelDuck::ModelDuck()
{
	m_pFlyBehavior = std::make_shared<FlyNoWay>();
	m_pQuackBehavior = std::make_shared<MuteQuack>();
}

void ModelDuck::display()
{
	std::cout << "I am ModelDuck\n";
}
