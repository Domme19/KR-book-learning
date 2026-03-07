#include <stdio.h>
#define MAXSIZE 1000

int getline(char line[], int size);


int main()
{
    int len;
    len = 0; 
    char line[MAXSIZE]; 

    while ((len = getline(line, MAXSIZE)) > 0){
        if (len >= 80){
            printf("%s\n:", line); 
        }
    }
    
}


int getline(char line[], int size){
    int c;
    int i = 0;

    while (i < size - 1 && (c = getchar()) != EOF && c !='\n' ){
        line[i] = c;
        ++i;
    }

    if (c == '\n'){
        line[i] = '\n';
        ++i; 
    }
    
    line[i] = '\0';
    return i; 
}