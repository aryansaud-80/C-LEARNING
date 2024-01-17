// WAP to swap two numbers using a bitwise operator

#include<stdio.h>

void swap(int *a, int* b);

int main() {
    int x , y;
    printf("Enter x: ");
    scanf("%d",&x);

    printf("Enter y: ");
    scanf("%d",&y);

    printf("Before swapping: x= %d and y= %d\n",x,y);

    swap(&x,&y);
    printf("After swapping: x=%d and y=%d\n",x,y);

    return 0;


}

void swap(int *a, int *b) {
    *a = *a ^ *b;
    *b = *a ^ *b;
    *a = *a ^ *b;
}