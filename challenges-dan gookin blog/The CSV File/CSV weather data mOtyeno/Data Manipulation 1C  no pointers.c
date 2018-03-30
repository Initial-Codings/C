/********************************
 * Michael Otyeno               *
 * April 07 2017                *
 * The CSV Challenge            *
 ********************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Data Manipulation 1C no pointers.h"//contains the entry struct
                                  //fopenVerify(File* file) allocVerify(void* p)
int main()
{
    char* months[12] = {"January","February","March","April","May","June",
                        "July","August","September","October","November","December"};//month strings array
                                                                                     //technically an array of pointers
    int year, monthNum, day;
    float high,low;

    FILE* file;
    file = fopen("C:\\Users\\PC\\Downloads\\Essentials\\Self Taught\\challenges-dan gookin blog\\The CSV File\\weather_data.csv","r");//FILE* variable
    fopenVerify(file);

    int count;
    fscanf(file," %i",&count);//scans and stores the number of entries

    for(int i = 0; i < count; i++)//loop fills the Entry variable Array with the four structs
    {

        fscanf(file,"%i,%i,%i,%f,%f",&year,&monthNum,&day,&high,&low);//scan and store the whole string

        printf("%02i. %8s %02i %4i\tHigh: %3.1f\tLow: %3.1f\n",i+1,months[(monthNum - 1)],day,year,high,low);//print out of the results

    }
    //clean up
    fclose(file);//closes the miniDataS.txt
    return (0);
}

