#include <iostream>
#include <stdio.h>

using namespace std; 

int Sum(int (*i)[])
{
	int sumofi = 0;
	for (int j = 0; j < sizeof(*i)/sizeof(int *); j++) //Êµ¼ÊÉÏ£¬sizeof(i) = 4
	{
	sumofi += (*i)[j];
	}
	return sumofi;
}

int main()
{
	int allAges[6] = {21, 22, 22, 19, 34, 12};
	cout<<Sum(&allAges)<<endl;
	system("pause");
	return 0;
}
