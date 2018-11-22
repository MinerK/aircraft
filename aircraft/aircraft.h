#pragma once
#include <string>

class aircraft
{
public:
	double cargo_capacity;
	double weight;
	double max_speed;
	int crew;

	aircraft();
	aircraft(double, double, double, int);
	virtual std::string info() = 0;
};

