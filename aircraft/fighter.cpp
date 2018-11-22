#include "fighter.h"

fighter::fighter() : aircraft()
{
	caliber = 0;
}

fighter::fighter(double q, double w, double e, int r, double t) : aircraft(q, w, e, r)
{
	caliber = t;
}

std::string fighter::info()
{
	using namespace std;
	string p = "Fighter: cargo capacity: " + to_string(cargo_capacity) +
		"; Weight: " + to_string(weight) +
		"; Max speed: " + to_string(max_speed) +
		"; Crew: " + to_string(crew) +
		"; Caliber: " + to_string(caliber) +";";
	return p;
}