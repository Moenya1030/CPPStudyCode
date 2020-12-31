#include<stdio.h>
int main()
{
   int i=0;
   float v1;
   float v2;
   float d;
   v1=100;
   v2=200;
   scanf("%f", &d);
   while(v1 < v2)
   {
       v1*=1+d;
       i++;
   }
   printf("%d",i);
   return 0;
}
