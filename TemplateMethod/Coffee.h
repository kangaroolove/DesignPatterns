#pragma once
#include "CaffeineBeverage.h"
class Coffee : public CaffeineBeverage
{
public:
	Coffee();
	void brew() override;
	void addCondiments() override;
};

