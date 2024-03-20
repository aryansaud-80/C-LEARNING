// Write a function that takes an integer an intergers and increment the value it points to.

#include<stdio.h>

void increment(int *number);

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d",&number);

    printf("The number before increment is %d\n",number);


    increment(&number);

    printf("The after increment is %d",number);

    return 0;
}

void increment(int *number){
    *number+=1;
}