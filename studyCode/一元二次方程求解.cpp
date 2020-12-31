#include<stdio.h>
#include<math.h>

void func(float a,float b,float c)
{
	double x1,x2;
	x1=(-b - sqrt(b * b - 4 * a * c)) / (2 * a);
	x2=(-b + sqrt(b * b - 4 * a * c)) / (2 * a);
	printf("Yes\n");
	printf("%.6f, %.6f", x1, x2);
}

int main()
{
	float a;
	float b;
	float c;
	double sum;
	scanf("%f %f %f", &a, &b, &c);
    sum= b * b - 4 * a * c;
    if (sum >= 0)
		func(a,b,c);
	else 
		printf("NO");
	return 0;
}
