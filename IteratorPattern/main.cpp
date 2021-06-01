#include "Waitress.h"
#include "PancakeHouseMenu.h"
#include "DinerMenu.h"
#include <memory>
using namespace std;

int main()
{
	shared_ptr<DinerMenu> pDinerMenu = make_shared<DinerMenu>();
	shared_ptr<PancakeHouseMenu> pPancakeHouseMenu = make_shared<PancakeHouseMenu>();

	Waitress waitress(pDinerMenu.get(), pPancakeHouseMenu.get());
	waitress.printMenu();

	return 0;
}