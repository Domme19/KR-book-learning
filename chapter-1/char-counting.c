#include <stdio.h>

int main()
{
    long noChar;

    noChar = 0;

    while (getchar() != EOF)
        ++noChar;
    
    printf("%ld\n", noChar); 

}