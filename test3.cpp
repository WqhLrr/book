#include <stdio.h>

#include <stdlib.h>
int main(void)
{
	int ar[4] = {10,2,3,5};
	int n = 4;
	int i = 0;
	while(n--)
	{
	
		printf("%d\n",*(ar+i));
		i++;
	}
 } 
