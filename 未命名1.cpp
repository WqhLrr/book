#include<stdio.h>
#include<stdlib.h> 
#include<string.h>
#include<assert.h>
#define b(a) a+1
#undef b
#define b(a) a+3
int b(int a)
{
	return a;
}
int main()
{
	int a =7 ;	
	printf("%d",b(a));
	return 0;
}
