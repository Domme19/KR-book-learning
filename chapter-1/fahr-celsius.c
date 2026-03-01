#include <stdio.h>
// define magic numbers
#define LOWER 0     /* LOWER LIMIT OF THE TABLE*/
#define UPPER 300   /* Upper limit*/
#define STEP 20     /* Step size*/

int main()
{
    /* Print Fahrenheit-Celsius table */
    int fahr;

    for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
        printf("%3d %6.1f\n", fahr, (5.0/9.0) * (fahr-32)); 

    // to modify the table to print the conversion from 300 to 0 (in reverse order)

    printf("-----------------------------------------\n");
    printf("Reverse order\n");

    for (fahr = UPPER; fahr >= LOWER ; fahr = fahr - STEP)
        printf("%3d %6.1f\n", fahr, (5.0/9.0) * (fahr-32)); 

}