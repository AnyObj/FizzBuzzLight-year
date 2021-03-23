//
//  main.c
//  FizzBuzzLight-year
//
//  Created by Andrea Belcore on 23/03/21.
//
// Regular fizzbuzz with an extra word.

#include <stdio.h>

#define FIZZ 3
#define BUZZ 5
#define LIGHTYEAR 9460730472580800

int main(void)
{
    unsigned long long i;
    for(i=1; i<=LIGHTYEAR*5; ++i)
    {
        if (i % FIZZ == 0)
            printf("Fizz");
        if (i % BUZZ == 0)
            printf("Buzz");
        if (i % LIGHTYEAR == 0)
            printf("Light-year");
        if ((i % FIZZ != 0) && (i % BUZZ != 0) && (i % LIGHTYEAR != 0))
            printf("%llu", i);
        printf("\n");
    }

    return 0;
}





