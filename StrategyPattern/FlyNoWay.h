#ifndef FLYNOWAY_H
#define FLYNOWAY_H

#include "FlyBehavior.h"

class FlyNoWay : public FlyBehavior
{
public:
	FlyNoWay();
	void fly() override;
};
#endif