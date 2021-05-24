#ifndef MALLARDDUCK_H
#define MALLARDDUCK_H

#include "Duck.h"
class MallardDuck : public Duck
{
public:
	MallardDuck();
	void display() override;
};
#endif