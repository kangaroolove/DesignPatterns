#include "DinerMenu.h"
#include "DinerMenuIterator.h"
#include "MenuItem.h"

DinerMenu::DinerMenu()
{
	m_items[0] = MenuItem("egg", "egg", 1.0);
	m_items[1] = MenuItem("apple", "apple", 2.0);
}

MenuIterator* DinerMenu::createIterator()
{
	return new DinerMenuIterator(m_items);
}
