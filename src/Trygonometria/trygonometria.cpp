#include "trygonometria.h"
#include <math.h>

double sin_degree(double degree) {
	double radian=degree*3.14/180.0;
	return sin(radian);

}

double cos_degree(double degree) {
	double radian=degree*3.14/180.0;
	return cos(radian);
}