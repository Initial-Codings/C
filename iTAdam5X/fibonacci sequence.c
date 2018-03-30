#include <stdio.h>

int main(){

    int i;
    int num1 = 1;
    int num2 = 1;

    printf("%d %d",num1,num2);

    for(i=0;i<18;++i){
        int temp = num2;
        num2 = num2 + num1;
        num1 = temp;
        printf(" %d",num2);
    }

return(0);
}



