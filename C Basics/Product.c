// program to calulates the product of integers given by users//
#include<stdio.h>

   int main() {
    //INTRODUCTION//
    printf("Name: Aryan saud\n");
    printf("Roll no: 3\n");
    printf("Q: Program to calculates the product of two integers given by users\n");
      
    // Declaring variables//
    int x, y, product;

    // Taking input from users//
    printf("Enters two integers: ");
    scanf("%d %d",&x, &y);

    // Calculating product//
    product=x*y;
    printf("Product is: %d\n",product);

    return 0;
   }