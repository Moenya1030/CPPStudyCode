//¡õ¡õ x ¡õ¡õ = ¡õ¡õ x ¡õ¡õ¡õ 
#include <iostream>
using namespace std;

int main ()
{
	int a,b,c,d;
	int str[9]={0},flag=1;
	for (a=11;a<=99;a++)
	{
		for (b=a;b<=99;b++)
		{
			for (c=11;c<=99;c++)
			{
				for (d=111;d<=999;d++)
				{		
					if (a*b==c*d)
					{
						str[0]=a/10;
						str[1]=a%10;
						str[2]=b/10;
						str[3]=b%10;
						str[4]=c/10;
						str[5]=c%10;
						str[6]=d/100;
						str[7]=d/10%10;
						str[8]=d%10;
					}
					for (int i=0;i<9;i++)
					{
						for (int j=i+1;j<9;j++)
						{
							if (str[i]==0 || str[j]==0)
							{
								flag=0;
							}
							if (str[i]==str[j])
							{
								flag=0;
							}
						}
					}
					if (flag==1)
					{
						cout<<a<<"x"<<b<<"="<<c<<"x"<<d<<endl;
					}
				
					flag=1;

				}
			}
		}
	}
	return 0;
}
