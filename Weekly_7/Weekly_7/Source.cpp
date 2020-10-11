#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	char ch[100];
	printf("Enter code :");
	scanf("%[^\n]s", ch);
	
	for (int i = 0; ch[i] != '\0'; ++i)
	{
		printf("%c", ch[i]);
			if (ch[i] == 'A' || ch[i] == 'a' || ch[i] == 'e' || ch[i] == 'E' || ch[i] == 'I' || ch[i] == 'i' || ch[i] == 'o' || ch[i] == 'O' || ch[i] == 'U' || ch[i] == 'u')
			{
				i += 2;
			}
	}
	
}

