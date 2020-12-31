#include <stdio.h>

int main()
{
	int total0 = 3000000;
	double total1 = 0;
	double temp = 0.01;
	for (int i = 0; i < 30; i++)
	{
		total1 += temp;
		temp *= 2;
	}
	printf("%lf\n%d", total1, total0);
	return 0;
} 

