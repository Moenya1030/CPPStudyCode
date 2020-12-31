#include <stdio.h>

int main()
{
	double t;
	double h;
	double w;
	scanf("%lf %lf", &h, &w); 
	t = w / (h * h);
	if (t < 18)
		printf("underweight");
	else if (18 <= t && t < 25)
		printf("normal");
	else if (25 <= t && t < 27)
		printf("overweight");
	else if (t >= 27)
		printf("obese");
	return 0;
}
