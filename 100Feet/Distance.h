#pragma once
class Distance
{private:
	int feet;
	double inches;

public:
	Distance();
	~Distance();
	void AverageDistance(Distance* dist, int number_);
	void Distance::getDistance();

};

