#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		if (i != n) 
			printf("%d %d\n", i * i, i * i * i);
		else
			printf("%d %d", i * i, i * i * i);
	}
	return 0;
}
