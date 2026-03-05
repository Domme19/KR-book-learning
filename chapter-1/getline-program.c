#include <stdio.h> 
#define MAXLINE 1000

int getLine(char line[], int maxLine);
void copy(char to[], char from[]);

int main(){

    int len; /* current length*/
    int max;  /*maximum length*/
    char line[MAXLINE]; /*Current input line*/
    char longestLine[MAXLINE];
    max = 0;

    while ((len = getLine(line, MAXLINE)) > 0){
        if (len > max){
            max = len;
            copy(longestLine, line);
        }
    }
    if (max > 0)
        printf("%s", longestLine); 
    
    return 0;
}



int getLine(char line[], int maxLine){
    int c, i;
    i = 0;
    while (i < maxLine-1 && (c = getchar()) != EOF && c != '\n'){
        line[i] = c;
        ++i;
    }
    if (c == '\n'){
        line[i] = c;
        ++i;
    }

    line[i] = '\0'; 
    return i;
}


void copy(char toString[], char fromString[]){
    int i;
    i = 0;

    while ((toString[i] = fromString[i]) != '\0')
        ++i; 
}
