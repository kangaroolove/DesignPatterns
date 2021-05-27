#include "ChicagoPizzaStore.h"
#include "ChicagoStyleCheesePizza.h"

ChicagoPizzaStore::ChicagoPizzaStore()
{
    
}

Pizza* ChicagoPizzaStore::createPizza(const std::string& pizzaName)
{
    Pizza* pPizza = nullptr;
    if (pizzaName == "Cheese")
    {
        pPizza = new ChicagoStyleCheesePizza();
    }

    return pPizza;
}
