#include <stdio.h>
#include <stdlib.h>
//March 27 2017

int main(){
char c = 127; //1 byte
short int s = 32000; //2 bytes
int i = 2147000000; //4 bytes
long int li = 2147000000;//4 bytes
long long int lli  = 92236326492349324; //8 bytes 2 to the 63rd power is max this is just a random huge number to represent it

printf("%c\n",c);
printf("%i\n",s);
printf("%i\n",i);
printf("%li\n",li);
printf("%lli\n",lli);
return 0;
}

/*the heirachy the same in all computers
char <= short int <= int <= long int <=  long long int
*/





