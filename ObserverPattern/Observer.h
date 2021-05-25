#pragma once

class Observer
{
public:
	Observer();
	virtual void update(const float& temperature, const float& humidity, const float& pressure) = 0;
};

