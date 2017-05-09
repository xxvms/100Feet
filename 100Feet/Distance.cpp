#include "Distance.h"
#include <iostream>



Distance::Distance()
{
}


Distance::~Distance()
{
}

double Distance::AverageDistance(Distance dist)
{
	double average = dist.feet * 12 + dist.inches;
	average += average;

	return average;
}
void Distance::getDistance()
{
	std::cout << "please provide feet: ";
	std::cin >> feet;
	std::cout << "please provide inches: ";
	std::cin >> inches;
}
