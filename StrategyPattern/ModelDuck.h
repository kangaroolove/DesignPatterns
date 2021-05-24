#ifndef MODELDUCK_H
#define MODELDUCK_H

#include "Duck.h"
class ModelDuck : public Duck
{
public:
	ModelDuck();
	void display() override;
};
#endif