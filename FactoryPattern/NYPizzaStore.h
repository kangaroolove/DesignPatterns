#pragma once

#include "PizzaStore.h"

class Pizza;
class NYPizzaStore : public PizzaStore
{
public:
	NYPizzaStore();
	Pizza *createPizza(const std::string& pizzaName) override;
};

