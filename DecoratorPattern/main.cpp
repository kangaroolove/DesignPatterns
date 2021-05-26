
#include "Espresso.h"
#include "HouseBlend.h"
#include "Mocha.h"
#include <iostream>

int main()
{
	Beverage* pEspresso = new Espresso();
	std::cout << pEspresso->getDescription() << ", $" << pEspresso->coast() << std::endl;

	Beverage* pHouseBlend = new HouseBlend();
	pHouseBlend = new Mocha(pHouseBlend);
	pHouseBlend = new Mocha(pHouseBlend);
	std::cout << pHouseBlend->getDescription() << ", $" << pHouseBlend->coast() << std::endl;

	delete pEspresso;
	delete pHouseBlend;

	return 0;
}