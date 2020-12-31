#include <stdio.h>

int main()
{    
	int n, res = 0, temp = 1, i = 1;    
	scanf("%d", &n);    
	while(1)    
	{        
		res += temp;        
		if (res < n)        
		{            
			printf("%d \n", i);            
			temp *= ++i;        
		}        
		else 
			break;    
	}    
	return 0;
}
