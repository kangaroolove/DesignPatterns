#pragma once
#include "Cheese.h"
class ReggianoCheese : public Cheese
{
public:
	ReggianoCheese();
	std::string getDescription() override;
};

