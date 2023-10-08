#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINE_LEN 100

char* readString(char* fileName)
{
    char* buffer = (char *)malloc(MAX_LINE_LEN);
    if(!buffer){
        return NULL;
    }
    FILE *fileptr = fopen(fileName, "r");
    if(!fileptr){
        free(buffer);
        return NULL;
    }
    fgets(buffer, MAX_LINE_LEN,fileptr);
    fclose(fileptr);
    buffer[strcspn(buffer, "\n")] = '\0';
    return buffer;
}

char* mysteryExplode(const char* str)
{
    int length = strlen(str);
    if (length == 0) return NULL;

    int newSize = (length * (length +1)) /2;
    char* exploded = (char*)malloc(newSize + 1);
    
    if(!exploded) return NULL;
    int j = 0;
    for(int i = 0; i<length; i++){
        for(int k = 0; k <= i; k++){
            exploded[j++] = str[k];
        }
    }
    exploded[j] = '/0';
    return exploded;
}
