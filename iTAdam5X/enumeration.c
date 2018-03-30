#include <stdio.h>
#include <stdlib.h>
/*March 28 2017
Michael Otyeno
*/
   putchar('\n');
typedef enum{

   summer,fall,winter,spring

}season;

void printPhrase(season s);

int main(){

    printPhrase(summer);
    printPhrase(fall);
    printPhrase(winter);
    printPhrase(spring);
    putchar('\n');
    printPhrase(0);  //can overide order
    printPhrase(1);  // example summer = 50 this means
    printPhrase(2);  // fall will 51
    printPhrase(3);
    putchar('\n');
    return 0;
}

void printPhrase(season s){

    if ( s == summer)
        printf("It's hot outside\n");
    else if ( s == fall )
        printf("It's getting cooler\n");
    else if ( s == winter)
        printf("It's cold ouside\n");
    else if ( s == spring)
        printf("It's getting warmer\n");
    }







