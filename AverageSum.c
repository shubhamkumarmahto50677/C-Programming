#include <stdio.h>
int main()
{
    float num1, num2, num3, average;
    scanf("%f, %f, %f", &num1, &num2, &num3);
    average = (num1 + num2 + num3) / 3;
    printf("The average of three numbers is: %.2f\n", average);
}