/*******************************************
* Michael Otyeno                           *
* April 4th 2017                           *
* Understanding memory allocation          *
********************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
   int* num = (int*)malloc(sizeof(int)*5);// 20(4*5) Bytes Allocated for the int Array
   int digits;

   digits = 1;
   for(int i = 0; i < 5; i++){ // Fill the Array with numbers 1 to 5
       num[i] = digits;
       digits++;
   }

   for(int i = 0; i < 5; i++)
       printf("%d ", num[i]); // Print numbers 1 to 5 on one line

   free(num);// Always when free allocated memory
             // malloc and free are a pair always free allocated memory
    return 0;
}







