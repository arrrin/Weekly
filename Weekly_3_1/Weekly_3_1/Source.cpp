#include<stdio.h>
int main()
{
	int year;
	printf("Enter Chirstian date : ");
	while (1) {
		scanf_s("%d", &year);
		if (year >= 0)
		{
			year += 543;
			printf("Buddism year is %d\n", year);
			break;
		}
		else if (year < 0)
		{
			printf("Please enter number is greater than zero : ");
		}
	}

}