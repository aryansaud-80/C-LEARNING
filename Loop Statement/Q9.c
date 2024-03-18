/* Write a program to find if the number is Armstrong or not. Example: 1634 (1^4 + 6^4 + 3^4 +
4^4 = 1 + 1296 + 81 + 256 = 1634)*/

#include<stdio.h>
#include<math.h>

int main() {
  int number,count=0,reminder,newNumber=0;
  printf("Enter a number: ");
  scanf("%d",&number);

  int tempNumber = number;

  while(tempNumber>0){
    reminder = tempNumber % 10;
    count++;
    tempNumber /= 10;
  }

  tempNumber = number;

  while(tempNumber>0){
    reminder = tempNumber % 10;
    newNumber += pow(reminder, count);
    tempNumber /= 10;
  }

  if(newNumber==number){
    printf("%d is a Armstrong number.", number);
  }

  else{
    printf("%d is not Armstrong number.", number);
  }
}