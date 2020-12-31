#include <stdio.h>
#include <math.h>
 
int main()
{
        float a,b,c,sum;
        float x1,x2;
        scanf("%f %f %f",&a,&b,&c);
        sum = sqrt(b * b - 4 * a * c);
        if(sum >= 0)
        {
            x1 = (-b + sum) / (2 * a);
            x2 = (-b - sum) / (2 * a);
            printf("YES\n");
            printf("%0.2f %0.2f",x2,x1); 
        }
        else
        {
        	printf("NO");
		}
        return 0;
}
