#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int row, col;
	int A[10][10], B[10][10], C[10][10], RowA, RowB, ColA, ColB, x, y, z, sum;
	char answer;
	printf("Enter row and columns of Matrix A:");
	scanf("%d %d", &RowA, &ColA);
	printf("Size of Matrix A is %d*%d.\n", RowA, ColA);
	for (x = 0; x < RowA; x++)
		for (y = 0; y < ColA; y++) {
			printf("Matrix A[%d][%d] =", x, y);
			scanf("%d", &A[x][y]);
		}
	printf("\n");

	printf("Enter row and columns of Matrix B:");
	scanf("%d %d", &RowB, &ColB);
	printf("Size of Matrix B is %d*%d.\n", RowB, ColB);
	for (x = 0; x < RowB; x++)
		for (y = 0; y < ColB; y++) {
			printf("Matrix B[%d][%d] =", x, y);
			scanf("%d", &B[x][y]);
		}
	printf("\n");

	for (x = 0; x < RowA; x++)
		for (y = 0; y < ColB; y++)
		{
			sum = 0;
			for (z = 0; z < ColA; z++)
				sum += A[x][z] * B[z][y];
			C[x][y] = sum;
		}

	printf("MatrixA * MatrixB:\n");
	for (x = 0; x < RowA; x++) {
		for (y = 0; y < ColB; y++)
			printf("%d ", C[x][y]);
		printf("\n");
	}
}
