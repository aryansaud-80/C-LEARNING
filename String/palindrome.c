// Write a program to check if a string is palindrome

#include<stdio.h>

int main(){
    char str[100];

    printf("Enter the string: ");
    scanf("%s",str);

    int length=0;

    while(str[length]!=0){
        length++;
    }

    char tempStr[100];
    for(int i=0; i<=length; i++){
        tempStr[i]=str[i];
    }

    for(int i=0; i<length/2; i++){
        int temp = tempStr[i];
        tempStr[i] = tempStr[length-i-1];
        tempStr[length-i-1] = temp;
    }

    tempStr[length]='\0';
    printf("The reversed string is %s\n",tempStr);


    int isPalindrome=0;
    for(int i=0; i<=length; i++){
    if(str[i]==tempStr[i]){
        isPalindrome=1;
    }
    }

    if(isPalindrome==1){
        printf("The given string is palindrome.");
    }

    else{
        printf("The given string is not palindrome.");
    }

    return 0;
}