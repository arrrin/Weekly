#include<stdio.h>
int main()
{
	float money;
	printf("Enter dollar money you have : ");
	scanf_s("%f", &money);
	if (money <= 0)
	{
		printf("You don't have money");
	}
	else if (money > 0)
	{
		money *= 32.5;
		printf("Convert into baht is %.2f", money);
	}

	return 0;
}