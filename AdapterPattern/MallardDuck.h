#pragma once
#include "Duck.h"
class MallardDuck : public Duck
{
public:
	MallardDuck();
	void quack() override;
	void fly() override;
};

