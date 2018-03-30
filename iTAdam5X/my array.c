/*******************
* Michaael Otyeno
* March 30 2017
*Understanding Arrays
********************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main(){

    int inpNums[5];
    int total;

    for (int i = 0; i < 3; ++i){
         printf("Enter integer %d: ",i+1);
         scanf("%d",&inpNums[i]);
    }

     printf("You Entered: ");

     total = 0;
     for(int r = 0; r < 3; ++r){
         printf("%d ",inpNums[r]);
         total = total + inpNums[r];
     }
      putchar('\n');
      printf("Sum is: %d",total);
    return 0;
}







