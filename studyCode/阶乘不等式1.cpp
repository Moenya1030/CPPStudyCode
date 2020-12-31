#include <stdio.h>

int fac(int n)
{
	if (n >= 1)
		return n*fac(n-1);
	else 
		return 1;
}

int main()
{
	int n;
	scanf("%d", &n);
	int num = 0;
	for (int i = 1; i < 10; i++)
	{
		num += fac(i);	
		if (num > n)
		{
			printf("%d", i - 1);
			break;
		}	
	}
	return 0;
} 
