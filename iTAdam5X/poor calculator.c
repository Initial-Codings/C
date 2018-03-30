/*Started on March 23 2016
  Michael Otyeno
  Calculator with 3 options
*/

#include<stdio.h>
#include<math.h>

int main(){

//Variables
 float a;
 float b;
 float c;
 int slct;

 //Selections Available For Calaculation
 printf("Which operation do you require?");
 printf("\n\t1.multiplication\n\t2.substraction\n\t3.addition\n\t4.division\n");
 putchar('\n');
 printf("Enter the number: ");
 scanf("%d",&slct);
 putchar('\n');

 //User Digits
 if (slct == (isalnum())||slct <= 0||slct <= 0){
    printf("Please Enter Valid Numbers");
    exit(0);
 }else if (slct == 1||slct == 2||slct == 3){
    printf("Enter 1st digit: ");
    scanf("%f",&a);
    printf("Enter 2nd digit: ");
    scanf("%f",&b);
    printf("Enter 3rd digit: ");
    scanf ("%f",&c);
 }if (slct == 4){
    printf("Enter 1st digit: ");
    scanf("%f",&a);
    printf("Enter 2nd digit: ");
    scanf("%f",&b);
 }

 //Selection Computation And Output
 switch(slct){
     case 1:
          printf("Solution: %.2f * %.2f * %.2f = %.2f",a,b,c,a*b*c);
          break;
     case 2:
          printf("Solution: %.2f - %.2f - %.2f = %.2f",a,b,c,a-b-c);
          break;
     case 3:
          printf("Solution: %.2f + %.2f + %.2f = %.2f",a,b,c,a+b+c);
          break;
     case 4:
          printf("Solution: %.2f / %.2f = %.2f",a,b,a/b);
          break;

     default:
          printf("Please Enter Valid Numbers");
 }

return 0;
}
