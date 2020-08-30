#include<stdio.h>
int main() {
    float temp;
    printf("Enter Fahrenhiet : ");
    scanf_s("%f", &temp);
    printf("\n");
    if (temp >= 32)
    {
        temp -= 32;
        temp *= 5;
        temp /= 9;
        printf("Calculate into celcius is : %.2f",temp);
    }
    else if (temp < 32)
    {
        printf("Too cold to live");
    }
    return 0;
}