#include "Pizza.h"
#include <iostream>

Pizza::Pizza()
{
}

void Pizza::prepare()
{
	std::cout << "Preparing " << m_name << std::endl;
	std::cout << "Tossing dough..." << std::endl;
	std::cout << "Adding sauce..." << std::endl;
	std::cout << "Add toppings: ";
	for (size_t i = 0;i < m_toppings.size(); ++i)
	{
		std::cout << m_toppings[i];
	}
	std::cout << std::endl;
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
