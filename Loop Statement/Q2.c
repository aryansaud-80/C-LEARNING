// Use a while loop to print even numbers up to 20.

#include <stdio.h>

int main()
{
  int i=1;

  while(i<=40){
    if(i%2==0){
        printf("%d\n",i);
    }
    i++;
  }
  return 0;

}