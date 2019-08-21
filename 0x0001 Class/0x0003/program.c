#include <stdio.h>

extern double sumarDos(double, double);

int main()
{
	double a = 4.3;
	double b = 19.5;
	printf("Hacemos %f + %f = %f\n", a, b, sumarDos(a, b));
	return 0;
}
