#include <stdio.h>

int main()
{
	double total = 0;
	double temp = 1;
	for (int i = 0; i < 64; i++)
	{
		total += temp;
		temp *= 2;
	}
	printf("%.0lf %lf", total, total / 1.42e8); 
	return 0;
}
