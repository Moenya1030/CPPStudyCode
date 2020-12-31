#include <stdio.h>
#include <math.h>

int main()
{
	double eps = 1e-5;
	int n = 1;
	double e = 1;
	double term = 1;
	while (fabs(term) >= eps)
	{
		term *= 1.0 / n;
		e += term;
		n++;
	}
	printf("%.4f %d", e, n);
	return 0;
}
