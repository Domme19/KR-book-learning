#include <stdio.h>

int main()
{
    int c;
    int noBlank;
    noBlank = 0;

    while ((c = getchar()) != EOF){
        if (c == ' '){
            ++noBlank;
            if (noBlank == 1){
                putchar(c);
            }
            continue;
        }

        noBlank = 0;
        putchar(c); 
    }
}