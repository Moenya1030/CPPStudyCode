#include <stdio.h>
#include <math.h>

int main()
{ 
	float rate, deposit; 
	int n, capital; 
	scanf("%f%d%d",&rate,&n,&capital); 
	deposit = rate * capital * n + capital; 
	deposit = pow(rate + 1, n) * capital; 
	printf("%f",deposit); 
	getchar();
}
