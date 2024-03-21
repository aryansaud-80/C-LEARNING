// Write a c program to append data to an existing text file.

#include<stdio.h>

int main() {
    FILE *file;
    char sentence[100];

    file = fopen("write.txt","a");

    if(file == NULL){
        printf("Can't open file!\n");
        return 1;
    }

    printf("Append data in the file: \n");
    fgets(sentence, sizeof (sentence),stdin);

    if(fputs(sentence,file)==EOF){
        printf("Can't append the data!");
        fclose(file);
        return 1;
    }

    fclose(file);

    return 0;
}