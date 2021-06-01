#include "Coffee.h"
#include <iostream>

Coffee::Coffee()
{
}

void Coffee::brew()
{
	std::cout << "Dripping Coffee through filter" << std::endl;
}

void Coffee::addCondiments()
{
	std::cout << "Adding Sugar and Milk" << std::endl;
}
