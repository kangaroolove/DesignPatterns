#include "CaffeineBeverage.h"
#include <iostream>

CaffeineBeverage::CaffeineBeverage()
{
}

void CaffeineBeverage::boilWater()
{
	std::cout << "Boiling water" << std::endl;
}

void CaffeineBeverage::pourInCup()
{
	std::cout << "Pouring into cup" << std::endl;
}

void CaffeineBeverage::prepareRecipe()
{
	boilWater();
	brew();
	pourInCup();
	addCondiments();
}
