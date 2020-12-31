//鸡翁一，值钱五；鸡母一，值钱三；鸡雏三，值钱一；
//百钱买百鸡，问翁、母、雏各几只
#include <iostream>
using namespace std;

int main ()
{
	int a,b,c;
	for (a=0;a<=20;a++)
	{
		for (b=0;b<=33;b++)
		{
			for (c=0;c<=300;c+=3)
			{
				if ((a+b+c==100) && (a*5+b*3+c/3))
				{
					cout<<"翁："<<a<<" "<<"母："<<b<<" "<<"雏："<<c<<endl; 
				}
			}
		}
	}
	return 0;	
} 
