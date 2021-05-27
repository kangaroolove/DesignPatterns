#pragma once
#include "Pizza.h"
class ChicagoStyleCheesePizza : public Pizza
{
public:
	ChicagoStyleCheesePizza();
	void cut() override;
};

