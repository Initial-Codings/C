/*******************
* Michaael Otyeno
* March 30 2017
* Understanding structures
* No Code Comments for now because
* still learning
********************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

typedef struct{
    int numerator;
    int denominator;

}fraction;

void printFrac(fraction f, int count);

int main(){

    fraction f1 = {
    1,2
    };

    fraction f2 = {
    2,3
    };

    fraction fArr[] = {f1,f2};

    for(int i = 0; i < 2; ++i)
        printFrac(fArr[i],i);

    return 0;
}

void printFrac(fraction f, int count){

    printf("Here is your fraction %d: %d/%d\n",count + 1,f.numerator,f.denominator);

    return;
}





