#include "NYPizzaStore.h"
#include <memory>
#include <iostream>

int main()
{
	std::shared_ptr<PizzaStore> pNYPizzaStore = std::make_shared<NYPizzaStore>();
	pNYPizzaStore->orderPizza("Cheese");

	return 0;
}