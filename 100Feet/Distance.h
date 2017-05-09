#pragma once
class Distance
{private:
	int feet;
	double inches;

public:
	Distance();
	~Distance();
	double AverageDistance(Distance dist);
	void Distance::addDistance();

};

