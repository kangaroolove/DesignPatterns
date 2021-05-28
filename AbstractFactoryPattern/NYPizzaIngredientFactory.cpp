#include "NYPizzaIngredientFactory.h"
#include "ThinCrustDough.h"
#include "MarinaraSauce.h"
#include "ReggianoCheese.h"

NYPizzaIngredientFactory::NYPizzaIngredientFactory()
{
}

Dough* NYPizzaIngredientFactory::createDough()
{
    return new ThinCrustDough();
}

Sauce* NYPizzaIngredientFactory::createSauce()
{
    return new MarinaraSauce();
}

Cheese* NYPizzaIngredientFactory::createCheese()
{
    return new ReggianoCheese();
}
