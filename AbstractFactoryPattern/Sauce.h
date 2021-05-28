#pragma once

#include <iostream>

class Sauce
{
public:
	Sauce();
	virtual std::string getDescription() = 0;
};

