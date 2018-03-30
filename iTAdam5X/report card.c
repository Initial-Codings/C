#include <stdio.h>
#include <stdlib.h>

void printreportcard(reportcard *rc);

int main(){

    struct reportcard{ //structure

    char *name; //*name shorthand for name[]
    int sciencegrade, mathgrade,
        historygrade,englishgrade;
    };

    struct reportcard rc; //student object
        printf("Enter the student name: ");
        char name[20];
        scanf("%s",rc->name);
        printf("Enter the Science Grade: ");
        scanf("%d",&rc.sciencegrade);
        printf("Enter the Math Grade: ");
        scanf("%d",&rc.mathgrade);
        printf("Enter the History Grade: ");
        scanf("%d",&rc.historygrade);
        printf("Enter the English Grade: ");
        scanf("%d",&rc.englishgrade);


    void printreportcard(reportcard *rc){

    int ave = (rc->sciencegrade + rc->mathgrade
        +rc->historygrade + rc->englishgrade)/4;

    printf("%s Overall average is: %d",rc->name,ave);
    }

    return 0;
}



