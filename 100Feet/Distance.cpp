#include "Distance.h"
#include <iostream>



Distance::Distance()
{
}


Distance::~Distance()
{
}

void Distance::AverageDistance(Distance* dist, int number_)
{
	Distance temp;
	temp.inches = 0;

	for (int i = 0; i < number_; i++)
	{
		temp.inches = dist[i].inches + (dist[i].feet * 12) + temp.inches;
	}

	std::cout << "Total: " << temp.inches << std::endl;
	std::cout << "Divider: " << number_ << std::endl;
	std::cout << "Average amount: " << temp.inches / number_ << std::endl;

}
void Distance::getDistance()
{
	std::cout << "please provide feet: ";
	std::cin >> feet;
	std::cout << "please provide inches: ";
	std::cin >> inches;
}
