#include "GeneralDisplay.h"
#include "Obervable.h"
#include "WeatherData.h"
#include <iostream>

GeneralDisplay::GeneralDisplay(Obervable* pObervable)
	: m_temperature(0)
	, m_humidity(0)
	, m_pObservable(pObervable)
{
	pObervable->addObserver(this);
}

void GeneralDisplay::update(Obervable* pObervable)
{
	WeatherData* pWeathreData = static_cast<WeatherData*>(pObervable);
	if (pWeathreData)
	{
		this->m_temperature = pWeathreData->getTemperature();
		this->m_humidity = pWeathreData->gethumidity();
		display();
	}
}

void GeneralDisplay::display()
{
	std::cout << "Current conditions: " << m_temperature << std::endl;
	std::cout << "Humidity: " << m_humidity << std::endl;
}
