#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
float bmi(float, float);
int main()
{
	float h,w;
	printf("Enter weight : \n");
	scanf_s("%f", &w);
	printf("Enter height : \n");
	scanf_s("%f", &h);
	printf("%.2f\n", bmi(h, w));
	if (bmi(h, w) >= 30)
	{
		printf("Obesity\n");
	}
	if (bmi(h, w) >= 25 && bmi(h, w) < 30)
	{
		printf("Overweight");
	}
	if (bmi(h, w) >= 18.5 && bmi(h, w) < 25)
	{
		printf("Normal");
	}
	if (bmi(h, w) < 18.5 )
	{
		printf("Underweight");
	}
}
float bmi(float height, float weight)
{
	float x;
	height /= 100;
	x = weight / (height * height);
	return x;
}