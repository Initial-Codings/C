#include <stdio.h>
int main(){

int i;
float myfloats[5];
for(i = 0;i <5;++i){
    printf("Please Enter Float %d: ",i+1);
    scanf("%f",&myfloats[i]);
}

printf("You Entered: ");

for(i = 0; i <5; i++)
    printf("%.2f ", myfloats[i]);
return 0;
}
