#include "NYStyleCheesePizza.h"
#include "PizzaIngredientFactory.h"
#include "Dough.h"
#include "Cheese.h"
#include "Sauce.h"
#include <iostream>

NYStyleCheesePizza::NYStyleCheesePizza(PizzaIngredientFactory* pPizzaIngredientFactory)
{
	m_name = "NY Style Sauce and Cheese Pizza";
	m_pPizzaIngredientFactory = pPizzaIngredientFactory;
}

void NYStyleCheesePizza::prepare()
{
	std::cout << "Prepareing " << m_name << std::endl;
	m_pDough = m_pPizzaIngredientFactory->createDough();
	m_pCheese = m_pPizzaIngredientFactory->createCheese();
	m_pSauce = m_pPizzaIngredientFactory->createSauce();

	std::cout << "Dough:" << m_pDough->getDescription() << std::endl;
	std::cout << "Sauce:" << m_pSauce->getDescription() << std::endl;
	std::cout << "Cheese:" << m_pCheese->getDescription() << std::endl;
}
