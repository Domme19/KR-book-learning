#include <stdio.h>

int main()
{
    int c, noLines;

    while((c = getchar()) != EOF){
        if (c == '\n'){
            ++noLines;
        }
    }
    
    printf("Number of lines: %d\n", noLines); 
}