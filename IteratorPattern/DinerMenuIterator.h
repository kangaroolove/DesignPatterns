#pragma once

#include "Iterator.h"

class MenuItem;
class DinerMenuIterator : public MenuIterator
{
public:
	DinerMenuIterator(MenuItem *pItems);
	bool hasNext() override;
	void* next() override;
private:
	MenuItem* m_items;
	int m_nPosition;
	static const int MaxSize;
};

