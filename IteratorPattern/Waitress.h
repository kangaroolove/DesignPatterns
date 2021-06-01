#pragma once

class PancakeHouseMenu;
class DinerMenu;
class MenuIterator;
class Waitress
{
public:
	Waitress(DinerMenu *pDinerMenu, PancakeHouseMenu *pPancakeHouseMenu);
	void printMenu();
private:
	void printMenu(MenuIterator* pItertor);
	DinerMenu* m_pDinerMenu;
	PancakeHouseMenu *m_pPancakeHouseMenu;
};

