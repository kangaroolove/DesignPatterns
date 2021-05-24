#include "WeatherData.h"

WeatherData::WeatherData()
	: m_temperature(0)
	, m_humidity(0)
	, m_pressure(0)
{
}

void WeatherData::setMeasurements(const float& temperature, const float& humidity, const float& pressure)
{
	this->m_temperature = temperature;
	this->m_humidity = humidity;
	this->m_pressure = pressure;
	measurementsChanged();
}

void WeatherData::measurementsChanged()
{
	setChanged();
	notifyObservers();
}
