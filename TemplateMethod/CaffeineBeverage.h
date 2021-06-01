#pragma once
class CaffeineBeverage
{
public:
	CaffeineBeverage();
	void boilWater();
	virtual void brew() = 0;
	virtual void addCondiments()=0;
	void pourInCup();
	void prepareRecipe();
};

