#pragma once

#include <string>

class Beverage
{
public:
	Beverage();
	virtual ~Beverage();
	virtual double coast() = 0;
	std::string getDescription() { return m_description; }
protected:
	std::string m_description;
};

