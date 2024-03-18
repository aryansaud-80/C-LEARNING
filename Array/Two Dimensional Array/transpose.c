// Write a c program to find the transpose of a 2D square array.

#include<stdio.h>

int main()
{
    int size;
    printf("Enter the size of square 2D array: ");
    scanf("%d",&size);

    int squareArr[size][size];
    printf("Enter the element of a square 2D array: ");
    for(int i=0; i<size; i++){
        for (int j=0; j<size; j++){
            scanf(" %d",&squareArr[i][j]);
        }
    }

    printf("The given square 2D array is: \n");
    for(int i=0; i<size; i++){
        for (int j=0; j<size; j++){
            printf("%d\t",squareArr[i][j]);
        }
        printf("\n");
    }

    printf("The transpose of given square 2D array is: \n");
    for(int i=0; i<size; i++){
        for (int j=0; j<size; j++){
            printf("%d\t",squareArr[j][i]);
        }
        printf("\n");
    }
}