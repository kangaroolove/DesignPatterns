#pragma once
#include "Pizza.h"

class PizzaIngredientFactory;
class NYStyleCheesePizza : public Pizza
{
public:
	NYStyleCheesePizza(PizzaIngredientFactory* pPizzaIngredientFactory);
	void prepare() override;
};

