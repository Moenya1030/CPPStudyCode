#include <stdio.h>

int main()
{
	char ch;
	scanf("%c",&ch);
	if ((ch>='a') && (ch<='z'))
	{
		ch = ch - ('a'-'A');
		printf("%c", ch);
	}
	else if ((ch>='A') && (ch<='Z'))
	{
		ch = ch + ('a'-'A');
		printf("%c", ch);
	}
	else
	{
		printf("%d", ch);
	}
	return 0;
}
