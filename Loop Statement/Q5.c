  /*Use a do-while loop to check if a user's input is an even number, prompting them to re-enter if
  not.*/

  #include<stdio.h>

  int main() {
    int num;

    do{
      printf("\nEnter a number: ");
      scanf("%d", &num);

      if(num %2 !=0){
        printf("This is not a even number.Please enter even number.\n");
      }
    }while(num %2 !=0);
    
    printf("You enter a even number: %d\n",num);

    return 0;
  }