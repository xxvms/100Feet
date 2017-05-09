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
	int feetTemp = 0;
	double average = 0;

	while (dist.inches >= 12)
	{
		dist.inches = dist.inches - 12;
		feetTemp++;
	}

	dist.feet = dist.feet + feetTemp;
	
	average = average + dist.feet + dist.inches;

	return average;
}
void Distance::addDistance()
{
	std::cout << "please provide feet: ";
	std::cin >> feet;
	std::cout << "please provide inches: ";
	std::cin >> inches;
}
