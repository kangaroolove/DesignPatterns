#include "Light.h"
#include <iostream>

Light::Light()
{
}

void Light::on()
{
	std::cout << "Light turn on"<<std::endl;
}

void Light::off()
{
	std::cout << "Light turn off" << std::endl;
}
