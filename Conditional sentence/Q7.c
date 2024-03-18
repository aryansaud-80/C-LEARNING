// Electricity Bill: Write a program to calculate the electricity bill of customer based on their usage and tarrif rates 

#include<stdio.h>
int main() {
    // INTRODUCTION 
    printf("Name:Aryan Saud\n");
    printf("Roll no:3\n");
    printf("Q: WAP to calculate the electricity bill of customer based on their usage and tarrif rates?\n");

    //DECLARING VARIABLES 
    float unit_usage,total_bill;

    //TAKING INPUT FROM USERS
    printf("Eneter total unit usage: ");
    scanf("%f",&unit_usage);

    // CALCULATING TOTAL BILL OF CUSTOMER 

        /* upto 20unit=Rs4.00 per unit 
           21-250unit=Rs 7.30 per unit
           over 250unit=Rs 9.90 per unit
           */

    if (unit_usage==20) {
        total_bill=unit_usage*4.00;
        printf("Electricity bill= Rs%f",total_bill);
    }

    else if (unit_usage>20 && unit_usage<=250){
        total_bill=(20*4.00)+(unit_usage-20)*7.30;
        printf("Electricity bill= Rs%f",total_bill);
    }

    else if (unit_usage>250) {
        total_bill=(20*4.00)+(230*7.30)+(unit_usage-250)*9.90;
         printf("Electricity bill= Rs%f",total_bill);
    }

    else {
        printf("Please enter unit usage");
    }
    return 0;
}