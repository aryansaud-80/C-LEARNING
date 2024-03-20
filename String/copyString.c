// Write a c program to copy one string without using the function.

#include<stdio.h>

int main()
{
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    char copyStr[100], length=0;

    while(str[length]!= '\0'){
        length++;
    }

    for(int i=0; i<=length; i++){
        copyStr[i]=str[i];
    }

    printf("The original string is %s\n",str);

    printf("The copied string is %s",copyStr);

    return 0;
}