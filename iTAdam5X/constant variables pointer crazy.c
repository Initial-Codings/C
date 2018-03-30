#include <stdio.h>
#include <stdlib.h>
//March 28 2017

int main(){

    int i = 3,j = 4;
    const int *ip1 = &i;
    ip1 = &j;

    int *const ip2 = &i;
    *ip2 = 8;

     const int *const ip3 = &i;

    return 0;
}

/*the heirachy the same in all computers
char <= short int <= int <= long int <=  long long int
*/





