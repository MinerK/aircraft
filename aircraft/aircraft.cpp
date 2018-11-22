#include "aircraft.h"



aircraft::aircraft()
{
	cargo_capacity = 0;
	weight  =0;
	max_speed = 0;
	crew = 0;
}

aircraft::aircraft(double q, double w, double e, int r)
{
	cargo_capacity = q;
	weight = w;
	max_speed = e;
	crew = r;
}

