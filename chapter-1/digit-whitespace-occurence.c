#include <stdio.h>

int main()
{
    /* count digits, white space, others occurrences*/
    int c, noBlanks, noTabs, noNewLines;
    noBlanks = noTabs = noNewLines = 0;
    
    int noDigits[10];

    for (int i = 0; i < 10; ++i)
        noDigits[i] = 0;


    while ((c = getchar()) != EOF){
        if (c >= '0' && c <= '9')
            ++noDigits[c - '0']; 
        if (c == ' ')
            ++noBlanks;
        if (c == '\t')
            ++noTabs;

        if (c == '\n')
            ++noNewLines;

        putchar(c); 
        
    }


    printf("Digits print: ");
    
    for (int i = 0; i < 10; ++i){
        printf(" %d", noDigits[i]); 
    }

    printf("Number of blanks: %d\n", noBlanks);
    printf("Number of Tabs: %d\n", noTabs);
    printf("Number of Lines: %d\n", noNewLines); 
}