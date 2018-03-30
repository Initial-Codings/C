/*****************************************************
* Michaael Otyeno
* March 31 2017
* Understanding pointers,pointer functions, and srings
******************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

char *longer(char *str1, char *str2);//Functions that return pointers when named
                                    //(variable type) *name of function(parameters based on arguments)
                                    // These case the arguments are strings which are character pointers
int main(){

    char *str1 = "1. Starting to understand C.";//Strings are in pointer notation, array notation is str1[]
    char *str1p = str1;                         //Address for str1 declared and intialized immediately (advisable)

    char *str2 = "2. C you are powerful now I am longer.";
    char *str2p = str2;

    char *result = longer(str1p,str2p);//result stores the adress of the longer string returned by the longer function
    printf("%s",result);               // The longer string of the two is printed to the screen
    return 0;
}


char *longer(char *str1, char *str2){

    if (strlen(str1) > strlen(str2))//checks the conditions and returns
        return(str1);               //the adress of longer argument
    else
        return(str2);
}
