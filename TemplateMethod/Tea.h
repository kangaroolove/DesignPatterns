#pragma once

#include "CaffeineBeverage.h"

class Tea : public CaffeineBeverage
{
public:
	Tea();
	void brew() override;
	void addCondiments() override;
};

