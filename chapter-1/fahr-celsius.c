#include <stdio.h>

int main()
{
    /* Print Fahrenheit-Celsius table */
    int fahr;

    for (fahr = 0; fahr <= 300; fahr = fahr + 20)
        printf("%3d %6.1f\n", fahr, (5.0/9.0) * (fahr-32)); 

    // to modify the table to print the conversion from 300 to 0 (in reverse order)

    printf("-----------------------------------------\n");
    printf("Reverse order\n");

    for (fahr = 300; fahr >= 0; fahr = fahr - 20)
        printf("%3d %6.1f\n", fahr, (5.0/9.0) * (fahr-32)); 

}