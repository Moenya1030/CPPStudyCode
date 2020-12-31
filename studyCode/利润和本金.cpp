#include <stdio.h>
#include <math.h>
int main()
{ 
	float rate, deposit; 
	int n;
	float capital; 
	scanf("%f %d %f",&rate, &n, &capital); 
	deposit = pow(rate + 1, n) * capital; 
	printf("%.6f",deposit); 
	return 0;
}
