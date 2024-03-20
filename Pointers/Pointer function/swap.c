// Write a function to swap two integer value using pointer.

#include<stdio.h>

void swap(int *num_1, int *num_2);

int main() {
    int num_1, num_2;

    printf("Enter first number: ");
    scanf("%d",&num_1);

    printf("Enter second number: ");
    scanf("%d",&num_2);

    printf("The number before swapping are: \n");
    printf("Number1 = %d,  Number2 = %d\n",num_1, num_2);

    swap(&num_1,&num_2);

    printf("\nThe number after swapping are: \n");
    printf("Number1 = %d,  Number2 = %d\n",num_1, num_2);

    return 0;
}

void swap(int *num_1, int *num_2){
    int temp;
    temp = *num_1;
    *num_1 = *num_2;
    *num_2 = temp;
}