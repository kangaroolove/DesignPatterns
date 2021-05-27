#include "ChicagoPizzaStore.h"
#include "NYPizzaStore.h"
#include <memory>
#include <iostream>

int main()
{
	std::shared_ptr<PizzaStore> pChicagoPizzaStore = std::make_shared<ChicagoPizzaStore>();
	std::shared_ptr<PizzaStore> pNYPizzaStore = std::make_shared<NYPizzaStore>();

	pChicagoPizzaStore->orderPizza("Cheese");
	std::cout << std::endl;
	pNYPizzaStore->orderPizza("Cheese");

	return 0;
}