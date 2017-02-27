#include<LaborkaConfig.h>
#ifdef USE_TRIGONOMETRY_DEGREE
	#include<trygonometria.h>
#else
	#define _USE_MATH_DEFINES
	#include<math.h>
#endif


int main()
{	
	double wynik;

	#ifdef USE_TRIGONOMETRY_DEGREE
		wynik = cos_degree(45.0);
	#else
		wynik = cos(M_PI/4.0);
	#endif

	return 0;
}