#include "CondimentDecorator.h"

CondimentDecorator::CondimentDecorator()
	: m_pBeverage(nullptr)
{
}

CondimentDecorator::~CondimentDecorator()
{
	if (m_pBeverage)
	{
		delete m_pBeverage;
	}
}
