/*******************
* Michaael Otyeno
* March 29 2017
* Understanding character functions
********************/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main(){

    char input;
    printf("Enter a character: ");
    scanf("%c",&input);

    if(input <= 'z'+1 && input > 'Z'+1 && isalpha(input))
       printf("%c\n",toupper(input));
    if(input <= 'Z'+1 && isalpha(input))
       printf("%c\n",tolower(input));
    if(isalpha(input) == 0)
       printf("Not a valid character\n");
       return 0;



    return 0;
}








