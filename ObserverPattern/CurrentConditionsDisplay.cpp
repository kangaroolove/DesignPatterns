#include "CurrentConditionsDisplay.h"
#include "Subject.h"
#include <iostream>


CurrentConditionsDisplay::CurrentConditionsDisplay(Subject* pWeatherData)
	: m_temperature(0)
	, m_humidity(0)
	, m_pWeatherData(pWeatherData)
{
	m_pWeatherData->registerObserver(this);
}

void CurrentConditionsDisplay::update(const float& temperature, const float& humidity, const float& pressure)
{
	this->m_temperature = temperature;
	this->m_humidity = humidity;
	display();
}

void CurrentConditionsDisplay::display()
{
	std::cout << "Current conditions: " << m_temperature << std::endl;
	std::cout << "Humidity: " << m_humidity << std::endl;
}
