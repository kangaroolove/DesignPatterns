#include "HomeTheaterTestDrive.h"
#include "DVD.h"
#include "Screen.h"

HomeTheaterTestDrive::HomeTheaterTestDrive(Screen* pScreen, DVD* pDVD)
	: m_pScreen(pScreen)
	, m_pDVD(pDVD)
{
}

void HomeTheaterTestDrive::watchMovie()
{
	m_pScreen->up();
	m_pDVD->on();
}

void HomeTheaterTestDrive::endMovie()
{
	m_pScreen->down();
	m_pDVD->off();
}
