/****************************
* Michael Otyeno            *
* April 10-11th 2017        *
* Reading and Writing files *
*****************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    /* variables */
    FILE* fAll;
    FILE* fPAss;
    char* fpAll = "C:\\Users\\PC\\Desktop\\iTAdam5X\\all students.txt";
    char* fpPass = "C:\\Users\\PC\\Desktop\\iTAdam5X\\ passing students.txt";
    char* str;
    int nameLen, total;
    float gpa;

    /* opening of files and condition check for the read file */
    fPAss = fopen(fpPass,"w");
    fAll = fopen(fpAll,"r");
    if(fAll == NULL)
    {
        printf("Unable to open all students file\n");
        exit(1);
    }

    /* processing data for all students
       format separated by spaces namelength string gpa */
    total = 0;
    /* get namelen str gpa */
    for(int i = 0; fscanf(fAll, "%i ",&nameLen)!= EOF; i++)
    {
        str = calloc((nameLen + 1),sizeof(char));
        fscanf(fAll, "%s %f",str,&gpa);

        /* if students passed printed to passing file */
        if(gpa > 65.0)
        {
            fprintf(fPAss,"%i %s %.2f\n",nameLen,str,gpa);
            total++;
        }

    }

    /* print total number of passing students */
    fprintf(fPAss,"Passing students are: %i",total);

    /* clean up */
    for(int i = 0; fscanf(fAll, "%i ",&nameLen)!= EOF; i++)
    {
        free(str);
    }

    fclose(fAll);
    fclose(fPAss);

    /* confirmation to the user */
    printf("Successfully removed all the failing students.\n");
    return 0;
}







