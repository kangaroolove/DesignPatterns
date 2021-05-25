#include "WeatherData.h"
#include "Observer.h"

WeatherData::WeatherData()
	: m_temperature(0)
	, m_humidity(0)
	, m_pressure(0)
{
}

void WeatherData::registerObserver(Observer* pObserver)
{
	m_observers.push_back(pObserver);
}

void WeatherData::removeObserver(Observer* pObserver)
{
	for (size_t i = 0; i < m_observers.size(); ++i)
	{
		if (pObserver == m_observers[i])
		{
			m_observers.erase(m_observers.begin() + i);
			break;
		}
	}
}

void WeatherData::notifyObserver()
{
	for (size_t i = 0; i < m_observers.size(); ++i)
	{
		m_observers[i]->update(m_temperature, m_humidity, m_pressure);
	}
}

void WeatherData::measurementsChanged()
{
	notifyObserver();
}

void WeatherData::setMeasurements(const float& temperature, const float& humidity, const float& pressure)
{
	this->m_temperature = temperature;
	this->m_humidity = humidity;
	this->m_pressure = pressure;
	measurementsChanged();
}
