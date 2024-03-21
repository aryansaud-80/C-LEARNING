// Write a c program to read and display contents of a text file

#include<stdio.h>

int main(){
    FILE *file;
    char sentence[100];

    file = fopen("read.txt","r");

    if(file==NULL){
        printf("Can't open file!\n");
        return 1;
    }

    while (fgets(sentence, sizeof(sentence), file) != NULL) {
        printf("%s", sentence);
    }


    fclose(file);

    return 0;
}
