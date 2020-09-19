#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
void reverse(char*);
int main()
{
    char ch[100];
    printf("Enter a string\n");
    scanf("%s", ch);
    reverse(ch);
    printf("Reverse of the string is \"%s\".\n",ch);
    return 0;
}
void reverse(char* ch)
{
    int length, c;
    length = strlen(ch);
    char* begin, * end, temp;
    begin = ch;
    end = ch;
    for (c = 0; c < length - 1; c++)
        end++; //End ä»arrayµÑÇ·éÒÂ
    for (c = 0; c < length / 2; c++)
    {
        temp = *end;
        *end = *begin;
        *begin = temp;
        begin++;
        end--;
    }
}