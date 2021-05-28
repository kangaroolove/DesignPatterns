#pragma once

#include "PizzaIngredientFactory.h"

class NYPizzaIngredientFactory : public PizzaIngredientFactory
{
public:
	NYPizzaIngredientFactory();
	Dough* createDough() override;
	Sauce* createSauce() override;
	Cheese* createCheese() override;
};

