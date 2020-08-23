#include<stdio.h>

                
int main()
{

	int a;
	printf("Enter Number : ");
	scanf_s("%d", &a);
	printf("\n");
	if (a > 0)
	{
		printf("%d > 0",a);
	}
	else if (a == 0)
	{
		printf("%d = 0",a);
	}
	else if (a < 0)
	{
		printf("%d < 0",a);
	}
}