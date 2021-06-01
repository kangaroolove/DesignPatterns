#pragma once

#include "Iterator.h"
#include "MenuItem.h"
#include <vector>

class PancakeHouseMenuIterator : public MenuIterator
{
public:
	PancakeHouseMenuIterator(const std::vector<MenuItem *> &items);
	bool hasNext() override;
	void* next() override;
private:
	std::vector<MenuItem*> m_items;
	std::vector<MenuItem*>::iterator m_iterator;
};

