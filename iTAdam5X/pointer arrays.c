/*******************
* Michaael Otyeno
* April 3 2017
* Understanding pointer arrays
********************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(){

    char *gang[5] = {"Spanky","Buckwheat",
                     "Alfafa","Darla","Pete the Pup"}; //5 memory addresses stored
                                                       //Each one of these address are 4 bytes in size

    int arlen = (sizeof(gang) / 4);// Size of gang divided by the size of a pointer
                                   //Result is the array length of 5

    for (int i = 0; i < arlen; i++)//Loop to print the strings
        printf("%u\n",gang[i]);//Can use the %u to prove indeed the five characters
                               //are memory addresses and relate to one another
    return 0;
}





