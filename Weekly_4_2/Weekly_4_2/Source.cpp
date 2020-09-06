#include<stdio.h>
int more(int, int);
int less(int, int);
int main()
{
	int a, b,k=1;
	scanf_s("%d%d", &a, &b);
	int i = more(a, b),j = less(a, b);
	for (;; k++)
	{
		i *= k;
		if (i % j == 0)
		{
			break;
		}
		i /= k;
	}
	printf("L.C.M is %d", i);
}
int more(int x, int y)
{
	if (x > y) return x; else return y;
}
int less(int x, int y)
{
	if (x < y) return x; else return y;
}