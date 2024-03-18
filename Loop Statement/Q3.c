// Write a program that uses a for loop to calculate the sum and average of an array of integers.

#include<stdio.h>

int main() {
  int arr[7]={12,15,18,19,20,15,20};
  int sum = 0;
  double average = 0.0;

  for (int i = 0; i <= 7; i++){
    sum += arr[i];
  }

  printf("Sum of integer in array: %d\n", sum);
  average = (double)sum / 7;
  printf("Average of integers in array: %.2lf", average);

  return 0;
}