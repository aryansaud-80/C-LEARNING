// Write a program to print the address of each element in an array using a pointer.

#include<stdio.h>

int main(){
    int arr[100];
    int n;
    printf("Enter the total number of element of array: ");
    scanf("%d",&n);

    printf("Enter the %d elements(integers) of an array: ",n);
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }

    int *ptr[100];
    
    for(int i=0; i<n; i++){
        ptr[i] = &arr[i];
    }

    printf("\nThe address of all elements of array are: \n");
    for(int i=0; i<n; i++){
        printf("The address of %d element is %p\n",i+1,(void*)ptr[i]);
    }

    return 0;
}