#include "fighter.h"
#include "airline.h"
#include "list.h"

using namespace std;

void main()
{
	List<aircraft*> airport;
	fighter f = fighter(32, 43, 123, 2, 20);
	airline a = airline(43, 43, 231, 4, 200);
	airport.add(&f);
	airport.add(&a);

}