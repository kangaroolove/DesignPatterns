#pragma once

#include <string>
#include <vector>

class Dough;
class Sauce;
class Cheese;
class PizzaIngredientFactory;
class Pizza
{
public:
	Pizza();
	virtual void prepare()=0;
	virtual void bake();
	virtual void cut();
	virtual void box();
protected:
	std::string m_name;
	Dough* m_pDough;
	Sauce* m_pSauce;
	Cheese* m_pCheese;
	PizzaIngredientFactory* m_pPizzaIngredientFactory;
};

