// Write a c program to find the sum of all elements in an array.

#include<stdio.h>

int main(){
    int size;
    printf("Enter the sixe of an array: ");
    scanf("%d",&size);

    int arr[size],sum=0;

    printf("Enter the element of an array: ");
    for(int i=0; i<size; i++){
        scanf(" %d",&arr[i]);
    }

    for(int i=0; i<size; i++){
        sum +=arr[i];
    }

    printf("The sum of all element in an array is %d",sum);
    return 0;
}