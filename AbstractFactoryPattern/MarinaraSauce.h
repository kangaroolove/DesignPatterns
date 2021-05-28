#pragma once
#include "Sauce.h"

class MarinaraSauce : public Sauce
{
public:
	MarinaraSauce();
	std::string getDescription() override;
};

