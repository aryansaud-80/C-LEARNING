// Quadratic Equation Roots: Write a program to solve  a quadratic equation and find its roots(real or imaginary) 

#include<stdio.h>
#include<math.h>

int main() {
    // INTRODUCTION 
    printf("Name:Aryan Saud\n");
    printf("Roll no:3\n");
    printf("Q:WAP to solve a quadratic equation and find its roots(real or imaginary)?\n");

    // Declaring variavle 
    int a,b,c,determinant;
    double d,e;

    // taking input from users 

    printf("Enter a: ");
    scanf("%d",&a);

    printf("Enter b: ");
    scanf("%d",&b);

    printf("Enter c: ");
    scanf("%d",&c);

//    Calculating determinant 
    determinant=b*b-4*a*c;

    // Calculating root 
    d=(-b+sqrt(determinant))/(2*a);
    e=(-b-sqrt(determinant))/(2*a);

    // printing the root of given quadratic equation 
    printf("The first root is %lf\n",d);
    printf("The second root is %lf\n",e);

    // checking the root are real or imaginary 

    if(determinant>=0) {
        printf("The root is real\n");
    }

    else if(determinant<0) {
        printf("The root is imaginary\n");
    }

    return 0;
}