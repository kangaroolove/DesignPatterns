#include "MenuItem.h"

MenuItem::MenuItem()
{
}

MenuItem::MenuItem(const std::string& name, const std::string& description, const double& price)
	: m_name(name)
	, m_description(description)
	, m_price(price)
{
}
