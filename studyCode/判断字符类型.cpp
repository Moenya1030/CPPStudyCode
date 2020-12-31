#include<stdio.h>
int main()
{
    char ch;
    scanf("%c", &ch);
    
    if(ch >= 48 & ch <= 57)
    {
        printf("digit");
    }
    else if(ch >= 65 && ch <= 90)
    {
        printf("upper");
    }
    else if(ch >= 97 && ch <= 122)
    {
      	printf("lower");
    }
    else if(ch == 32)
    {
        printf("space");
    }
    else
    {
        printf("other");
    }
    return 0;
}
