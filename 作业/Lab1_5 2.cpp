#include <stdio.h>
#include <stdlib.h>
 
int main(void)
{
    long a = 1, b = 1, c = 1, d = 1;
    int aa[9] = {0}, flag = 1, i = 1, j = 1;
 
    for(a = 10; a < 100; a++)
    {
        for(b = 10; b < 100; b++)
        {
            for(c = 10; c < 100; c++)
            {
                for(d = 100; d < 1000; d++)
                {
                    if(a * b == c * d)
                    {
                        aa[0] = a / 10;
                        aa[1] = a % 10;
                        aa[2] = b / 10;
                        aa[3] = b % 10;
                        aa[4] = c / 10;
                        aa[5] = c % 10;
                        aa[6] = d / 100;
                        aa[7] = d % 100 / 10;
                        aa[8] = d % 10;
                        for(i = 0; i < 9; i++)
                        {
                            if(aa[i] == 0)
                            {
                                flag = 0;
                                continue;
                            }
                            for(j = i + 1; j < 9; j++)
                            {
                                if(aa[i] == aa[j])
                                    flag = 0;
                                else
                                    continue;
                            }
                        }
                        if(flag)
                            printf("%ld * %ld = %ld * %ld\n", a, b, c, d);
                        else
                            flag = 1;
                    }
                }
            }
        }
    }
    return 0;
}
