#include <stdio.h>
#define IN 1
#define OUT 0
#define MAX_SIZE 100

int main()
{
    // print a length of a word
    // potential bug to be uncovered later
    
    int c, wordLength, state, currentIndex;
    int wordsCountArray[MAX_SIZE];
    state = OUT;
    currentIndex = 0; 
    wordLength = 0;

    for (int i = 0; i < MAX_SIZE; ++i)
        wordsCountArray[i] = 0;

    while ((c = getchar()) != EOF){
        if (c == ' ' || c == '\t' || c == '\n'){
            if (state == IN){
                wordsCountArray[currentIndex] = wordLength;
                wordLength = 0;
                if (currentIndex < MAX_SIZE)
                    ++currentIndex;
                state = OUT;
            }
            state = OUT;

        }else if (state == OUT){
            state = IN;
            wordLength = 1;
        }else if (state == IN){
            ++wordLength;
        }

    }

    for (int i = 0; i < MAX_SIZE ; ++i){
        printf("Words: %d\n", wordsCountArray[i]); 
    }

    // printing horizontal histogram
    for (int i = 0; i < MAX_SIZE; ++i){
        int currentLength = wordsCountArray[i];
        if (currentLength > 0){
            for (int j = 0; j < currentLength; ++j){
                printf("#");
            }
            printf("\n"); 
        }
    }


}