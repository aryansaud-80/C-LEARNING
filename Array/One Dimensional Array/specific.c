// Write a c program to check if an array contains a specific element.

#include<stdio.h>

int main(){
    int size;
    printf("Enter the size of an array: ");
    scanf("%d",&size);

    char arr[size];
    printf("Enter the element of an array: \n");
    for (int i=0; i<size; i++){
        printf("Enter %d element: ",i+1);
        scanf(" %c",&arr[i]);
    }

    char arr_Element;
    printf("Enter element to search: ");
    scanf(" %c",&arr_Element);

    int isThere = 0;
    for (int i=0; i<size; i++){
        if(arr[i] == arr_Element){
            isThere =1;
            break;
        }
    }

    if(isThere==1){
        printf("The element you enetered(%c) is in an array",arr_Element);
    }
    else{
        printf("The element you entered(%c) is not in an array",arr_Element);
    }

    return 0;
}