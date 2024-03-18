// Positive, negative or zero: Write a program to determine whether a given number is positive, negative or zero 

#include<stdio.h>

int main() {
    // INTRODUCTION 
    printf("Name:Aryan Saud\n");
    printf("Roll no:3\n");
    printf("Q: WAP to determine whether a given number is positive, negative or zero?\n");

    // Declaring variable
    int num;

    // Taking input from user 

    printf("Enter a num:");
    scanf("%d",&num);
    
    // checking whether a number is positive, negative or zero 
    if(num>0){
        printf("The given number %d is positive.\n",num);
    }

    else if(num<0) {
        printf("The given number %d is negative.\n",num);
    }

    else if(num==0) {
        printf("The given number %d is zero.\n",num);
    }

    else{
        printf("Enter a valid number.Thank you!\n");
    }

    return 0;
}