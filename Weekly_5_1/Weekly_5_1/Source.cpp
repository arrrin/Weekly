#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	char ch[100],*p;
	printf("Enter text :");
	scanf("%s", ch);
	p = ch;
	int i = 0;
	while (*p != '\0')
	{
		if (*p >= 'A' && *p <= 'Z')
		{
			*p += 32;
		}
		else if (*p >= 'a' && *p <= 'z')
		{
			*p -= 32;
		}
		else
		{
			*p = '\0';
		}
		printf("%c", *p);
		p++;
		
	}
	return 0;
}