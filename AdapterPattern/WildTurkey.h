#pragma once
#include "Turkey.h"
class WildTurkey : public Turkey
{
public:
	WildTurkey();
	void gobble() override;
	void fly() override;
};

