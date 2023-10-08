#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* readString(char* fileName)
{
    FILE *file = fopen(fileName, "r");
    if(!file){
        return NULL;
    }
    char *buffer = (char *)malloc(100 * sizeof(char));
    if(!buffer){
        fclose(file);
        return NULL;
    }
    char *resultString = NULL;
    if(fgets(buffer, 100, file)){
        size_t len = fileNamelen(buffer);
    }
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
