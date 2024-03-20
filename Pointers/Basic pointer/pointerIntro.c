// Declare a pointer variable and initialize it to point to an integer variable. Also print the value of the integer variable using the pointer.

#include<stdio.h>

int main(){
    int number;

    printf("Enter a number: ");
    scanf("%d",&number);

    int *ptr;
    ptr = &number;

    printf("The value of integer is %d",*ptr);

    return 0;
}