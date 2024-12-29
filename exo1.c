#include<stdio.h>

int main(){
    FILE* file = fopen("Hello.text", "w");
    if (file == NULL){
        printf("File could not be created.\n");
        return 1;
    }
    fprintf(file, "Hello, World\n");
    fclose(file);
    printf("File created and text written successfully.\n");
    return 0;
}
