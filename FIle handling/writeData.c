// Write a c program to write data to a text file.

#include<stdio.h>

int main(){
    FILE *file;
    char sentence[100];

    file = fopen("write.txt","w");

    if(file == NULL){
        printf("Can't Open file!\n");
        return 1;
    }

    printf("Write a sentence in opened file: \n");
    fgets(sentence, sizeof(sentence), stdin);

    if (fputs(sentence, file) == EOF) {
        printf("Error writing to file!\n");
        fclose(file);
        return 1;
    }


    fclose(file);

    return 0;
}