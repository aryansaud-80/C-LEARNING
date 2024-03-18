// Program to calculate the distance between two points??//

#include<stdio.h>
#include<math.h>

int main() {
    // INTRODUCTION //
    printf("Name:Aryan saud\n");
    printf("Roll no:3\n");
    printf("Q:Program to calculate the distance between two points\n");

    //Declaring  variables//
    float x1, x2, y1,y2,distance;

    //Taking Inputs//
    printf("Enter x1:");
    scanf("%f",&x1);

    printf("Enter x2:");
    scanf("%f",&x2);

    printf("Enter y1:");
    scanf("%f",&y1);

    printf("Enter y2:");
    scanf("%f",&y2);

    //Calculating the distance between two points//
    distance=sqrt(pow(x2-x1,2)+pow(y2-y1,2));

    printf("The distance between two point is %f",distance);

    return 0;
}