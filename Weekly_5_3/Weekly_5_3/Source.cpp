#include<stdio.h>

int main()
{
	int money;
	scanf_s("%d",&money);
    if (money >= 1000) {
        printf("\n1000 Baht = %d ", money / 1000);
        money = money % 1000;
    }
    if (money >= 500 && money <= 1000) {
        printf("\n 500 Baht = %d", money / 500);
        money = money % 500;
    }
    if (money >= 100 && money <= 1000) {
        printf("\n 100 Baht = %d", money / 100);
        money = money % 100;
    }
    if (money >= 50 && money <= 1000) {
        printf("\n  50 Baht = %d", money / 50);
        money = money % 50;
    }

    if (money >= 20 && money <= 1000) {
        printf("\n  20 Baht = %d", money / 20);
        money = money % 20;
    }
    if (money >= 10 && money <= 1000) {
        printf("\n  10 Baht = %d", money / 10);
        money = money % 10;
    }
    if (money >= 5 && money <= 1000) {
        printf("\n   5 Baht = %d", money / 5);
        money = money % 5;
    }
    if (money >= 2 && money <= 1000) {
        printf("\n   2 Baht = %d", money / 2);
        money = money % 2;
    }
    if (money >= 1 && money <= 1000) {
        printf("\n   1 Baht = %d", money);
    }
    return 0;
}
