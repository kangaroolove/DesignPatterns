#include "DinerMenuIterator.h"
#include "MenuItem.h"

const int DinerMenuIterator::MaxSize = 2;

DinerMenuIterator::DinerMenuIterator(MenuItem* pItems)
	: m_items(pItems)
	, m_nPosition(0)
{
}

bool DinerMenuIterator::hasNext()
{
	if (m_nPosition >= MaxSize)
	{
		return false;
	}

	return true;
}

void* DinerMenuIterator::next()
{
	MenuItem* pMenuItem = &m_items[m_nPosition];
	m_nPosition++;
	return pMenuItem;
}
