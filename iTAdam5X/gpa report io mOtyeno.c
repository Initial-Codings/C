/******************
* Michael Otyeno  *
* April 10th 2017 *
* Writing to files*
*******************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE* f;
    int id, studentCount;
    float gpa;
    char* fPath = "C:\\Users\\PC\\Desktop\\studentGpas.txt";
    char studentName[30];

    /* report creation */
    f = fopen(fPath,"w");

    /* Get then print student count to file */
    printf("Enter the amount of students required? ");
    scanf("%i",&studentCount);
    fprintf(f,"Number of students in the report: %i\n",studentCount);
    putchar('\n');

    /* Row Header format */
    fputc('\n',f);
    fprintf(f,"Student id\tName Lenghth\tStudent Name\tStudent gpa\n");

    /*Get the variables then output the format string
      namelength studentName gpa format of the string */
    for(int i = 0; i < studentCount; i++)
    {
        printf("Enter the student name: ");
        scanf("%s",studentName);
        printf("Enter the student id: ");
        scanf("%i",&id);
        printf("Enter the student gpa: ");
        scanf("%f",&gpa);
        putchar('\n');

        fprintf(f,"%10i\t%12i\t%12s\t%11.2f\n",id,
                                      strlen(studentName),
                                      studentName,
                                      gpa);
    }

    /* Confirm to the user the report generation */
    printf("Report Generated Successfully!!\n");
    printf("Location of file %s\n",fPath);

    /*close the file*/
    fclose(f);
    return 0;
}







