#pragma once

#include "Beverage.h"

class CondimentDecorator : public Beverage
{
public:
	CondimentDecorator();
	virtual ~CondimentDecorator();
	virtual std::string getDescription() = 0;
protected:
	Beverage* m_pBeverage;
};

