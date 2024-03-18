// Write a c program to find the largest element in a 2D array.

#include<stdio.h>

int main()
{
    int size1, size2;
    printf("Enter the size of an 2D array: ");
    scanf("%d %d",&size1, &size2);

    int arr[size1][size2];
    printf("Enter the element of an 2D array: \n");
    for (int i=0; i<size1; i++){
        for (int j=0; j<size2; j++){
            scanf(" %d",&arr[i][j]);
        }
    }

    int max = arr[0][0];
    for (int i=0; i<size1; i++){
        for (int j=0; j<size2; j++){
            if(arr[i][j]>max){
                max = arr[i][j];
            }
        }
    }

    printf("The largest element in the given 2D array is %d",max);

    return 0;
}