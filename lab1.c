#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* readString(char* fileName)
{
    int main();
}

char* mysteryExplode(const char* str)
{
    int length = strlen(str);
    if (length == 0) return NULL;

    int newSize = (length * (length +1)) /2;
    char* exploded = (char*)malloc(newSize + 1);
    
    if(!exploded) return NULL;
    int j = 0;
    for(int i=0; i<length; i++){
        
    }
}
