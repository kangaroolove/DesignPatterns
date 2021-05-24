#ifndef FLYWITHWING_H
#define FLYWITHWING_H

#include "FlyBehavior.h"

class FlyWithWings : public FlyBehavior
{
public:
	FlyWithWings();
	void fly() override;
};
#endif