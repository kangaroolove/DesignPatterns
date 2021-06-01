#include "PancakeHouseMenuIterator.h"

PancakeHouseMenuIterator::PancakeHouseMenuIterator(const std::vector<MenuItem*>& items)
    : m_items(items)
{
    m_iterator = m_items.begin();
}

bool PancakeHouseMenuIterator::hasNext()
{
    return m_iterator != m_items.end();
}

void* PancakeHouseMenuIterator::next()
{
    return *m_iterator++;
}
