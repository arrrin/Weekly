#include<stdio.h>
int main() {
	int i, j, k;
	scanf_s("%d", &i);
	for (int j = 0; j < i; j++) {
		for (int k = 0; k < i; k++) {
			printf("*");
		}
		printf("\n");
	}
}