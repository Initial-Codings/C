#include <stdio.h>
#include <stdlib.h>

//Mar/27/2017
int main(){

struct student{
  char *from;
  char *course;
  int age;
};

struct student michael;
        michael.from   = "Edmonton";
        michael.course = "Software Engineering";
        michael.age    = 22;

printf("%lu \n",sizeof(michael));
return 0;
}



