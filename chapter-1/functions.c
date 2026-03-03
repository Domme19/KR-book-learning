#include <stdio.h>

int power(int, int); 

int main()
{
    for (int i = 0; i < 10; ++i){
        int firstPower = power(2, i);
        int secondPower = power(-3, i); 
        printf("exponent: %d, first Power is: %d and second Power is: %d\n" , i, firstPower, secondPower);

    }
}


int power(int base, int n){
    int p;
    p = 1;

    for (int i = 1; i <= n; ++i)
        p = p * base;
    return p;
}