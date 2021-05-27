#pragma once

#include <string>

class Pizza;
class PizzaStore
{
public:
	PizzaStore();
	void orderPizza(const std::string& pizzaName);
	virtual Pizza* createPizza(const std::string& pizzaName)=0;
};

