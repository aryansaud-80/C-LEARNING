// Write a c program to find the sum of elements in each row of a 2D array.

#include<stdio.h>

int main()
{
    int size1,size2;
    printf("Enter the size of an 2D array: ");
    scanf("%d %d",&size1,&size2);

    int arr[size1][size2], sum=0;
    printf("Enter the elements of an array: \n");
    for(int i=0; i<size1; i++){
        for(int j=0; j<size2; j++){
            scanf(" %d",&arr[i][j]);
        }
    }

    for(int i=0; i<size1; i++){
        for(int j=0; j<size2; j++){
            sum += arr[i][j];
        }
        printf("The sum of %d row is %d\n",i+1,sum);
        sum =0;
    }

    return 0;
}