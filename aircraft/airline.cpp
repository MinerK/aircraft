#include "airline.h"

airline::airline() : aircraft()
{
	seats = 0;
}

airline::airline(double q, double w, double e, int r, int t) : aircraft(q, w, e, r)
{
	seats = t;
}

std::string airline::info()
{
	using namespace std;
	string p = "Fighter: cargo capacity: " + to_string(cargo_capacity) +
		"; Weight: " + to_string(weight) +
		"; Max speed: " + to_string(max_speed) +
		"; Crew: " + to_string(crew) +
		"; Seats: " + to_string(seats) + ";";
	return p;
}