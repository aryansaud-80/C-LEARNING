// Largest of Three Numbers: Write a program to find the largest among three numbers. 

#include<stdio.h>

int main() {
    // INTRODUCTION 
    printf("Name:Aryan Saud\n");
    printf("Roll no:3\n");
    printf("Q:WAP to find the largest among three number?\n");

    // Declaring variables 
    int num1, num2, num3;

    // Taking input from users 
    printf("\nEnter num1:");
    scanf("%d",&num1);
    
    printf("\nEnter num2:");
    scanf("%d",&num2);

    printf("\nEnter num3:");
    scanf("%d",&num3);


    // Checking which is largest number among three numbers 
    if(num1>num2 && num1>num3) {
        printf("num1=%d is largest among three numbers.",num1);
    }

    else if(num2>num1 && num2>num3) {
        printf("num2=%d is largest among three numbers.",num2);
    }

    else if(num3>num1 && num3>num2) {
        printf("num3=%d is largest among three numbers.",num3);
    }

    else if(num1==num2 && num2==num3) {
        printf("All numbers num1=%d, num2=%d and num3=%d are equal",num1,num2,num3);
    }

    
    return 0;

}