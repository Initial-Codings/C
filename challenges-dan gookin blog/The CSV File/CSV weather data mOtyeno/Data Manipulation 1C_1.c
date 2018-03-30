/********************************
 * Michael Otyeno               *
 * April 07 2017                *
 * The CSV Challenge            *
 ********************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Data Manipulation 1C_1.h"//contains the entry struct
                                  //fopenVerify(File* file) allocVerify(void* p)
int main()
{
    char* months[12] = {"January","February","March","April","May","June",
                        "July","August","September","October","November","December"};//month strings array
                                                                                     //technically an array of pointers
    FILE* file;
    file = fopen("C:\\Users\\PC\\Downloads\\Essentials\\Self Taught1\\challenges-dan gookin blog\\The CSV File\\weather_data.csv","r");//FILE* variable
    fopenVerify(file);

    int count;
    fscanf(file," %i",&count);//scans and stores the number of entries

    Entry* eArray;
    eArray = (Entry*)calloc(count, sizeof(Entry));//allocation for memory the 4 Entry Struct
    allocVerify(eArray);

    for(int i = 0; i < count; i++)//loop fills the Entry variable Array with the four structs
    {
        int monthNum;
        fscanf(file,"%i,%i,%i,%f,%f",&eArray[i].year,&monthNum,&eArray[i].day,
                                      &eArray[i].high,&eArray[i].low);//scan and store the whole string

        eArray[i].month = months[(monthNum - 1)];//(monthNum - 1) because the array starts at the zero index
                                               //*(months + (monthNum - 1)) pointer notation array notation months[(monthNum - 1)]

        printf("%02i. %8s %02i %4i\tHigh: %3.1f\tLow: %3.1f\n",i+1,eArray[i].month,eArray[i].day,eArray[i].year,
                                                eArray[i].high,eArray[i].low);//print out of the results

    }
    //clean up
    fclose(file);//closes the miniDataS.txt
    free(eArray);//frees allocated memory back to the heap
    return (0);
}

