// Write a c program to find the largest element in an array.

#include<stdio.h>

int main(){
    int size;
    printf("Enter the size of an array: ");
    scanf("%d",&size);

    int arr[size];

    printf("Enter the element of an array: \n");
    for(int i=0; i<size; i++){
        printf("Enter %d element: ",i+1);
        scanf(" %d",&arr[i]);
    }

    int max=arr[0];
    for (int i=0; i<size; i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }

    printf("The largest element in an array is %d",max);
    return 0;
}