/*******************
* Michael Otyeno
* March 31 2017
* Understanding structures
* No Code Comments for now because
* still learning
********************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void charManipal(char *input);

int main(){

    char input[60];


    printf("Enter your argument:\n");
    fgets(input,60,stdin);
    putchar('\n');
    printf("You entered:\n%s\n",input);
    printf("If you were shouting:\n");
    charManipal(input);

    return 0;
}

void charManipal(char *input){

    while(*input){
        printf("%c",toupper(*input));
        input++;
    }
    return;
}




