#include <stdio.h>

int main() {
    int num1, num2;
    float avg;

    printf("Enter first number : ");
    scanf("%d", &num1);
    printf("Enter second number : ");
    scanf("%d", &num2);

    avg = (float)(num1 + num2) / 2;
    printf("Average : %f\n", avg);

    return 0;
}
