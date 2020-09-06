#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	char c[100];
	scanf("%s", &c);
	int i=0,j = 0;
	while (c[i] != '\0') {
		if (c[i] >= 'A' && c[i] <= 'Z')
			c[j++] = c[i];
			i++;
	}
	c[j] = '\0';
	printf("%s", c);
}
