#pragma once

#include "CondimentDecorator.h"

class Beverage;
class Mocha : public CondimentDecorator
{
public:
	Mocha(Beverage *pBeverage);
	std::string getDescription() override;
	double coast() override;
};

