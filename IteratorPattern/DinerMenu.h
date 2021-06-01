#pragma once

#include "Menu.h"
#include "MenuItem.h"

class MenuItem;
class DinerMenu : public Menu
{
public:
	DinerMenu();
	MenuIterator* createIterator() override;
private:
	MenuItem m_items[2];
};

