// Vowel or Consonant: Write a program to check whether a entered character is a vowel or a consonant 

#include<stdio.h>

int main() {
// INTRODUCTION 
    printf("Name:Aryan Saud\n");
    printf("Roll no:3\n");
    printf("Q:WAP to check whether a entered character is a vowel or a consonant?\n");

    // Declaring a variable 
    char alphabet;

    // Taking Input from the users 
    printf("Enter a alphabet:");
    scanf("%c",&alphabet);

    // checking wheteher a entered character is vowel or consonant

    if (alphabet=='a' || alphabet=='e' || alphabet=='i'  || alphabet=='o' || alphabet=='u') {
        printf("The enterd character is vowel");
    }
    
    else if (alphabet=='A'|| alphabet=='E' || alphabet=='I' || alphabet=='O' || alphabet=='U') {
           printf("The enterd character is vowel");
       }

    else if((alphabet>='A' && alphabet<='Z')||(alphabet>='a' && alphabet<='z') ){
        printf("The enter character is consonant");
    }
    
    else{
        printf("Please kindly enter valid character(alphabet)");
    }
    

    return 0;
}