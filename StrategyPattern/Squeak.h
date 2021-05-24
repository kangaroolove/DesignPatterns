#ifndef SQUEAK_H
#define SQUEAK_H

#include "QuackBehavior.h"
class Squeak : public QuackBehavior
{
public:
	Squeak();
	void quack() override;
};
#endif