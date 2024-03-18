// Write a c program to find the matrix addition

#include<stdio.h>

int main(){
    int row,cols;
    printf("Enter the rows and columns of matrix: ");
    scanf("%d %d",&row, &cols);

    int matrixA[row][cols],matrixB[row][cols],matrixAdd[row][cols];

    printf("Enter the elements of matrixA: ");
    for(int i=0; i<row; i++){
        for(int j=0; j<cols; j++){
            scanf(" %d",&matrixA[i][j]);
        }
    }

    printf("Enter the elements of matrixB: ");
    for(int i=0; i<row; i++){
        for(int j=0; j<cols; j++){
            scanf(" %d",&matrixB[i][j]);
        }
    }

    for(int i=0; i<row; i++){
        for(int j=0; j<cols; j++){
            matrixAdd[i][j]=0;
            matrixAdd[i][j]=matrixA[i][j]+matrixB[i][j];
        }
    }

    
    printf("The matrix addition matrixAdd is: \n");
    for(int i=0; i<row; i++){
        for(int j=0; j<cols; j++){
            printf("%d\t",matrixAdd[i][j]);
        }
        printf("\n");
    }

    return 0;
}