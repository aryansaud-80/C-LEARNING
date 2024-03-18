// Program to reverse the number. Example 321 -> 123, 1234 ->; 4321

#include<stdio.h>

int main() {
  int number,reverse_number=0,reminder;
  printf("Enter a number: ");
  scanf("%d", &number);


  for (int i = number; i != 0; i=i/10){
    reminder = i % 10;
    reverse_number = reverse_number * 10 + reminder;
  }
  printf("The reverse number of %d is %d\n", number, reverse_number);

  return 0;
}