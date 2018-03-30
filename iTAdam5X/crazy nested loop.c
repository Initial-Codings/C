/*
Michaael Otyeno
March 29 2017
Nested loops crazy observation
*/
#include <stdio.h>
#include <stdlib.h>
#define ROWS 10
#define COLUMNS 10
int main(){

    for(int row = 1; row <= ROWS; row++){
        for(int col = COLUMNS; col >= row; col--){
            printf("%c",' ');
        }for(int ch = 1; ch <= row; ch++){
           printf("%c",'*');
        }for(int ch1 = 1; ch1 <= row; ch1++){
            printf("%c",'*');
        }for(int ch2 = 10; ch2 >= row; ch2--){
            printf("%c",' ');
        }
        putchar('\n');
    }

    return 0;
}








