#include "HomeTheaterTestDrive.h"
#include "DVD.h"
#include "Screen.h"
#include <memory>
using namespace std;

int main()
{
	shared_ptr<DVD> pDVD = make_shared<DVD>();
	shared_ptr<Screen> pScreen = make_shared<Screen>();

	HomeTheaterTestDrive homeTheaterDrive(pScreen.get(), pDVD.get());
	homeTheaterDrive.watchMovie();
	homeTheaterDrive.endMovie();

	return 0;
}