#include <stdio.h>
#include <stdlib.h>
#define MAXSIZE 1000

int getLine(char line[], int size);
size_t stringLength(const char *s);
char *removeSpace(const char *string);

int main()
{
    // traverse the string
    int len = 0;

    const char *s = "google something";
    size_t length = stringLength(s);
    char *newString = removeSpace(s);

    // printf("string length: %s is: %d\n", s, length);
    printf("removed space string: %s\n", newString);

    // char line[MAXSIZE];
    // char longestLine[MAXSIZE];

    // while ((len = getLine(line, MAXSIZE)) > 0){
    

    //     // TODO: remove trailing blanks
    //     // TODO: remove tabs
    //     // TODO: Delete entire blank lines
    // }

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

char *removeSpace(const char *str){
    size_t length = stringLength(str);
    char *dest = malloc(length + 1);

    if (dest == NULL) return NULL;

    while (*str != '\0'){
        if (*str == ' ' || *str == '\t' || *str == '\n'){
            ++str;
            continue;
        }
        
        *dest = *str;
        ++dest;
        ++str;

    }
    *dest = '\0';
    return dest;
}