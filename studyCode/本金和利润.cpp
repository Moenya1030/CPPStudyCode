#include <stdio.h>
#include <math.h>

int main()
{
	double rate;
	int n;
	double money;
	scanf("%lf %d %lf", &rate, &n, &money);
	double result =  money * rate * n;
	printf("%lf", money + result);
	return 0;
}
