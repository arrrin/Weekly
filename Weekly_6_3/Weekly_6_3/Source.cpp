#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
void vowelCheck(char*);
int main()
{
	char ch[100];
	printf("Enter string : \n");
	scanf("%s", ch);
	vowelCheck(ch);
	return 0;
}
void vowelCheck(char* ch)
{
	int i,length,countA=0,countE=0,countI=0,countO=0,countU=0;
	length = strlen(ch);
	for (int i = 0; ch[i] != '\0'; i++)
	{
		if (ch[i] == 'A'|| ch[i] == 'a')
		{
			countA++;
		}
		if (ch[i] == 'E' || ch[i] == 'e')
		{
			countE++;
		}
		if (ch[i] == 'I' || ch[i] == 'i')
		{
			countI++;
		}
		if (ch[i] == 'O' || ch[i] == 'o')
		{
			countO++;
		}
		if (ch[i] == 'U' || ch[i] == 'u')
		{
			countU++;
		}
	}
	printf("a = %d \ne = %d \ni = %d \no = %d \nu = %d \n", countA, countE, countI, countO, countU);
}