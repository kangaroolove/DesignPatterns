#include "NYPizzaStore.h"
#include "NYStyleCheesePizza.h"
#include "NYPizzaIngredientFactory.h"

NYPizzaStore::NYPizzaStore()
{

}

Pizza* NYPizzaStore::createPizza(const std::string& pizzaName)
{
	Pizza* pPizza = nullptr;
	if (pizzaName == "Cheese")
	{
		pPizza = new NYStyleCheesePizza(new NYPizzaIngredientFactory());
	}
	
	return pPizza;
}
