#pragma once

class MenuIterator;
class Menu
{
public:
	Menu();
	virtual MenuIterator* createIterator()=0;
};

