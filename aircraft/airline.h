#pragma once
#include "aircraft.h"
class airline :	public aircraft
{
public:
	airline();
	std::string info();
	airline(double, double, double, int, int);
private:
	int seats;
};

