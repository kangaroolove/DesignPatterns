#include "Tea.h"
#include <iostream>

Tea::Tea()
{
}

void Tea::brew()
{
	std::cout << "Steeping the tea" << std::endl;
}

void Tea::addCondiments()
{
	std::cout << "Add Lemon" << std::endl;
}
