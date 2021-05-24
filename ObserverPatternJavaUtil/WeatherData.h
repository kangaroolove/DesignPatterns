#pragma once

#include "Obervable.h"
class WeatherData : public Obervable
{
public:
	WeatherData();
	void setMeasurements(const float& temperature, const float& humidity, const float& pressure);
	float getTemperature() { return m_temperature; }
	float gethumidity() { return m_humidity; }
	float getPressure() { return m_pressure; }
private:
	void measurementsChanged();
	float m_temperature;
	float m_humidity;
	float m_pressure;
};

