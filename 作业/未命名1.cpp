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
			printf("�ȱ�������");
		}
		else if((a==b && a!=c)||(a==c && a!=b)||(b==c && b!=a))
		{
			printf("����������");
		}
		else if ((a*a+b*b==c*c && a==b)|| (a*a+c*c==b*b && a==c)||(b*b+c*c==a*a&&b==c))
		{
			printf("����ֱ��������");
		} 
		else 
		{
			printf("��ͨ������");
		}
	}
	else 
	{
		printf("��������");
	}
	return 0;
}
