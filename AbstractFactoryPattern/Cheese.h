#pragma once

#include <iostream>

class Cheese
{
public:
	Cheese();
	virtual std::string getDescription() = 0;
};

