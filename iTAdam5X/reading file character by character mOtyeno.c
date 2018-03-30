/*********************
* Michael Otyeno     *
* April 5th 2017     *
* reading from files *
**********************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char c;
    FILE* file;
    file = fopen("C:\\Users\\PC\\Desktop\\data test.txt","r");//file to read

    do{
        c = fgetc(file); //loop to print every character
        printf("%c",c);  //in the file

    }while( c != EOF);//stops when EOF reached

    fclose(file); //close file always close opened files

    return 0;
}







