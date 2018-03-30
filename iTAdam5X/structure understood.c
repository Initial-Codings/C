/*
March/24/2017
Made my own structure Success!!
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct{

    int number;
    int numerator;    /*Members*/
    int denominator;
}mixedfraction;       //structure (variable)

void printfrac(mixedfraction f1);
int main(){

    mixedfraction myfraction;     //mixedfraction declared as
    myfraction.number      = 2;   //myfraction
    myfraction.numerator   = 1;
    myfraction.denominator = 2;

    mixedfraction otherfraction;     //mixedfraction declared as
    otherfraction.number      = 3;   //myfraction
    otherfraction.numerator   = 1;
    otherfraction.denominator = 2;

    mixedfraction fArray[] = {myfraction,otherfraction}; //Array for fractions
    for(int i = 0;i < 2;i++)                             //Loop to print the Elements
            printfrac(fArray[i]);

return 0;
}

void printfrac(mixedfraction f1){  //function to print myfraction
                                   //as a unit
    printf("%d %d/%d ",f1.number,f1.numerator,f1.denominator);
}




