/*******************************************
* Michael Otyeno                           *
* April 4th 2017                           *
* Understanding structures                 *
* Listened to the problem and came up with *
* a solution                               *
********************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct             //Used a structure to get
{                          //Student's Name
    char *name;
    float mathGrade,englishGrade,  //Math Grade,English Grade
          historyGrade,scienceGrade;//History Grade,Science Grade

}reportCad;

void resultCad(reportCad rc);

int main()
{
    reportCad rc;                      //my reportCad variable named rc
    printf("Enter the students name:");
    char studentName[30];
    fgets(studentName,30,stdin);       //used fgets() to limit the characters to 30
    rc.name = studentName;
    printf("Enter Math Grade: ");
    scanf("%f",&rc.mathGrade);
    printf("Enter English Grade: ");
    scanf("%f",&rc.englishGrade);
    printf("Enter History Grade: ");
    scanf("%f",&rc.historyGrade);
    printf("Enter Science Grade: ");   //scanf fetches the address for the respective entries
    scanf("%f",&rc.scienceGrade);
    putchar('\n');
    resultCad(rc);                     //rc passed in as an argument
                                       // The resultCad function prints the structure variable and the average
    return 0;
}

void resultCad(reportCad rc)
{
    printf("%s%s","Report Card:",rc.name);
    printf("   Math Grade: %.1f%%\n",rc.mathGrade);
    printf("English Grade: %.1f%%\n",rc.englishGrade);
    printf("History Grade: %.1f%%\n",rc.historyGrade);
    printf("Science Grade: %.1f%%\n",rc.scienceGrade);
    printf("Average is: %.1f%%\n",((rc.mathGrade + rc.englishGrade
                                + rc.historyGrade + rc.scienceGrade)/4));
    return;
}






