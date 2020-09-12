#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
void notPalindrome();
int main()
{
	char ch[100],*p;
	printf("Enter text : ");
	scanf("%s", ch);
	int i = strlen(ch)-1,j=0;
	p = ch;
	while (j <= i)
	{
		if (*p != ch[i] && 1==1)
		{
			notPalindrome();
			break;
		}
		else
		{
			printf("Palindrome");
			break;
		}
		j++;
		p++;
		i--;
	}
}
void notPalindrome()
{
	printf("Not palindrome");
}


