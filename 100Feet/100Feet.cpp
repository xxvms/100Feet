// 100Feet.cpp : Defines the entry point for the console application.
#include <iostream>
#include "Distance.h"

int main()
{
	Distance dist[100];

	std::cout << "How many numbers do you want to enter max 100?" << std::endl;
	int numbers = 0;
	std::cin >> numbers;

	//call to provide values
	
	for (int i = 0; i < numbers; i++)
	{
		dist[i].getDistance();
	}
	
	//call to get values from an array
	
	dist[0].AverageDistance(dist, numbers);
	
	//std::cout << "Average value is: " << std::endl;

	system("pause");
    return 0;
}

