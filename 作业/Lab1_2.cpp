//Êä³ö¾Å¾Å³Ë·¨±í
//1x1=1
//1x2=2 2x2=4
//1x3=3 2x3=6 3x3=9
#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{
	int numLeft=1,numRight=1;
	for (;numRight<=9;numRight++)
	{
		if (numLeft<=numRight)
		{
			for (;numLeft<=numRight;numLeft++)
			{
				cout<<numLeft<<"x"<<numRight<<"="<<setw(2)<<numLeft*numRight<<" ";
			}
		}
		numLeft=1;
		cout<<endl;		
	}
	return 0;
}
