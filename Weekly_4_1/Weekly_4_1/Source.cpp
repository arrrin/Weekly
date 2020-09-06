#include<stdio.h>
int less(int, int);
int main()
{
	int a, b;
	scanf_s("%d%d", &a, &b);	
	int i = less(a, b);
	for (; a % i != 0 || b % i != 0; i--)
	{
		/*Processing*/
	}
	printf("Answer is %d", i);
	return 0;
}
int less(int x, int y)
{
	if (x > y) return y;
	else return x;
}