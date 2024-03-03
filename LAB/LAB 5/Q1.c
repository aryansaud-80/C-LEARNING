// WAP to input ‘n’ numbers and sort them in ascending order.

#include<stdio.h>

void sortArray(int arr[5]){
  int temp;
  for(int i=0; i<5; i++){
    for(int j=0; j<5; j++){
      if(arr[i]<arr[j]){
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
      }
    }
  }  
}

int main(){
  int arr[5],i;

  for( i=0; i<5; i++){
    printf("Enter 5 integer: ");
    scanf("%d",&arr[i]);
  }
    
    sortArray(arr);

    for(int i=0; i<5; i++){
      printf("%d ",arr[i]);
    }
    
  return 0;
}