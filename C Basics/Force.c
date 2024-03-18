// WAP to calculate the force of attraction between two body using Newton's law of gravitation//

#include<stdio.h>
#include<math.h>
int main() {
    //INTRODUCTION//
    printf("Name:Aryan saud\n");
    printf("Roll no:3\n");
    printf("Q:Calculate the force of attraction between two body using Newton's law of gravitation\n");

    //Declaring variables//
    const float G=6.67*(pow(10,-11)); // G is universal gravitational constant which value is 6.67*10^-11 Nm^2/kg^2//
    float mass1, mass2,distance,force; // mass in kg and distance in meter//
    
    
    // Taking input from users //
    printf("Enter the mass1 and mass2 respectively:");
    scanf("%f %f",&mass1, &mass2); 

    printf("Enter the distance between two body:");
    scanf("%f",&distance);

    // Calculating the force of attraction between two body//
    force=(G*mass1*mass2)/(distance*distance);

    printf("The force of attraction between two body is %f",force);
    return 0;
}