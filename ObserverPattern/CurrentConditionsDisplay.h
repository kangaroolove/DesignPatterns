#pragma once

#include "Observer.h"

class Subject;
class CurrentConditionsDisplay : public Observer
{
public:
	CurrentConditionsDisplay(Subject* pWeatherData);
	void update(const float& temperature, const float& humidity, const float& pressure) override;
private:
	void display();
	float m_temperature;
	float m_humidity;
	Subject* m_pWeatherData;
};

