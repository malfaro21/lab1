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
    int len = (strlen(str) * (strlen(str) + 1) /2) + 1;
    char* ans = (char*) malloc(len);
    if(!ans){
        return NULL;
    }
    
}
