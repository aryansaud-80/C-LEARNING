// Wirte a c program to copy elements from one array to another.

#include<stdio.h>

int main()
{
    int size;
    printf("Enter the size of an array: ");
    scanf("%d",&size);

    char firstArr[size], secondArr[size];

    printf("Enter the element of an array: \n");
    for (int i=0; i<size; i++){
        printf("Enter %d element: ",i+1);
        scanf(" %c",&firstArr[i]);
    }

    printf("The element of given array are: ");
    for (int i=0; i<size; i++){
        printf("%c ",firstArr[i]);
    }

    for(int i=0; i<size; i++){
        secondArr[i]=firstArr[i];
    }

    printf("\nThe element of copied array are: ");
    for(int i=0; i<size; i++){
        printf("%c ",secondArr[i]);
    }

    return 0;
}