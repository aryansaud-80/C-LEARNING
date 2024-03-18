// Write a c program to print a 2D array in matrix format

#include<stdio.h>

int main()
{
    int row, column;
    printf("Enter the row of an matrix: ");
    scanf("%d",&row);

    printf("Enter the column of an matrix: ");
    scanf("%d",&column);

    int matrix[row][column];
    printf("Enter the element of an 2D array: ");
    for (int i=0; i<row; i++){
        for(int j=0; j<column; j++){
            scanf(" %d",&matrix[i][j]);
        }
    }

    printf("The 2D array in matrix format is: \n");
    for (int i=0; i<row; i++){
        for (int j=0; j<column; j++){
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}