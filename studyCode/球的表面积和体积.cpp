#include <stdio.h>

#define PI 3.14159
const double pi = 3.14159;

int main()
{
	double r;
	scanf("%lf", &r);
	printf("%.6lf\n", (4 * PI * r * r * r) / 3);
	printf("%.6lf", 4 * pi * r * r);
	return 0;
}
