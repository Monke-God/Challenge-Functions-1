#include <stdio.h>

int sumOfDigits(int n)
{
    int k = 0;
    if (n == 0)
    {
        return 0; //returns 0 when n is 0
    }
    else
    {
        return n % 10 + sumOfDigits(n / 10); // return n % 10 which is remainder when n is divided with 10 of the first digit + sumOfDigits(n/10)
                                             //which is calling of function giving it the number that is made up of the rest of digits after 1st
    }
}
int main()
{
    int n;
    printf("Input any integer to get its sum of digits\n");
    scanf("%d", &n);
    printf("Sum of the digits is %d", sumOfDigits(n)); //sumOfDigits(n) is calling the function
    return 0;
}
