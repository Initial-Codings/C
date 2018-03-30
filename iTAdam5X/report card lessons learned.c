#include <stdio.h>
#include <stdlib.h>

/* Lessons Learned

 Define a structure as global
When Dealing with other functions
 Define local if u need the structure
locally available to a function
 Functions should be outside main not in
learned that the hard way
 Custom variables need to correspond to
structure memebers
Mar/27/2017
*/

typedef struct {
    char *name;
    int  sciencegrade, mathgrade,
         historygrade,englishgrade;

}reportCard;

void printReportCard(reportCard *rc);

int main(){

    reportCard rc; //report card object
    printf(" Enter the student name: ");
    char str[20];
    fgets(str,20,stdin); //Need to make a *temp* variable
    rc.name = str;
    putchar('\n');
    printf(" Enter the Science Grade: ");
    scanf("%d",&rc.sciencegrade);
    printf(" Enter the Math Grade: ");
    scanf("%d",&rc.mathgrade);
    printf(" Enter the History Grade: ");
    scanf("%d",&rc.historygrade);
    printf(" Enter the English Grade: ");
    scanf("%d",&rc.englishgrade);
    putchar('\n');
    printReportCard(&rc);

    return 0;
}
void printReportCard(reportCard *rc){

    int ave = (rc->sciencegrade + rc->mathgrade
        +rc->historygrade + rc->englishgrade)/4;

    printf(" %s Overall average is: %d\n",rc->name,ave);
    }



