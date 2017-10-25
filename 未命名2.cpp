#include<stdio.h>
#define AS 
#define b(x) x*1
#undef b 
#define b(a) a^2
#ifndef AS
#define AS 100
#endif
#define AS
int c(int x)
{
	return c(x);
}
int main()
{
	int a =7 ;	
	printf("%d",c(a));
	return 0;
}
