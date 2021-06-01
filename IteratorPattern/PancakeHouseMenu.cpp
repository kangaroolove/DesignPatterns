#include "PancakeHouseMenu.h"
#include "PancakeHouseMenuIterator.h"

PancakeHouseMenu::PancakeHouseMenu()
{
	m_items.push_back(new MenuItem("banane", "banane", 3.0));
	m_items.push_back(new MenuItem("bear", "bear", 5.5));
}

MenuIterator* PancakeHouseMenu::createIterator()
{
	return new PancakeHouseMenuIterator(m_items);
}
