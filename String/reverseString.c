// Write a c program to reverse a string.

#include<stdio.h>

int main(){
    char str[100];

    printf("Enter the string: ");
    scanf("%s",str);


    printf("The given string is %s\n",str);

    int length=0;
    int i;
    while(str[length]!=0){
        length++;
    }

    for(i=0; i<length/2; i++){
            char temp = str[i];
            str[i]=str[length-i-1];
            str[length-i-1]=temp;
        }

    str[length]='\0';
    printf("The reverse of given string is %s\n",str);

        return 0;
    }
