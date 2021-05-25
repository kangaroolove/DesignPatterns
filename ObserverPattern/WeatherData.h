#pragma once

#include "Subject.h"
#include <vector>

class Observer;
class WeatherData : public Subject
{
public:
	WeatherData();
	void registerObserver(Observer* pObserver) override;
	void removeObserver(Observer* pObserver) override;
	void notifyObserver() override;
	void measurementsChanged();
	void setMeasurements(const float& temperature, const float& humidity, const float& pressure);
private:
	std::vector<Observer*> m_observers;
	float m_temperature;
	float m_humidity;
	float m_pressure;
};

