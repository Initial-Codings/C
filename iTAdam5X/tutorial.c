/****************************
* Michael Otyeno            *
* April 10-11th 2017        *
* Reading and Writing files *
*****************************/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int x = 1;
    float e = 0.01;
    int numGuess = 0;
    float ans = 0.0;

    for(int i = 0; abs(pow(ans,2) - x )>= e && ans <= x; i++)
    {
        ans += 0.00001;
        numGuess++;
    }

    printf("Number of guesses:%i\n",numGuess);

    if(abs(pow(ans,2) - x )>= e)
        printf("Failed square root of %i", x);
    else
        printf("%f is close to the square root of %x",ans,x);
    return 0;
}






