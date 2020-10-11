#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	char ch[100],*p,*s;
	printf("Enter code :");
	scanf("%[^\n]s", ch);
	p = ch;
	s = ch;
	while (*p != '\0')
	{
		if (*p == 'p' || *p == 'P')
		{
			*p = '\0';
			++p;
			*p = '\0';
			
		}
		printf("%c", *p);
		p++;		
	}	
}