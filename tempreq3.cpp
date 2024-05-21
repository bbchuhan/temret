#include <stdio.h>

int main() {
    int number, firstDigit, lastDigit, sum;

    
    printf("Enter any number: ");
    scanf("%d", &number);


    firstDigit = number;
    while (firstDigit >= 10) {
        firstDigit /= 10;
    }

    
    lastDigit = number % 10;

    
    sum = firstDigit + lastDigit;

    
    printf("The sum of the first and the last digit: %d\n", sum);

    return 0;
}
