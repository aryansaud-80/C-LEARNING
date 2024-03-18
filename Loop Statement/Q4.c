// Create a for loop to print the multiplication table of a given number.

#include<stdio.h>

int main() {
  int num, table;
  printf("Enter a number: ");
  scanf("%d", &num);

  printf("The table of %d is:\n", num);

  for (int i = 1; i <= 10; i++){
    table = num * i;
    printf("%d*%d=%d\n",num,i,table);
  }

  return 0;
}