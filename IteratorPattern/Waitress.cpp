#include "Waitress.h"
#include "Iterator.h"
#include "MenuItem.h"
#include "PancakeHouseMenuIterator.h"
#include "PancakeHouseMenu.h"
#include "DinerMenu.h"
#include <memory>
#include <iostream>
using namespace std;

Waitress::Waitress(DinerMenu* pDinerMenu, PancakeHouseMenu* pPancakeHouseMenu)
	: m_pDinerMenu(pDinerMenu)
	, m_pPancakeHouseMenu(pPancakeHouseMenu)
{
}

void Waitress::printMenu(MenuIterator* pItertor)
{
	while (pItertor->hasNext())
	{
		MenuItem* pMenuItem = static_cast<MenuItem *>(pItertor->next());
		cout << "name:"<<pMenuItem->getName() << endl;
		cout << "description:"<<pMenuItem->getDescription() << endl;
		cout << "price:"<<pMenuItem->getPrice() << endl;
	}
}

void Waitress::printMenu()
{
	shared_ptr<MenuIterator> pPancakeItertor;
	shared_ptr<MenuIterator> pDinerItertor;

	pPancakeItertor.reset(m_pPancakeHouseMenu->createIterator());
	pDinerItertor.reset(m_pDinerMenu->createIterator());

	printMenu(pPancakeItertor.get());
	cout << endl;
	printMenu(pDinerItertor.get());
}
