#include<stdio.h>
int max(int , int );
void scoreCount(int,int*,int*,int*,int*);
int main()
{
	int as,bs,cs,ds, a=1, a1, a2, a3, a4, b=2, b1, b2, b3, b4, c=3, c1, c2, c3, c4, d=4	, d1, d2, d3,d4,i ;
	scoreCount(1, &a1, &a2, &a3, &a4);
	scoreCount(2, &b1, &b2, &b3, &b4);
	scoreCount(3, &c1, &c2, &c3, &c4);
	scoreCount(4, &d1, &d2, &d3, &d4);
	as = a1 + a2 + a3 + a4; bs = b1 + b2 + b3 + b4; cs = c1 + c2 + c3 + c4; ds = d1 + d2 + d3 + d4;
		i = max(max(as, bs), max(cs, ds));
	if (a1 > 5 || a2 > 5 || a3 > 5 || a4 > 5 || b1 > 5 || b2 > 5 || b3 > 5 || b4 > 5 || c1 > 5 || c2 > 5 || c3 > 5 || c4 > 5 || d1 > 5 || d2 > 5 || d3 > 5 || d4 > 5)
	{
		printf("The score must not be more than 5!");
	}
	else if (as == bs || as == cs || as == ds || bs == cs || bs == ds || cs == ds)
	{
		printf("The total of score must not be the same!");
	}
	else if (a1 < 0 || a2 < 0 || a3 < 0 || a4 < 0 || b1 < 0 || b2 < 0 || b3 < 0 || b4 < 0 || c1 < 0 || c2 < 0 || c3 < 0 || c4 < 0 || d1 < 0 || d2 < 0 || d3 < 0 || d4 < 0)
	{
		printf("The score must not be less than 0!");
	}
	else if (i == as)
	{
		printf("The winner is number %d score is %d", a, as);
	}
	else if (i == bs)
	{
		printf("The winner is number %d score is %d", b, bs);
	}
	else if (i == cs)
	{
		printf("The winner is number %d score is %d", c, cs);
	}
	else if (i == ds)
	{
		printf("The winner is number %d score is %d", d, ds);
	}
}
void scoreCount(int x,int *a, int* b, int* c, int* d )
{
	printf("Enter competitor %d score to other competitor : \n",x);
	scanf_s("%d %d %d %d", &*a, &*b, &*c, &*d);
}
int max(int x, int y)
{
	if (x < y) return y; else return x;
}
