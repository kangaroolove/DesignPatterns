#include "ChicagoStyleCheesePizza.h"
#include <iostream>

ChicagoStyleCheesePizza::ChicagoStyleCheesePizza()
{
	m_name = "Chicago Style Deep Dish Cheese Pizza";
	m_dough = "Extra Thick Crust Dough";
	m_sauce = "Plum Tomato Sauce";

	m_toppings.push_back("Shredded Mozzarella Cheese");
}

void ChicagoStyleCheesePizza::cut()
{
	std::cout << "Cutting the pizza into square slices"<<std::endl;
}
