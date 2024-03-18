// Write a program to get the sum of digits in a number. Example 12345, sum=1+2+3+4+5=15

#include<stdio.h>

int main() {
  int number,reminder, sum=0;
  printf("Enter a number: ");
  scanf("%d", &number);

  for (int i = number; i > 0; i= i/10){
    reminder = i % 10;
    sum += reminder;
  }

  printf("sum of digit in number %d is %d\n", number, sum);

  return 0;
}