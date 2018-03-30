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
    unsigned int addrArray[howMany];

    printf("How many address do you want?\n");
    scanf(" %d",&howMany);

    addrArray[howMany] = (unsigned int)malloc(howMany*(sizeof(unsigned int)));
    printf("Enter the address:\n");

    for(int i = 0; i < howMany; i++){
         scanf(" %u",addrArray[i]);
    }

    for(int i = 0; i < howMany; i++){
         printf(" %s\n",addrArray[i]);
    }


    free(addrArray);




    return 0;
}







