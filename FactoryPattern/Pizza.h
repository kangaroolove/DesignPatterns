#pragma once

#include <string>
#include <vector>

class Pizza
{
public:
	Pizza();
	virtual void prepare();
	virtual void bake();
	virtual void cut();
	virtual void box();
protected:
	std::string m_name;
	std::string m_dough;
	std::string m_sauce;
	std::vector<std::string> m_toppings;
};

