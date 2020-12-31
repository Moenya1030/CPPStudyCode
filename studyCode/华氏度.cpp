#include <stdio.h>

int main()
{
	int F;
	double C;
	for (F = 0 ; F <= 300; F += 10)
	{	
		C = (double)5/9 * (F - 32);
		printf("%d %.2lf\n", F, C);
	} 
	return 0;
} 

