#pragma once
#include "Menu.h"
#include <vector>

class MenuItem;
class PancakeHouseMenu : public Menu
{
public:
	PancakeHouseMenu();
	MenuIterator* createIterator() override;
private:
	std::vector<MenuItem*> m_items;
};

