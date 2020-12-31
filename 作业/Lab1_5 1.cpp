#include<stdio.h>

int main()
{
int x,y,j,k;
for(x=11;x<100;x++)
for(y=11;y<100;y++)
for(j=11;j<100;j++)
for(k=101;k<1000;k++)
if(x%10!=0)
if(y%10!=0)
if(j%10!=0)
if(k%10!=0)
if(x*y==j*k)
printf("%d*%d=%d*%d\n",x,y,j,k);
return 0;
}
