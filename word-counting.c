#include <stdio.h>
#define IN 1 
#define OUT 0


int main()
{
    int c, state, noWords;
    state = OUT;
    noWords = 0;


    // a word does not have a space

    while ((c = getchar()) != EOF){
        // verify if encounter the first character
        if (c == ' ' || c == '\t' || c == '\n'){
            state = OUT; 
        }else if (state == OUT){
            state = IN;
            ++noWords;
        }

    }

    printf("Number of words: %d\n", noWords); 


}