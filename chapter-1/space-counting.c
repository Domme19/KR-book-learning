#include <stdio.h>

int main()
{
    int c, blankCount, tabCount, lineCount;
    blankCount = 0;     /* to count blanks in the input*/
    tabCount = 0;       /* to count tab count in the input*/
    lineCount = 0;      /*to count line count in the input*/

    while ((c = getchar()) != EOF){
        if (c == '\n')
            ++lineCount;
        if (c == '\t')
            ++tabCount;
        if (c == ' ')
            ++blankCount;
    }

    printf("Blank count: %d\n", blankCount);
    printf("Tab count: %d\n", tabCount);
    printf("Line count: %d\n", lineCount); 
}