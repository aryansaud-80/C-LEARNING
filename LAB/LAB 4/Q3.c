// Display the multiplication table of any number given by the user 

#include<stdio.h>

int main() {
    int n, table;
    printf("Enter a number: ");
    scanf("%d",&n);

    for(int i=1; i<=10; i++){
        table = n*i;
        printf("%d\n",table);
    }

    return 0;
}