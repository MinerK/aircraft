#pragma once
#include "aircraft.h"

class fighter : public aircraft
{
public:
	fighter();
	std::string info();
	fighter(double, double, double, int, double);
private:
	double caliber;
};