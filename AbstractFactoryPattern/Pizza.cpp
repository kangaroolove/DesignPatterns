#include "Pizza.h"
#include <iostream>

Pizza::Pizza()
{
}

void Pizza::bake()
{
	std::cout << "Bake for 25 minutes at 350"<<std::endl;
}

void Pizza::cut()
{
	std::cout << "Cutting the pizza into diagonal slices" << std::endl;
}

void Pizza::box()
{
	std::cout << "Place pizza in official PizzaStore box" << std::endl;
}
