/*******************************************
* Michael Otyeno                           *
* April 4th 2017                           *
* Understanding structures                 *
* Listened to the problem and came up with *
* a solution                               *
********************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int howMany = 0;
    int *numsArray = {0};
    float average;
    int total;

    printf("How many numbers do you want to average?\n");
    scanf(" %d",&howMany);

    numsArray = (int*)malloc(howMany*(sizeof(int)));
    printf("Enter them numbers:\n");

    total = 0;
    for(int i = 0; i < howMany; i++){
         scanf(" %d",&numsArray[i]);
         total = total + numsArray[i];
    }

    average = (float)total / (float)howMany;

    printf("Average is %.2f",average);

    free(numsArray);




    return 0;
}







