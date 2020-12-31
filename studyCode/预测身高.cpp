//#include <iostream>
#include <stdio.h>
//using namespace std;

int main()
{
//	double faHeight;
//	double moHeight;
//	double height;
//	char sex;
//	char run;
//	char eat;
////	cin>>sex>>faHeight>>moHeight>>run>>eat;
//	scanf("%c", &sex);
//	scanf("&lf %lf", &faHeight, &moHeight);
//	getchar();
//	scanf("%c", &run);
//	getchar();
//	scanf("%c", &eat);
	char sex;
	scanf("%c",&sex);
	int faHeight,moHeight;
	scanf("%d %d",&faHeight,&moHeight);
	char run;
	getchar();
	scanf("%c",&run);
	char eat;
	getchar();
	scanf("%c",&eat);
	double height;
	if (sex == 'M')
	{
		if (run == 'Y')
		{
			if (eat == 'Y')
			{
				height = (faHeight + moHeight) * 0.54 * 1.035;
			}
			else
			{
				height = (faHeight + moHeight) * 0.54 * 1.02;
			}
		}
		else
		{
			if (eat == 'Y')
			{
				height = (faHeight + moHeight) * 0.54 * 1.015;
			}
			else
			{
				height = (faHeight + moHeight) * 0.54;
			}
		}
	}
	else
	{
		if (run == 'Y')
		{
			if (eat == 'Y')
			{
				height = (faHeight * 0.923 + moHeight) / 2 * 1.035;
			}
			else
			{
				height = (faHeight * 0.923 + moHeight) / 2 * 1.02;
			}
		}
		else
		{
			if (eat == 'Y')
			{
				height = (faHeight * 0.923 + moHeight) / 2 * 1.015;
			}
			else
			{
				height = (faHeight * 0.923 + moHeight) / 2;
			}
		}
	}
//	cout<<height;
	printf("%.4lf", height);
	return 0;
}
