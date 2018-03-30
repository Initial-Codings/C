#include <stdio.h>
#include <stdlib.h>
/*March 27 2017
Michael Otyeno
*/

int main(){
unsigned char c = 255; //1 byte -128 to +127, 0 to 255
unsigned short int s = 64000; //2 bytes
unsigned int i = 4294000000; //4 bytes
unsigned long int l = 4294000000;//4 bytes
unsigned long long int ll  = 92236326492349324; //8 bytes 2 to the 63rd power is max this is just a random huge number to represent it

printf("%u\n",c);
printf("%u\n",s);
printf("%u\n",i);
printf("%lu\n",l);
printf("%llu\n",ll);
return 0;
}

/*Signed That is it can be either positive or negative. An unsigned integer is assumed to be positive.
This is important in computing because the numbers are stored (usually) as a fixed number of binary digits.
Unsigned important when dealing with ids.
For a signed integer one bit is used to indicate the sign - 1 for negative, zero for positive.
*/





