// Write a program to count the digits in a number.

#include <stdio.h>

int main()
{
    int num, rem, num_count = 0;
    printf("Enter a number:");
    scanf("%d", &num);

    while (num > 0)
    {
        rem= num % 10;
        num_count++;
        num /= 10;
    }
    printf("%d", num_count);
    return 0;
}