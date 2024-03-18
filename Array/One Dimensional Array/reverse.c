// Write a c program to reverse the elements of an array.

#include<stdio.h>

int main()
{
    int size;
    printf("Enter the size of an array: ");
    scanf("%d",&size);

    char arr[size];
    printf("Enter the element of an array: \n");
    for(int i=0; i<size; i++){
        printf("Enter the %d elemet: ",i+1);
        scanf(" %c",&arr[i]);
    }

    printf("\nThe given array is: ");
    for(int i=0; i<size; i++){
        printf("%c ",arr[i]);
    }

    for(int i=0; i<size/2; i++){  //For reversing the element of an array.
        int temp = arr[i];
        arr[i] = arr[size-i-1];
        arr[size-i-1] = temp;
    }

    printf("\n");
    printf("The array after reversing the element of an array is: ");
    for( int i=0; i<size; i++){
        printf("%c ",arr[i]);
    }

    return 0;
}
