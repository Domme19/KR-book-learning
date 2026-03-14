#include <stdio.h>
#include <stdlib.h>
#define MAXSIZE 1000

int getLine(char line[], int size);
size_t stringLength(const char *s);
char *removeTrailingBlanks(char *dest, char *src, int len);

int main()
{
    // traverse the string
    // int len = 0;
    // char line[MAXSIZE]; 
    // while ((len = getLine(line, MAXSIZE)) > 0){

    // }

    char *srcString = "something   ";
    char destString[MAXSIZE]; 
    int lenSrcString = stringLength(srcString);
    char *newString = removeTrailingBlanks(destString, srcString, lenSrcString);

    int newLength = stringLength(newString);
    int oldLength = stringLength(srcString);

    printf("Old length: %d ----- New length: %d\n", oldLength, newLength); 

    printf("current string: %s\n", newString); 

}

int getLine(char line[], int size){
    int c, i;
    i = 0;

    while (i < size - 1 && (c = getchar()) != EOF && c != '\n'){
        line[i] = c;
        i++;
    }

    if (c == '\n'){
        line[i] = c;
        ++i;
    }

    line[i] = '\0';
    return i;
    
}

size_t stringLength(const char *s){
    size_t len;
    len = 0; 

    while (*s != '\0'){
        ++s;
        ++len;
    }
    return len;
}

// to build remove trailing space


char *removeTrailingBlanks(char *destString, char *src, int len){
    int i = 0;
    int currentIndex = len - 1;

    // printf("Current Index is: %d\n", currentIndex); 
    // printf("Char: %c\n", src[5]); 
    // I was hitting the null character
    // hence the trailing space could were not removed

    while (currentIndex > 0){
        char currentChar = src[currentIndex];
        if (currentChar != ' ' && currentChar != '\t' && currentChar != '\n'){
            break;
        }
        currentIndex--;
    }

    // printf("The current Index outside of the loop is: %d\n", currentIndex);

    while (i < currentIndex + 1){
        destString[i] = src[i]; 
        i++;
    }

    destString[i] = '\0';
    return destString;
}