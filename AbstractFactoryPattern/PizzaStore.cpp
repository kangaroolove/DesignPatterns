#include "PizzaStore.h"
#include "Pizza.h"
#include <memory>

PizzaStore::PizzaStore()
{
}

void PizzaStore::orderPizza(const std::string& pizzaName)
{
	std::shared_ptr<Pizza> pPizza;
	pPizza.reset(createPizza(pizzaName));

	pPizza->prepare();
	pPizza->bake();
	pPizza->cut();
	pPizza->box();
}
