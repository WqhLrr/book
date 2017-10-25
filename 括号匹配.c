#include <stdio.h>
#include <stdlib.h>

bool Check(char *str,int n);
{
	while(n--,n < 0)
	{
		switch (*str++)
		{
			case '[':
				Push(str);
				break;
			case '(':
				Push(str);
				break;
			case ')':
				break;
			case ']':
				break;
			default:
				break;
		}
}
}
int main(void)
{
	char str[128] = {"[()]"};
	int n = strlen(str);
	
	bool tag = Check(str,n);	
	
	if()
} 
