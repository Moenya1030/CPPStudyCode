#include <stdio.h>
#include <math.h>

int main ()
{
	float a,b,c;
	scanf("%f%f%f",&a,&b,&c);
	if ( (a+b>c) && (a+c>b) && (b+c>a))
	{
		if (a==b && a==c)
		{
			printf("等边三角形");
		}
		else if((a==b && a!=c)||(a==c && a!=b)||(b==c && b!=a))
		{
			printf("等腰三角形");
		}
		else if ((a*a+b*b==c*c && a==b)|| (a*a+c*c==b*b && a==c)||(b*b+c*c==a*a&&b==c))
		{
			printf("等腰直角三角形");
		} 
		else 
		{
			printf("普通三角形");
		}
	}
	else 
	{
		printf("非三角形");
	}
	return 0;
}
