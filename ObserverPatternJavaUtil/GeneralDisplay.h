#pragma once

#include "Observer.h"

class Obervable;
class GeneralDisplay : public Observer
{
public:
	GeneralDisplay(Obervable*pObervable);
	void update(Obervable* pObervable) override;
private:
	void display();
	Obervable *m_pObservable;
	float m_temperature;
	float m_humidity;
};

