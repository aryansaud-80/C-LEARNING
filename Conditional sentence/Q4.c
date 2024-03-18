// Leap year: Write a program to check whether a given year is leap year or not 

#include<stdio.h>

int main() {
    // INTRODUCTION 
    printf("Name:Aryan Saud\n");
    printf("Roll no:3\n");
    printf("Q:WAP to check whether a given year is leap year or not?\n");

    // Declaring variable 
    int year;

    // Taking input from the user 
    printf("Ennter year according to English calendar:");
    scanf("%d",&year);

    // Checking whether a given year is leap year or not 
    if((year%4==0 && year%100!=0) || (year%400==0)) {
        printf("The year %d is leap year.",year);
    }

    else {
        printf("The year %d is not leap year.",year);
    }

    return 0;
}