#pragma once

class DVD;
class Screen;
class HomeTheaterTestDrive
{
public:
	HomeTheaterTestDrive(Screen *pScreen, DVD *pDVD);
	void watchMovie();
	void endMovie();
private:
	DVD *m_pDVD;
	Screen *m_pScreen;
};

