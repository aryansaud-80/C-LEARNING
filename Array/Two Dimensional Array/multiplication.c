// Write a c program to find the multiplication of 2D array in matrix form

#include<stdio.h>

int main()
{
    int row1,cols1,row2,cols2;
    printf("Enter the row and colums of first matrix: ");
    scanf("%d %d",&row1,&cols1);

    printf("Enter the row and colums of second matrix: ");
    scanf("%d %d",&row2,&cols2);

    if(cols1!=row2){
        printf("Matrix multiplication is not compatible.");
        return 0;
    }

    int matrixA[row1][cols1],matrixB[row2][cols2],matrixAB[row1][cols2];

    printf("Enter the elements of matrixA: ");
    for(int i=0; i<row1; i++){
        for (int j=0; j<cols1; j++){
            scanf(" %d",&matrixA[i][j]);
        }
    }

    printf("Enter the elements of matrixB: ");
    for(int i=0; i<row2; i++){
        for (int j=0; j<cols2; j++){
            scanf(" %d",&matrixB[i][j]);
        }
    }

    for(int i=0; i<row1; i++){
        for (int j=0; j<cols2; j++){
            matrixAB[i][j]=0;
            for(int k=0; k<row2; k++){
                matrixAB[i][j]+=matrixA[i][k]*matrixB[k][j];
            }
        }
    }

    printf("The multiplication of matrixA and MatrixB is MatrixAB i.e.: \n");
    for(int i=0; i<row1; i++){
            for (int j=0; j<cols2; j++){
                printf("%d\t",matrixAB[i][j]);
            }
            printf("\n");
    }

    return 0;
}