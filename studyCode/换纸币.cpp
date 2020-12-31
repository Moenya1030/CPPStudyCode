#include <stdio.h>

int main()
{
	int total = 0;
	for (int i = 1; i < 10; i++)
	{
		for (int j = 1; j < 20; j++)
		{
			for (int k = 1; k < 86; k++)
			{
				if (10 * i + j * 5 + k == 100 && i + j + k == 50)
				{
					printf("%d %d %d\n", i, j, k);
					total++;
				}
			}
		}
	} 
	printf("%d", total);
	return 0;
}
