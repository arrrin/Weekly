#include<stdio.h>
int main() 
{
	float a;
	printf("Enter number : ");
	while(1)
	{
		scanf_s("%f", &a);
		printf("\n");
		if (a <= 0)
		{
			printf("Please enter number greater than zero : ");
		}
		else if (a < 50)
		{
			printf("Fail \n");
			break;
		}
		else if (a >= 50)
		{
			printf("Pass \n");
			break;
		}
	}
}