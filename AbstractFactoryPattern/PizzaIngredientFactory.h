#pragma once

class Dough;
class Sauce;
class Cheese;
class PizzaIngredientFactory
{
public:
	PizzaIngredientFactory();
	virtual Dough* createDough() = 0;
	virtual Sauce* createSauce() = 0;
	virtual Cheese* createCheese() = 0;
};

