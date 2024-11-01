#include <math.h>
#include "dod.h"
#include "sum.h"
#include "var.h"
// eps = 0.0000001
using namespace nsDod;
using namespace nsVar;
void nsSum::sum() {
	n = 0;
	a = (x - 1) / x;
	s = a;
	do {
		n++;
		dod();
		s += a;
	} while (fabs(a) > e);
}