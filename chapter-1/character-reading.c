#include <stdio.h>

int main()
{
    int c;

    // c = getchar();

    while ((c = getchar()) != EOF) {
        putchar(c);
    }
    
    printf("Expression (c != EOF) after EOF is: %d\\n", c != EOF);
}