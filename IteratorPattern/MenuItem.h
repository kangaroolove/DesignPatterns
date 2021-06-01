#pragma once

#include <string>

class MenuItem
{
public:
	MenuItem();
	MenuItem(const std::string &name, const std::string &description, const double &price);
	std::string getName() { return m_name; }
	std::string getDescription() { return m_description; }
	double getPrice() { return m_price; }
private:
	std::string m_name;
	std::string m_description;
	double m_price;
};

