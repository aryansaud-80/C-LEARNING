// write a c program to find the length of a string without using function

#include<stdio.h>

int main(){
    char string[100];
    
    printf("Enter a string: ");
    scanf("%s",string);

    int length=0;

    while(string[length] != '\0'){
        length++;
    }


    printf("The length of string is %d",length);

    return 0;
}