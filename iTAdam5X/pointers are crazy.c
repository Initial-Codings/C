#include <stdio.h>

int main(){

    int ar[] = {100,100,5,3,1,10};
    int *par = ar;
    printf("int array ar\n");
    printf("%d\t%p\t%lu bytes\n",ar,ar,sizeof(ar));
    printf("%u\n",ar);
    putchar('\n');

    float ar1[] = {100,100,5,3,1,10};
    float *par1 = ar1;
    printf("float array ar1\n");
    printf("%d\t%p\t%lu bytes\n",ar1,ar1,sizeof(ar1));
    printf("%u\n",ar1);
    putchar('\n');

    char ar2[] = {100,100,5,3,1,10};
    char *par2 = ar2;
    printf("char array ar2\n");
    printf("%d\t%p\t%lu bytes\n",ar2,ar2,sizeof(ar2));
    printf("%u\n",ar2);
    putchar('\n');

    char b;
    char *pb = &b;
    printf("char b\n");
    printf("%d\t%p\t%lu bytes\n",b,pb,sizeof(b));
    printf("%u\n",b);
    putchar('\n');

    int c = 1;
    int *pc = &c;
    printf("int c\n");
    printf("%u %4d\t%p\t%lu bytes\n",pc,*pc,pc,sizeof(c));
    printf("%d\n",&c);
    printf("%12d\n",c);
    printf("%i %10u\n",c,c);
    putchar('\n');

    float d = 1;
    float *pd = &d;
    printf("float d\n");
    printf("%u%6.2f\t%p\t%lu bytes\n",pd,*pd,pd,sizeof(d));
    printf("%13.2f\n",d);
    printf("%13.2u\n",d);
return 0;
}
