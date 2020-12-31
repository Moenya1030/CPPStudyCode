#include <stdio.h>

int main()
{
	int a,b,c;
	for (int i = 100; i <= 999; i++)
	{
		c = i / 100;
		b = i / 10 % 10;
		a = i % 10;
		if (c*c*c + b*b*b + a*a*a == i)
		{
			printf("%d\n", i);
		}
	} 	
	return 0;
}
