// Write a c program to concatenate two string.

#include<stdio.h>

int main(){
    char str1[100], str2[100];

    printf("Enter first string: ");
    scanf("%s",str1);

    printf("Enter second string: ");
    scanf("%s",str2);

    int i=0,j=0;

    while(str1[i]!='\0'){
        i++;
    }

    while(str2[j]!='\0'){
        str1[i]=str2[j];
        i++;
        j++;
    }

    str1[i]='\0';

    printf("The str1 becomes %s after concatenate.",str1);

    return 0;
}