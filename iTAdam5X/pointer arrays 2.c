/*******************
* Michael Otyeno
* April 3rd 2017
* Understanding Pointer Arrays
********************/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main(){

    char *gang [4] = {"Print this first", "Get this one success",
                      "Third one", "Fourth"};

    int arlen = (sizeof(gang))/(4);

    for (int r = 0; r < arlen; r++ )
        printf("%s\n",gang[r]);

    putchar('\n');

    char *cptr;
    for(int i = 0; i < arlen; i++){
        cptr = *(gang + i);
        while (*cptr){
            putchar(*cptr);
            cptr++;
        }
        putchar('\n');
    }

    return 0;
}



