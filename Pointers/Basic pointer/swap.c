// Write a program to swap the values of two variables using pointers.

#include<stdio.h>

int main(){
    int num_1, num_2;

    printf("Enter the first number : ");
    scanf("%d",&num_1);

    printf("Enter the second number: ");
    scanf("%d",&num_2);

    printf("\nThe number before swapping are: \n");
    printf("num_1=%d, num_2=%d\n",num_1,num_2);

    int *ptr1, *ptr2;
    ptr1 = &num_1;
    ptr2 = &num_2;

    int temp;

    temp  = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;

    printf("\nThe number after swapping are: \n");
    printf("num_1=%d, num_2=%d",num_1,num_2);

    return 0;
}