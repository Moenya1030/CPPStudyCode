#include <stdio.h>
#include <math.h>

int main()
{
	int s = 1;
	float n = 1;
	float t = 1;
	float pi = 0;
	do
	{
		pi += t;
		n += 2;
		s = -s;
		t = s / n;
	}while(fabs(t) > 1e-4);
	pi*=4;
	printf("%.4f",pi);
	return 0;
}
