#include "Mocha.h"

Mocha::Mocha(Beverage* pBeverage)
{
	m_pBeverage = pBeverage;
}

std::string Mocha::getDescription()
{
	return m_pBeverage->getDescription() + ", Mocha";
}

double Mocha::coast()
{
	return m_pBeverage->coast() + 1.0;
}
