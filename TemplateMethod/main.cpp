#include "Coffee.h"
#include "Tea.h"
#include <memory>
#include <iostream>
using namespace std;

int main()
{
	shared_ptr<CaffeineBeverage> pCoffee = make_shared<Coffee>();
	shared_ptr<CaffeineBeverage> pTea = make_shared<Tea>();

	pCoffee->prepareRecipe();
	cout << endl;

	pTea->prepareRecipe();

	return 0;
}