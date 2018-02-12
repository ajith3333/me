#include <stdio.h>
int main()
{
    double firstNumber, secondNumber;

    printf("\nEnter first number: ");
    scanf("\n%lf", &firstNumber);
   printf("\nEnter second number: ");
    scanf("\n%lf",&secondNumber);
    firstNumber = firstNumber - secondNumber;
    secondNumber = firstNumber + secondNumber;
    firstNumber = secondNumber - firstNumber;

    printf("\nAfter swapping, firstNumber = %.2lf\n", firstNumber);
    printf("\nAfter swapping, secondNumber = %.2lf", secondNumber);

    return 0;
}
