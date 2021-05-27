#pragma once
#include "PizzaStore.h"
class ChicagoPizzaStore : public PizzaStore
{
public:
	ChicagoPizzaStore();
	Pizza* createPizza(const std::string& pizzaName) override;
};

