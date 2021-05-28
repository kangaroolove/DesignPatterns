#pragma once

#include "Dough.h"
#include <string>

class ThinCrustDough : public Dough
{
public:
	ThinCrustDough();
	std::string getDescription() override;
};

