/********************************
 * Michael Otyeno               *
 * April 05 2017                *
 * Understanding Reading Files  *
 ********************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Data Manipulation 1S_2.h"//contins the entry struct
                                  //asgnMonth()
int main()
{
    FILE* file;
    file = fopen("C:\\Users\\PC\\Downloads\\Essentials\\Self Taught\\challenges-dan gookin blog\\The CSV File\\prototypes\\miniDataS.txt","r");//FILE* variable
    if(file == NULL){
        printf("\"Unable to open file.\"\n");//good to double check
        exit(1);                      //incase file deleted or moved
    }
    int count;
    fscanf(file," %i",&count);//scans and stores the number of entries

    Entry* eArray;
    eArray = (Entry*)calloc(count, sizeof(Entry));//allocation for memory the 4 Entry Struct
    if (eArray == NULL){
        puts("Memory unavailable");//precaution warning if memory is not available
        return(1);                 //advisable to always check
    }

    for(int i = 0; i < count; i++){//loop fills the Entry variable Array with the four structs
        fscanf(file," %i",&eArray[i].year);

        int num;//num variable
        fscanf(file, " %i", &num);//scans and stores num
        eArray[i].month = asgnMonth(&num);//asgnMonth called and return string stored
        fscanf(file," %i",&eArray[i].day);//scans and stores the day
        fscanf(file," %f",&eArray[i].high);//scans and stores the high temp
        fscanf(file," %f",&eArray[i].low);//scans and stores the low temp

        printf("%i. %s %i %i   High: %.1f Low: %.1f\n",i+1,eArray[i].month,eArray[i].day,eArray[i].year,
                                                eArray[i].high,eArray[i].low);//print out of the results

    }
    //clean up
    fclose(file);//closes the miniDataS.txt
    free(eArray);//frees allocated memory back to the heap
    return (0);
}

